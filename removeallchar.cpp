#include <bits/stdc++.h>
using namespace std;
void removechar(char *s,char c)
{
    int j;
    int n=strlen(s);
    for(int i=j=0;i<n;i++)
    
        if(s[i]!=c)
        s[j++]=s[i];
        
   s[j]='\0';

}

int main()
{
    char s[]="geeksforgeeks";
    char c='e';
    removechar(s,c);
    cout<<s;
}