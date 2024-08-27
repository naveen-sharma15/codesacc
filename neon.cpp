#include<iostream>
#include<vector>
using namespace std;
void check(int n)
{
    int sq=n*n;
    int sum=0;
    while(sq!=0)
    {
        int digit=sq%10;
        sum+=digit;
        sq=sq/2;
    }
    if(sum==n)
    {
        cout<<"it is a neon number\n";

    }
    else
    {
        cout<<"it is not a neon number";
    }
}
int main()
{
    int n;
    cout<<"enter a number\n";
    cin>>n;
    check(n);
    return 0;
}