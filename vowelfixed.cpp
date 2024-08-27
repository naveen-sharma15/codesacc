#include<iostream>
#include<vector>
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
int find(string str)
{
    int n=str.length();
    int count=0;
    for(int i=0;i<n;i++)
    {
    
        if(str[i]!='a'&& str[i]!='e'&& str[i]!='i' && str[i]!='o' &&str[i]!='u')
        {
            count++;
        }
    }
    int ans=factorial(count);
    cout<<ans;
}
int main()
{
    string str="abc";
    find(str);
    return 0;
}