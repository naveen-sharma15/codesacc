#include<iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string str="1011011101111";
    string ans="";
    int count=0;
    for(int i=0;i<str.length();i++)
    {
      if(str[i]=='1')
      {
        count++;
      }
      else
      {
         if(count>0)
         {
          ans += 'A' + (count - 1);
            count=0;
         }
      }
      
    }
    if(count>0)
    {
         ans+='A'+(count-1);
    }
     cout<<ans;
    return 0;
}