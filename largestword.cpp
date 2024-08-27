#include <iostream>
using namespace std;

void largest(string str)
{
    string largestWord = "";
    string currentWord = "";
    int maxLength = 0;
    for (char ch : str)
    {
        if (ch == ' ')
        {
            if (currentWord.length() > maxLength)
            {
                maxLength = currentWord.length();
                largestWord = currentWord;
            }
            currentWord = ""; 
        }
        else
        {
            currentWord += ch; 
        }
    }
    if (currentWord.length() > maxLength)
    {
        largestWord = currentWord;
    }

    cout << "Largest string is " << largestWord << endl;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    largest(str);
    return 0;
}
