#ifndef CALCULATIONS
#define CALCULATIONS
#include <iostream>
#include<vector>
#include <queue>
typedef unsigned char byte;
enum ERRORS {DivideByZero,SubtractionIsNegative};

using namespace std;
bool getInput(string &first, string &second, char &op);
void standardize(string &line);
void reverse(string &line, vector<byte> &bignum);
void process(string &first, string &second, char op, string &result);
void displayReverseCommas(const vector<byte> &num);
void add(const vector<byte> &v1, const vector<byte> &v2, vector<byte> &result, bool addition);
void multiply(const vector<byte> &v1,const byte size,vector<byte> &result);
void bigmultiply(const vector<byte> &v1,const vector<byte> &v2,vector<byte> &result);
void sanitize(string &line);
void compliment( vector<byte>& OG,vector<byte>& NG);
void saveReverseCommas(const vector<byte> &num, string &result);
bool GreaterThan(const vector <byte> v1, const vector<byte>v2);
void ALTDivision(vector<byte>& v1, const vector<byte>& v2,vector<byte>& result);
void subtractloop(vector<byte>& v1, const vector<byte> &v2, vector<byte>& result);
bool Equality(const vector<byte>&v1,const vector<byte>& v2);
void subtract(const vector<byte> &v1, const vector<byte> &v2, vector<byte> &result);
void demo();
void demo()
{
    // performes multiplication
    long int a;
    long int b;
    cout<<"enter num 1"<<endl;
    cin>>a;
    cout<<"enter num 2"<<endl;
    cin>>b;
    cout<<"Result:"<<a*b<<endl;
}
void standardize(string &line)
{
    //erase trailing spaces, leading spaces and uppercases everything
    for(size_t i = 0; i <line.size();i++)
        line[i] = toupper(line[i]);

    while(line[0] == ' ')
        line.erase(0,1);

    while(line[line.size()-1] == ' ')
        line.erase(line.size()-1);
}
void compliment( vector<byte>& OG,vector<byte>& NG)
{
    //bitshifts and creates the numbers compliment and stores it in NG
    long long int size = (OG.size()-1);
    for(long long int i = 0 ; i < size; ++i )
    {
        if(i==0)
            NG.push_back( ~(OG[i]-1) + 10);
        else
            NG.push_back( ( ~(OG[i]-1) + 9));
    }
}
void sanitize(string &line)
{
    //removes all non-numbers
    size_t size;
    while(line[0]<'0' || line[0] > '9')
        line.erase(0,1);
    while(line[size = line.size()-1]<'0' || line[size] > '9')
        line.erase(size);
}
void reverse(string &line, vector<byte> &bignum)
{
    //inserts the string character by character in reverse into bignum
    for(int i = line.size()-1; i >= 0; --i)
        bignum.push_back( (line[i]-48));
}
bool getInput(string &first, string& second, char &op)
{
    // acts similiar to a do while loop
    // finds operators position and sets (op,first,second)
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

void displayReverseCommas(const vector<byte> &num)
{
    // Prints vector in reverse with commas
    for(int i = num.size()-1; i >= 0; --i)
    {
        cout<<(unsigned short) num[i];
        if(i && !(i%3))
            cout<<",";
    }
    cout<<endl;
}
void saveReverseCommas(const vector<byte> &num,string& result)
{
    char temp;
    // Prints vector in reverse with commas
    for(int i = num.size()-1; i >= 0; --i)
    {
        temp=((unsigned char)num[i]+48);//line[i]-48)
        //cout<<"temp"<<temp;
        result.push_back(temp);
        if(i && !(i%3))
            result.push_back(',');
    }
    cout<<"result: "<<result<<endl;
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
            add(hold,v1,result,true);
            hold=result;
            result.clear();
        }
        result=hold;
    }
}
void bigmultiply(const vector<byte> &v1, const vector<byte> &v2, vector<byte> &result)
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
            result.insert(result.begin(),t);

        value.clear();
        finalresult=hold;
        hold.clear();
        add(finalresult,result,hold,true);
        result.clear();
    }
    result=hold;
}
void add(const vector<byte> &v1, const vector<byte> &v2, vector<byte> &result,bool addition)
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
    if(carry & addition)
        result.push_back(carry);
}
void process(string &first,string& second, char op,string&result)
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
        add(firstV,secondV,resultV,true);
        saveReverseCommas(resultV, result);
    }
    else if(op=='-')
    {
        reverse(first, firstV);
        reverse(second, secondV);
        try
        {
            subtract(firstV,secondV,resultV);
            displayReverseCommas(resultV);
            saveReverseCommas(resultV, result);
        }
        catch(ERRORS)
            {
            cout<<"invalid"<<endl;
        }
    }
    else if(op=='*'|| op==',')
    {
           cout<<first<<'*'<<second<<endl;
           reverse(first, firstV);
           reverse(second, secondV);
           bigmultiply(firstV,secondV,resultV);
           saveReverseCommas(resultV, result);
    }
     else if(op=='/')
    {
           cout<<first<<'/'<<second<<endl;
           reverse(first, firstV);
           reverse(second,secondV);
           try
           {
                   ALTDivision(firstV,secondV,resultV);
                   saveReverseCommas(resultV, result);
                   cout<<endl;

           }
           catch(ERRORS)
           {
               result="Invalid";
           }
    }
    cin.clear();
}
void ALTDivision(vector<byte>& v1, const vector<byte>& v2,vector<byte>& result)
{
    if(!GreaterThan(v1,v2)&&!Equality(v1,v2))
        result.push_back(0);

    vector<byte> V1;
    vector<byte> zero;
    zero.push_back(0);
    if(v2.empty())
        throw DivideByZero;
    vector<byte> temp;
    long int i = v1.size()-1;

    while(i >=0 )
    {
        while(GreaterThan(v2,V1) && i >=0)
        {
            V1.insert(V1.begin(),v1[i]);
            --i;
        }

        if(V1.back()==0)
            V1.pop_back();

        if(GreaterThan(V1,v2) || Equality(V1,v2) )
        {
            subtractloop(V1,v2,temp);
            for(unsigned long int Y =0; Y <= temp.size()-1;++Y)
                result.insert(result.begin(),temp[Y]);
            temp.clear();
        }
        else
            result.insert(result.begin(),0);
        if(V1.empty())
            V1.push_back(0);
    }
    if(result.size()>1&&result.back()==0)
        result.pop_back();

     if(!(Equality(result,zero)))
     {
        v1.clear();
        v1=V1;
        V1.clear();
    }

}
void subtractloop(vector<byte>& v1, const vector<byte> &v2, vector<byte>& result)
{
    vector<byte> temp;
    vector<byte> one;
    one.push_back(1);
    while(GreaterThan(v1,v2) || Equality(v1,v2) )
    {
        subtract(v1,v2,temp);
        v1=temp;
        temp.clear();
        if(((unsigned short)v1.back())==0)
            v1.resize(v1.size()-1);

        add(result,one,temp,true);
        result=temp;
        temp.clear();
    }
}

