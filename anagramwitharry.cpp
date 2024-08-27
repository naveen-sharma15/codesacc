#include<iostream>
using namespace std;
bool check(string s1,string s2)
{
    if (s1.length() != s2.length())
    return false;
   int hash[26]={0};
   for(int i=0;i<s1.length();i++)
   {
    hash[s1[i]-'a']++;
   }

    for(int i=0;i<s2.length();i++)
   {
    hash[s2[i]-'a']--;
   }
   for(int i=0;i<26;i++)
   {
    if(hash[i]!=0)
        return false;
   }
   return true;
}
int main()
{
    string s1="bool";
    string s2="pool";
   if(check(s1, s2))
   {
  cout << "True" << endl;
   }
  else{
  cout<<"False"<<endl;
  }
  return 0;

}