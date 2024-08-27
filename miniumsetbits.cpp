#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter no\n";
    cin >> n;
    int count=0;
    while(n)
    {
        if(n&1)
        count++;
        n=n>>1;
    }
    int ans=pow(2,count)-1;
    cout<<ans;
    return 0;
}