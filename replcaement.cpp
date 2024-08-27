#include<iostream>
using namespace std;
string replaces(string str,char c)
{
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='a')
        {
         
          str[i]=c;
        }
    }
    return str;

}
int main()
{
    string str="banana";
    char c='b'; 
    cout<<replaces(str,c);
    return 0;
}