#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string str="ABC";
    int n=3;
    string ans="";
    while(n--)
    {
        ans+=str;
    }
    cout<<ans;
    return 0;
}