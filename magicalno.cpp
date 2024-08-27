#include<iostream>
#include<vector>
using namespace std;
int check(int n)
{
   
    int count=0;
    for(int i=1;i<=n;i++)
    {
        int num=i;
        int zeros=0;
        while(num)
        {
            if(num%2==0)zeros++;
            num=num/2;
        }
        if(zeros%2==1)count++;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<check(n);
    return 0;
}