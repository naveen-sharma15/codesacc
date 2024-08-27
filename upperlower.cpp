#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string fisrt="NaveEn";
    string last="sharma";
   
    for(int i=0;i<fisrt.length();i++)
    {
        if(fisrt[i]>=65 && fisrt[i]<=90)
         fisrt[i]=fisrt[i]-'A'+'a';
    }
    for(int i=0;i<last.length();i++)
    {
        if(last[i]>=90 && last[i]<=122)
        last[i]=last[i]-'a'+'A';
        
    }
    string ans=fisrt+" "+last;
    cout<<ans;
}