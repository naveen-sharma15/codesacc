#include<iostream>
using namespace std;
int main()
{
  string str;
  cin>>str;
  int a=str[0]-'0';
  int n=str.length();
  for(int i=1;i<n-1;i+=2)
  {
    char op=str[i];
    int b=str[i+1]-'0';
    
    if(op=='A')
      a&=b;
    else if(op=='B')
      a^=b;
    else
      a|=b;
    
  }
 cout<<a;
  
}