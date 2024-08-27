#include <iostream>
using namespace std;
int check(char ch[],int s,int e)
{
    while(s<e)
    {
        if(ch[s]!=ch[e])
        {
            return -1;
        }
        s++;
        e--;
    }
    return 1;
}
int main() {
  char ch[10];
  cout<<"enter a string\n";
  cin>>ch;
  int len=0;
  for(int i=0;i<=ch[i]!='\0';i++)
  {
    len++;
  }
  int start=0;
  int end=len-1;
  
  int ans=check(ch,start,end);
  if(ans==1)
  {
    cout<<"it is a palidrome string";
  }
  else
  {
    cout<<"it is not a palindrome string";
  }

  return 0;
}