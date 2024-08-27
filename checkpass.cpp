#include<iostream>
#include<vector>
using namespace std;
int check(string str)
{
    bool num=false;
    bool cap=false;
    if(str.length()<4)
    return 0;
    if(str[0]>=48 && str[0]<=57)
    return 0;
    for(int i=0;i<=str.length();i++)
    {
        if(str[i]==' '|| str[i]=='/')
        {
            return 0;
        }
        else if(str[i]>=65 && str[i]<=90)
        {
            cap=true;
        }
        else if(str[i]>=48 && str[i]<=57)
        {
            num=true;
        }
    }
    int res(cap&num);
    return res;
}
int main()
{
    string str="1abcD/123";
    if(check(str))
    {
         cout<<"valid\n";

    }
    else
    {
        cout<<"not valid\n";
    }
    return 0;
}