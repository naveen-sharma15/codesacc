#include<iostream>
#include<vector>
using namespace std;
int checkpass(string str)
{
    if(str.length()<4)
    return 0;
    bool num=false;
    bool cap=false;
    if(str[0]>=48 && str[0]<=57)
    return 0;

    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' '|| str[i]=='\\')
        return 0;

        else if(str[i]>=65 && str[i]<=90)
        cap=true;
        else if(str[i]>=48 && str[i]<=57)
        num=true;
    }
    int res=(cap && num);
     return res;
    
}
int main()
{

    string str;
    cin>>str;
    cout<<checkpass(str);
    return 0;
}