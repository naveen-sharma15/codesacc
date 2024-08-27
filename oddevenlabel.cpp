#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=6;
    string ans;
    for(int i=0;i<n;i++)
    {
      if(arr[i]%2==0)
      {
        ans+="even ";
      }
      else
      {
        ans+="odd ";
      }
    }
    cout<<ans;

    return 0;
}