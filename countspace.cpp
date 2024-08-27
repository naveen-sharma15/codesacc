#include<iostream>
#include<vector>
using namespace std;
int countspace(string str)
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string str1="n a v e e n aka ";
    string str2="nar ula inst itue";
    int first=countspace(str1);
    int second=countspace(str2);
    int diff=first-second;
    if(diff&1)
    {
        cout<<"odd number\n";
    }
    else
    {
        cout<<"even number\n";
    }
    return 0;
}