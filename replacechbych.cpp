#include<iostream>
using namespace std;
string replaces(string s,char c1,char c2)
{
    //string ans=s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==c1)
        {
          s[i]=c2;
        }
        else if(s[i]==c2)
        {
            s[i]=c1;
        }
    }
    return s;

}
int main()
{
    string s;
    cout<<"enter a string\n";
    cin>>s;
    cout<<"which want to replace with\n";
    char c1;
    char c2;
    cin>>c1>>c2;
    cout<<replaces(s,c1,c2);
}