#include<iostream>
using namespace std;
string binaryAnd(string s1,string s2)
{
    string res="";
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]=='1' && s2[i]=='1')
        {
            res=res+"1";
        }
        else
        {
            res=res+"0";
        }
    }
    return res;

}

string binaryOr(string s1,string s2)
{
    string res="";
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]=='1'|| s2[i]=='1')
        {
            res+='1';
        }
        else
        {
            res+='0';
        }
    }
    return res;
}
string binaryXor(string s1,string s2)
{
   string res="";
   for(int i=0;i<s1.length();i++)
   {
    if(s1[i]==s2[i])
    {
        res+='1';
    }
    else
    {
        res+='0';
    }
   }
   return res;
}
int main()
{
    string s1="1101";
    string s2="1011";
   cout<<binaryAnd(s1,s2)<<endl;
   cout<<binaryOr(s1,s2)<<endl;
   cout<<binaryXor(s1,s2);
}