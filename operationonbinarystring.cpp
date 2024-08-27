#include<iostream>
using namespace std;
char AND(char a,char b)
{
    if(a=='1' && b=='1')
    return '1';

    return '0';
}
char OR(char a,char b)
{
    if(a=='0'&& b=='0')
    return '0';
    return '1';
}
char XOR(char a,char b)
{
    if(a==b)
    return '0';
    return '1';
}
int operations(string str)
{
    if(str.length()==0)
    return -1;
    char res1=str[0];
  
    for( int i=1;i<str.length();i=i+2)
    {
        char op=str[i];
        char res2=str[i+1];
   
    if(op=='A')
    {
        res1=AND(res1,res2);
    }
    else if(op=='C')
    {
        res1=OR(res1,res2);
    }
    else
    {
        res1=XOR(res1,res2);
    }
     }

    if(res1=='1')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    string str;
    cout<<"Enter a string to perform binary operations\n";
    cin>>str;
    cout<<operations(str);
    return 0;
}