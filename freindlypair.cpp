#include<iostream>
#include<vector>
using namespace std;
int getDivisor(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int sum1=getDivisor(n1);
    int sum2=getDivisor(n2);
    if(sum1/n1==sum2/n2)
    {
        cout<<"both are freinly pair\n";
    }
    else
    {
        cout<<"not friendly pair\n";
    }
    return 0;
}