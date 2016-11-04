#include <iostream>
#include<vector>
typedef unsigned char byte;
using namespace std;
bool getInput(string &first, string &second, char &op);
// makes all uppercase erases all spaces
void standardize(string &line);
void reverse(string &line, vector<byte> &bignum);
void process(string &first, string &second, char op, char position);
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
    {
        bignum.push_back( (line[i]-48));
        cout<<(line[i]-48)<<endl;
    }
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
    }
    else if(op=='-')
    {
           cout<<first<<'-'<<second<<endl;
    }
    else if(op=='*'|| op==',')
    {
           cout<<first<<'*'<<second<<endl;
    }
     else if(op=='/')
    {
           cout<<first<<'/'<<second<<endl;
    }
    cin.clear();
}
