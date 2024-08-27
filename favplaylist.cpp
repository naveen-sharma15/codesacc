#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int find(string str,int k)
{
    int n=str.length();
    int count=0;
    int maxi=0;
    int i=0;
    int j=-1;
    while(j<k-1)
    {
        if(str[++j]=='a')count++;
    }
    maxi=count;
    while(j<n-1)
    {
        if(str[i++]=='a')count--;
        if(str[++j]=='a')count++;
        maxi=max(maxi,count);
    }
    return maxi;
}
int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int k=3;
    cout<<find(str,k);
    return 0;
}