#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n=4991;
    int sum=0;
    int temp=n;
    while(temp!=0)
    {
        int digit=temp%10;
        sum+=digit;
        temp/=10;
    }
    if(n%sum==0)
    {
        cout<<n<<" is a harsad no\n";
    }
    else
    {
        cout<<n<<" is not a harshad no";
    }
    return 0;
}