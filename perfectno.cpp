#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n=28;
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }

    if(sum==n)
    {
        cout<<"it is a perfect one";
    }
    else
    {
        cout<<"it is not a perfect no\n";
    }
    return 0;
}