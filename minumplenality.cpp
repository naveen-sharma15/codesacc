#include<iostream>
using namespace std;
int penlaity(int arr[],int n)
{
    int res=0;
    for(int i=1;i<=n;i++)
    {
        res+=arr[i]-arr[i-1];

    }
    return res;
}
int main()
{
    int arr[]={-2,1,4,6};
    int n=3;
    cout<<penlaity(arr,n);
}