#include<iostream>
#include<vector>
using namespace std;
void primefact(int n)
{
   for(int i=2;n>1;i++)
   {
    while(n%i==0)
    {
       cout<<i<<" ";
       n=n/i;
    }
   }
}
int main()
{
    int n=35;
    primefact(n);
    return 0;
}