bool Equality(const vector<byte>&v1,const vector<byte>& v2)
{
    bool SameSize = v1.size()==v2.size()? true : false;
    if(SameSize)
    {
        int size = v1.size();
        for(int i = 0;i <size;++i )
        {
            if(v1[i] != v2[i])
                return false;
        }
        return true;
    }
    else
        return false;
}
void subtract(const vector<byte> &v1, const vector<byte> &v2, vector<byte> &result)
{
        if(GreaterThan(v2,v1))
            throw SubtractionIsNegative;
        vector<byte> Nv2=v2;

        vector<byte> mycomp;
        size_t r= v1.size();
        size_t original = v2.size();
        for(size_t i= v2.size();i<=r;i++)
            Nv2.push_back(0);
        compliment( Nv2, mycomp);
        Nv2.resize(original);
        byte carry = 0;
        unsigned short int digitResult;
        size_t size = min(v1.size(),mycomp.size());
        for(size_t i = 0; i < size; ++i)
        {
            digitResult = v1[i] + mycomp[i] + carry;
            carry = digitResult/10;
            result.push_back(digitResult % 10);
        }
        if(v1.size() >= mycomp.size())
            for(size_t i = size; i <v1.size()-1; ++i)
            {
                digitResult = v1[i] + carry;
                carry = digitResult/10;
                result.push_back(digitResult % 10);
            }
        else
            for(size_t i = size; i < mycomp.size()-1; ++i)
            {
                digitResult =  mycomp[i] + carry;
                carry = digitResult/10;
                result.push_back(digitResult % 10);
            }
}
bool GreaterThan(const vector <byte> v1, const vector<byte>v2)
{
    if(v1.size()>v2.size())
        return true;
    else if(v1.size()<v2.size())
        return false;
    else
    {
        for(size_t i=1;i<=v1.size();i++)
        {
            if(v1[v1.size()-i]>v2[v2.size()-i])
                return true;
            else if(v2[v2.size()-i]>v1[v1.size()-i])
                return false;
        }
    }
    return false;
}

//Resources
//https://en.wikipedia.org/wiki/C_data_types
//http://stackoverflow.com/questions/75191/what-is-an-unsigned-char
//http://www.cprogramming.com/tutorial/bitwise_operators.html
//https://en.wikipedia.org/wiki/Multiplication_algorithm

#endif // CALCULATIONS

