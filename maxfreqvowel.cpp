#include<bits/stdc++.h>
#include<vector>
#include<limits.h>
using namespace std;
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}
int findmaxvowel(string str)
{
 map<char,int>mp; 
 for(auto i:str)
 {
   if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')
   {
    mp[i]++;
   }
 }
 int mx=0;
 for(auto i:mp)
 {
    mx=max(mx,i.second);
 }
 for(auto i:mp)
 {
    if(i.second==mx)
    {
        cout<<i.first;
        break;
    }
 }
}

int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    findmaxvowel(str);
    return 0;
}