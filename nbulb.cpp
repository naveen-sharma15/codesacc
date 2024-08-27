#include<iostream>
#include<vector>
using namespace std;
int find(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(count%2==0)
        {
            if(arr[i]==0)
            count++;
        }
        else
        {
            if(arr[i]==1)
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[]={0,1,0,1};
    int n=4;
    cout<<find(arr,n);
}
