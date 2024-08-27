#include<iostream>
#include<vector>
using namespace std;
string   replace(string str)
{
    for(int i=0;i<str.length();i++)
    {
         if (str[i] >= '0' && str[i] <= '9') {
            str[i] = '_'; 
        }
       else if(str[i]!='a'&& str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u')
        {
           str[i]='.';
        }
       
    }

    return str;
}

int main()
{
    string str;
    cout<<"Enter a string\n";
    getline(cin,str);
    cout<<replace(str);
    return 0;
}