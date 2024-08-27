#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a=2;
    int b=-3;
    int c=-14;
    int d=7;
    int sum=0;
    if(a<0)sum+=a;
    if(b<0)sum+=b;
    if(c<0)sum+=c;
    if(d<0)sum+=d;
    cout<<sum;
    return 0;
}