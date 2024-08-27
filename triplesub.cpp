#include<iostream>
#include<vector>
using namespace std;
int maxi=0;
void solve(vector<int>arr,vector<int>temp,int n,int idx)
{
    if(idx==arr.size())
    {  
        if(maxi<temp.size())
        maxi=temp.size();
        return;
    }
    if(temp.size()==0 || temp[temp.size()-1]*3==arr[idx])
    {
        temp.push_back(arr[idx]);
        solve(arr,temp,n,idx+1);
        temp.pop_back();
    }
    solve(arr,temp,n,idx+1);
    
  
}
int main()
{
    vector<int>arr{2,3,6,18};
    int n=arr.size();
    vector<int>temp;
    int idx=0;
    solve(arr,temp,n,idx);
    cout<<maxi;
    return 0;
}