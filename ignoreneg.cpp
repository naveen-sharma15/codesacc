#include<iostream>
#include<vector>
using namespace std;
int solve(int arr[],int n)
{
    int size=0;
    for(int i=0;i<=n;i++)
    {
        if(arr[i]>=0)
        {
            size++;
        }
    }
    int mid=(size-1)/2;
    for(int i=0;i<=n;i++)
    {
        if(arr[i]>=0)
        {
            if(mid==0)
            return arr[i];
            mid--;
        }
    }
}
int main()
{
    int arr[]={12,-3,14,-56,77,13};
    int n=5;
    cout<<solve(arr,n);
    return 0;
}