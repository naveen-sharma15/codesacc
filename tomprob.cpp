#include<iostream>
#include<vector>
using namespace std;
void replace(string str,char ch1,char ch2)
{
    string res="";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==ch1)
        {
             str[i]=ch2;
        }
        else if(str[i]==ch2)
        {
              str[i]=ch1;
        }
    }
    cout<<str;
}
int main()
{
    string str="apple";
    char ch1='a';
    char ch2='p';
    replace(str,ch1,ch2);
    return 0;
}