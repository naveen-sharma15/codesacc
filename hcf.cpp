#include<iostream>
#include<vector>
using namespace std;
// int main()
// {
//     int n1,n2;
//     cin>>n1>>n2;
//     int hcf=1;
//     for(int i=1;i<=n1||i<=n2;i++)
//     {
//       if(n1%i==0 && n2%i==0)
//       hcf=i;
//     }
//     cout<<hcf;
//     return 0;
// }
int main()
{
    int n1,n2,lcm;
    cin>>n1>>n2;
    for(int i=1;i<=n1||i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            lcm=i;
        }
    }
    lcm=(n1*n2)/lcm;
    cout<<lcm;
}