#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int sq;
    int n=42;
    if(n>=0)
    {
     sq=sqrt(n);
     if(sq*sq==n)
     {
        cout<<"perfect sq";

     }
     else
     {
        cout<<"not perfect sq";
     }
    }
    return 0;
}