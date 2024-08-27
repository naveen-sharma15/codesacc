#include<iostream>
#include<vector>
using namespace std;
int find(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        int num=i;
        int zero=0;
        while(num)
        {
        if(num%2==0)zero++;
        num=num/2;
        }
        if(zero%2==1)count++;
    }
    return count;
}
int main()
{
    int n=5;
    cout<<find(n);
    return 0;
}