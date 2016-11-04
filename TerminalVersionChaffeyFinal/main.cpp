#include <iostream>
#include<vector>
typedef unsigned char byte;
using namespace std;
bool getInput(string &first, char &op, string &second, vector<string> &storage );

// makes all uppercase erases all spaces
void standardize(string &line);

void reverse(string &line, vector<byte> &bignum);
void process(string &first, char op, string &second, vector<string> & storage, char position);
void getIndex(string& in,vector<string>& storage );

// remove all non numbers
void sanitize(string &line);
int main()
{
    string first, second;
     vector<string> storage ;
      char op;
      char position=0;
      while(getInput(first,op,second,storage))
          process(first,op,second,storage,position);
      return 0;//a.exec();
}

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
bool getInput(string &first, char &op, string &second, vector<string> &storage)
{
    op=NULL;
    string line,temp,newexpression,equation;
    bool b=false;
    int search =0;
    string input;
    size_t pos=0;
    size_t pos1=0;

    getline(cin, line);
     if(line.empty())
        return false;
    size_t whichCommand;
    string firstWord;
    standardize(line);
    temp=line;
    if (line.find(',')!=std::string::npos)
        pos=line.find(',');
    if (line.find('+')!=std::string::npos)
        pos=line.find('+');
    else if(line.find('-')!=std::string::npos)
        pos=line.find('-');
    else if(line.find('*')!=std::string::npos)
        pos=line.find('*');
    else if(line.find('/')!=std::string::npos)
        pos=line.find('/');
    op = line[pos];
    first = line.substr(0,pos);
    getIndex(first,storage);
    sanitize(first);
    return true;
}
void getIndex(string& in,vector<string>& storage )
{
    string temp=in;
    string hold="R:";
    size_t pos=0;
    char L ;
    for (size_t i =0; i<in.size();i++)
    {
        L=in[i];
        if(L >64 && L < 90)
        {
            temp=storage[L-'A'];
            pos=temp.find(hold);
            if(pos!=-1)
           {
                pos=temp.find(' ');
                temp=temp.substr(0,pos);
            }
        }
    }
    in = temp;
}
void process(string &first, char op, string &second, vector<string> & storage, char position)
{
    //erase leading zeros
    while(second[0]=='0')
        second.erase(0,1);
    while(first[0]=='0')
        first.erase(0,1);

    vector<byte> firstV, secondV,resultV,mycomp,remainder,tempV;

    if(op=='+')
    {

    }
    else if(op=='-')
    {


    }
    else if(op=='*'|| op==',')
    {

    }
     else if(op=='/')
    {

    }
    cin.clear();
}
