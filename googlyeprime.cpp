#include<iostream>
#include<vector>
using namespace std;
bool isprime(int n)
{
    if(n<=2)
    return true;
    for(int i=2;i<n/2;i++)
    {
        if(n%2==0)
        {
            return false;
        }

    }
    return true;
}
int check(int n)
{
    int sum=0;
    while(n!=0)
    {
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
    int ans=isprime(sum);
    return ans;
}
int main()
{
    int n=43;
    cout<<check(n);
    return 0;
}