#include<iostream>
using namespace std;
int power(int a,int b)
{
    int ans=1;
    for(int i=0;i<a;i++)
    {
        ans=ans*b;
    }

    
    return ans;
}
int calculate(int h,int v,int vn)
{
   int en=v/vn;
   int ans=h*power(2,en);
   return ans;
}
int main()
{
    int h=10;
    int v=20;
    int vn=5;
    cout<<calculate(h,v,vn);
    return 0;
}