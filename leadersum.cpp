#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int leader(int arr[],int n)
{
    vector<int>ans;
    int max =INT_MIN;
    int sum=0;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>=max)
        {
            // ans.push_back(arr[i]);//for displaying 
            sum+=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
     return sum;
    }
int main()
{
     int arr[] = {52,66,64,36,45,24,32};
     int n=7;
     cout<<leader(arr,n);
    return 0;
}