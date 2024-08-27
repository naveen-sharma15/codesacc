#include<iostream>
#include <unordered_map> 
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    string str="abcAss";
    unordered_map<char,int>mp;
    mp['A']++;
    mp['E']++;
    mp['I']++;
    mp['O']++;
    mp['U']++;
    mp['a']++;
    mp['e']++;
    mp['i']++;
    mp['o']++;
    mp['u']++;
    
    int count=0;
    for(int i=0;i<str.length();i++)
    {
        if(mp.find(str[i])==mp.end()) count++;
    }
    int ans=factorial(count);
    cout<<ans;
    return 0;
}