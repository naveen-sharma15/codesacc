#include<iostream>
using namespace std;
int talling(int n)
{
    int ans=0;
    while(n>0)
    {
        int quitent=n/5;
        ans+=quitent;
        if(quitent<5)
        break;
        n=n/5;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<talling(n);
    return 0;
}