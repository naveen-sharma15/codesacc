#include<iostream>
#include<vector>
using namespace std;
int check(char ch)
{
    //ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'
    if(ch>='a' && ch<='z')
    {
        return 1;
    }
    return 0;
}
int main()
{
    char ch;
    cout<<"enter a character\n";
    cin>>ch;
    if(check(ch))
    {
     cout<<"the char is vowel";
    }
    else
    {
        cout<<"the char is consonat";
    }
    return 0;
}