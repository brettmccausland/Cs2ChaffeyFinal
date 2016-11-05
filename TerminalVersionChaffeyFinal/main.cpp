#include <iostream>
#include<vector>
typedef unsigned char byte;
using namespace std;
bool getInput(string &first, string &second, char &op);
// makes all uppercase erases all spaces
void standardize(string &line);
void reverse(string &line, vector<byte> &bignum);
void process(string &first, string &second, char op, char position);
void displayNumberWithCommas(const vector<byte> &num);
void add(const vector<byte> &v1, const vector<byte> &v2, vector<byte> &result);
void multiply(const vector<byte> &v1,const byte size,vector<byte> &result);
void bigmultiply(const vector<byte> &v1,const vector<byte> &v2,vector<byte> &result);
// remove all non numbers
void sanitize(string &line);
int main()
{
    system("clear");
    string first, second;
     vector<string> storage ;
      char op;
      char position=0;
      while(getInput(first,second,op))
          process(first,second,op,position);
      return 0;//a.exec();
}
//erase trailing spaces and leading spaces uppercase everything
void standardize(string &line)
{
    for(size_t i = 0; i <line.size();i++)
        line[i] = toupper(line[i]);

    while(line[0] == ' ')
        line.erase(0,1);

    while(line[line.size()-1] == ' ')
        line.erase(line.size()-1);
}
void sanitize(string &line)
{
    size_t size;
    while(line[0]<'0' || line[0] > '9')
        line.erase(0,1);
    while(line[size = line.size()-1]<'0' || line[size] > '9')
        line.erase(size);
}
void reverse(string &line, vector<byte> &bignum)
{
    for(int i = line.size()-1; i >= 0; --i)
        bignum.push_back( (line[i]-48));
}
bool getInput(string &first, string& second, char &op)
{
    cout<<"in get input"<<endl;
    op=NULL;
    string line,temp,newexpression,equation;
    string input;
    size_t pos=0;

    getline(cin, line);
     if(line.empty())
        return false;
    standardize(line);
    if (line.find(',')!=std::string::npos)
        pos=line.find(',');
    else if (line.find('+')!=std::string::npos)
        pos=line.find('+');
    else if(line.find('-')!=std::string::npos)
        pos=line.find('-');
    else if(line.find('*')!=std::string::npos)
        pos=line.find('*');
    else if(line.find('/')!=std::string::npos)
        pos=line.find('/');

    op = line[pos];
    first = line.substr(0,pos);
    second = line.substr(pos+1);
   //clean
    sanitize(first);
    sanitize(second);
    return true;
}
//my anwser is actually in reverse so i go back to front
void displayNumberWithCommas(const vector<byte> &num)
{
    for(int i = num.size()-1; i >= 0; --i)
    {
        cout<<(unsigned short) num[i];
        if(i && !(i%3))
            cout<<",";
    }
    cout<<endl;
}
void multiply(const vector<byte> &v1,const byte size,vector<byte> &result)
{
    vector<byte> hold;
    hold=v1;
    if(size==0)
        result.push_back(0);
    else
    {
        for(int i=1;i<size;i++)
        {
            add(hold,v1,result);
            hold=result;
            result.clear();
        }
        result=hold;
    }
}
void bigmultiply(const vector<byte> &v1,const vector<byte> &v2,vector<byte> &result)
{
    result=v1;
    size_t t=0;
    vector<byte> value;
    vector<byte>finalresult;
    vector<byte> hold;

    for(size_t i=0; i<v2.size();i++)
    {
        multiply(v1,v2[i],value);
        result=value;
        for(int j=i;j>0;--j)
        {
            result.insert(result.begin(),t);
        }
        value.clear();
        finalresult=hold;
        hold.clear();
        add(finalresult,result,hold);
        result.clear();
    }
    result=hold;
}
void add(const vector<byte> &v1, const vector<byte> &v2, vector<byte> &result)
{
    byte carry = 0;
    unsigned short int digitResult;
    size_t size = min(v1.size(),v2.size());
    for(size_t i = 0; i < size; ++i)
    {
        digitResult = v1[i] + v2[i] + carry;
        carry = digitResult/10;
        result.push_back(digitResult % 10);
    }
    if(v1.size() >= v2.size())
        for(size_t i = size; i <= v1.size()-1; ++i)
        {
            digitResult = v1[i] + carry;
            carry = digitResult/10;
            result.push_back(digitResult % 10);
        }
    else
        for(size_t i = size; i <= v2.size()-1; ++i)
        {
            digitResult =  v2[i] + carry;
            carry = digitResult/10;
            result.push_back(digitResult % 10);
        }
    if(carry)
        result.push_back(carry);
}
void process(string &first,string& second, char op, char position)
{
    //erase leading zeros
    while(second[0]=='0')
        second.erase(0,1);
    while(first[0]=='0')
        first.erase(0,1);

    vector<byte> firstV, secondV,resultV,mycomp,remainder,tempV;

    if(op=='+')
    {
        cout<<first<<'+'<<second<<endl;
        reverse(first,firstV);
        reverse(second,secondV);
        add(firstV,secondV,resultV);
        displayNumberWithCommas(resultV);
    }
    else if(op=='-')
    {
           cout<<first<<'-'<<second<<endl;
    }
    else if(op=='*'|| op==',')
    {
           cout<<first<<'*'<<second<<endl;
           reverse(first, firstV);
           reverse(second, secondV);
           bigmultiply(firstV,secondV,resultV);
           displayNumberWithCommas(resultV);
    }
     else if(op=='/')
    {
           cout<<first<<'/'<<second<<endl;
    }
    cin.clear();
}
