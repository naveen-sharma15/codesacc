#include<iostream>
#include<vector>
using namespace std;
int find(int arr[],int divisor,int rem,int qeu,int n)
{
    for(int i=0;i<=n;i++)
    {
        if(arr[i]/divisor==qeu &&arr[i]%divisor==rem)
        {
            return i;
        }
    }
}
int main()
{
    int arr[]={12,24,35,9};
    int n=3;
    int divisor=8;
    int queotient=3;
    int rem=0;
    int index=find(arr,divisor,rem,queotient,n);
    cout<<index;
    return 0;
}