#include <iostream>
#include <string>
using namespace std;

bool checkPangram(string str) {
    bool hash[26] = {false};
    for(int i=0;i<=str.length();i++) {
        if (str[i] >= 'A' && str[i]<= 'Z')
        {
            hash[str[i]-'A']=true;
        } 
        else if (str[i]>='a'&&str[i]<='z') 
        {
            hash[str[i]-'a']=true;
        }
    }
    
    for(int i = 0; i < 26; i++) {
        if(hash[i]==false)
        return false;
    }
    return true;
}

int main() {
    string str="abcdefghijklmnopqrstuvw1";
    
    
    if(checkPangram(str)) {
        cout << "It is a pangram\n";
    } else {
        cout << "It is not a pangram\n";
    }
    
    return 0;
}
