#include<iostream>
#include<math.h>
using namespace std;
int digitsum(int n)
{
    int sum=0;
    while(n>0)
    {
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
   if (sum <= 1) {
            return false;
        }
        for(int i=2;i<=sqrt(sum);i++)
        {
            if(sum%i==0)
            {
                return false;
            }
        }
        return true;

}

int main()
{
    int n;
    cin>>n;
    //int ans=isgooglyPrime(n);
      int ans=digitsum(n);
    if(ans)
    {
        cout<<n<<" is a googly prime number";
    }
    else
    {
        cout<<n<<" is not a googly prime number";
    }
  
    return 0;
}