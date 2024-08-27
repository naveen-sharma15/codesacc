#include<iostream>
#include<math.h>
int Setbit(int n,int set)
{
  int ans=0;
  for(int i=0;i<pow(set,n);i++)
  {
    int count=0;
    int x=i;
    while(x>0)
    {
    if(x&1)
    count++;
    x=x>>1;
    }
    if(count==set)
    ans+=i;

  }
  return ans;
}
using namespace std;
int main()
{
    int n=3;
    int set=2;
   cout<<Setbit(n,set);
    return 0;
}