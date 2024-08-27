#include<iostream>
#include<vector>
using namespace std;
 void find(string str,int k)
 {
    
    int count=0;
    int i;
    string ans="";
    for( i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            count++;
            if(k==count)
           ans=str.substr(0,i);
        
        }
        
 
    }
    cout<<ans;
 }
int main()
{
    string str={"my name is naveen"};
    int k=3;
    find(str,k);
}