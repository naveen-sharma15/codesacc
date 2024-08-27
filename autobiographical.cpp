#include<iostream>
using namespace std;
int check(string str)
{
    int a[10]={0};
    for(int i=0;i<str.length();i++)
    {
        a[str[i]-'0']++;
    }
    //checking autobio
    for(int i=0;i<str.length();i++)
    {
        if(a[i]!=str[i]-'0')
        {
            return 0;
        }
    }
    int cnt=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]>0)
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    string str;
    cin>>str;
    cout<<check(str);
    return 0;
}