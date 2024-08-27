#include<iostream>
#include<vector>
using namespace std;
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
bool isStrong(int n)
{
    int s=n;
    int digit;
    int sum=0;
    while(n!=0)
    {
        digit=n%10;
        sum=sum+fact(digit);
        n=n/10;
    }
    if(sum==s)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cout<<"enter a number\n";
    cin >> n;
    if(isStrong(n))
    {
        cout<<"it is a strong number";
    }
    else
    {
        cout<<"it is not a strong number";
    }

   
    return 0;
}