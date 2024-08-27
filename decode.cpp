#include<iostream>
#include<vector>
using namespace std;
void decodes(string str,int n)
{
    string ans="";
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='1')
            count++;
        
        else
        {
            ans+='A'+count-1;
            count=0;
        }
    }
    ans+='A'+count-1;
    cout<<ans;
}
int main()
{
    string str="10110111";
    int n=str.length();
    decodes(str,n);
    return 0;
}