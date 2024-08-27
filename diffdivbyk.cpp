#include<iostream>
#include<vector>
using namespace std;
int maxi=0;
void solve(int idx,vector<int>arr,vector<int>temp,int k)
{
    if(idx==arr.size())
    {
        if(maxi<temp.size())
        maxi=temp.size();
        return;
    }
    if(temp.size()==0|| (arr[idx]-temp[temp.size()-1])%k==0)
    {
        temp.push_back(arr[idx]);
        solve(idx+1,arr,temp,k);
        temp.pop_back();
    }
    solve(idx+1,arr,temp,k);
}
int main()
{
    int n,k;
    cin >> n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>temp;
    int idx=0;
    solve(idx,arr,temp,k);
    cout<<maxi;
    return 0;
}