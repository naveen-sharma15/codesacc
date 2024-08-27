#include<iostream>
#include<vector>
using namespace std;
string reverseWord(string &str)
{
   vector<string>ans;
   string res="";
   for(int i=0;i<str.length();i++)
   {
    if(str[i]==' ')
    {
       ans.push_back(res);
       ans.push_back(" ");
       res="";
    }
    else
    {
        res+=str[i];
    }
   }
   ans.push_back(res);
   for(int i=ans.size();i>=0;i--)
   {
    cout<<ans[i];
   }

  
}
int main()
{
    cout<<"enter a string\n";
    string str;
    getline(cin,str);
    reverseWord(str);
    
}