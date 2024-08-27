#include<iostream>
using namespace std;
int main()
{
    char ch[10];
    cout<<"enter a string\n";
    cin>>ch;
    int n=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        n++;
    }

    int s=0;
    int e=n-1;
    while(s<e)
    {
        ch[s]=ch[s]+ch[e];
        ch[e]=ch[s]-ch[e];
        ch[s]=ch[s]-ch[e];
        s++;
        e--;
    }
    cout<<ch;
    }