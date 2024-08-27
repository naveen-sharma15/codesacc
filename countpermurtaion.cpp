#include<iostream>
using namespace std;
int fact(int n)
{
    int res=1;
    for(int i=1;i<=n;i++)
    {
        res=res*i;
    }
    return res;
}
int countOcc(string s)
{
    int len=s.length();
    int hash[26]={0};
    for(int i=0;i<len;i++)
    {
        hash[s[i]-'a']++;
    }
    int res=fact(len);
    for(int i=0;i<26;i++)
    {
        if(hash[i]>1)
        {
            res=res/fact(hash[i]);
        }
    }
    return res;
}
int main()
{
    string s;
    //cout<<"Enter a string\n";
    cin>>s;
    cout<<countOcc(s);
    return 0;
}