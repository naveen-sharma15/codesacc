#include<iostream>
#include<algorithm>
using namespace std;
int check(string s1,string s2)
{
    if(s1.length()!=s2.length())
    return -1;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]!=s2[i])
        {
            return -1;
        }
    }
    return 1;


}
int main()
{
    string s1;
    string s2;
    cout<<"enter string 1st\n";
    cin>>s1;
    cout<<"enter string 2nd\n";
    cin>>s2;
    int ans=check(s1,s2);
    if(ans==1)
    {
        cout<<"it is a anagram\n";
    }
    else
    {
        cout<<"it is not a anagram\n";
    }
    

}