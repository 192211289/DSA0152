#include<bits/stdc++.h>
using namespace std;

string firstLetterWord(string str)
{
    string result = "";
 
    bool v = true;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            v = true;
 
        else if (str[i] != ' ' && v == true)
        {
            result.push_back(str[i]);
            v = false;
        }
    }
 
    return result;
}

int main()
{
    string str = "object oriented programming\d";
    cout << firstLetterWord(str);
    return 0;
}
