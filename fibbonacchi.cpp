#include<iostream>
#include<vector>
using namespace std;
int find(int n)
{
    int a=0;
    int b=1;
    int c;
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    for(int i=2;i<=n;i++)
    {
        c=a+b;
        b=a;
        a=c;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
   cout<< find(n);
    return 0;
}