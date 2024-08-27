#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n=20;
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        sum+=i;

    }
    if(sum>n)
    {
        cout<<n<<" is abudant no";
    }
    else
    {
        cout<<n<<" is not abunant no";
    }
    return 0;
}