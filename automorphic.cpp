#include<iostream>
#include<vector>
using namespace std;
int isAuto(int n)
{
    int temp=n;
    int sq=n*n;
    int digit=n;
    digit=sq%10;
   while(n!=0)
   {
    if(n % 10 != sq % 10){
            return 0;
   }
   n=n/10;
   sq=sq/10;
}
return 1;
}
int main()
{
    int n;
    cout<<"enter a number\n";
    cin >> n;
    if(isAuto(n))
    {
      cout<<"Automorphic no\n";
    }
    else
    {
        cout<<"not auto\n";

    }
    return 0;
}