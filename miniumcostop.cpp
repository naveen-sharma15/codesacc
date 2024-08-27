#include<iostream>
#include<vector>
using namespace std;
int cost(string str1,string str2)
{
    int hash[26]={0};
    for(int i=0;i<str2.length();i++)
    {
        hash[str2[i]-'A']++;
    }
    int sum=0;
    for(int i=0;i<str1.length();i++)
    {
        hash[str1[i]-'A']--;
    }
    for(int i=0;i<26;i++)
    {
        if(hash[i]>0)
        {
            sum+=hash[i];
        }
        
    }
    return sum;
}
int main()
{
    string str1="ABD";
    string str2="AABCCAD";
    //cout<<"enter 1st string\n";
    //cin>>str1;
    //cout<<"enter 2nd string\n";
    //cin>>str2;
    cout<<cost(str1,str2);
    return 0;
}