#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() 
{
    while (1) 
    {
        string str;
        getline(cin, str);
        stack<char> a;
        int x = 0;

        if (str == ".")
            break;

        for (int i = 0; i < str.length(); i++) 
        {
            char c = str[i];
            if ((c == '(') || (c == '[')) 
                a.push(c);
            else if (c == ')') 
            {
                if (!a.empty() && a.top() == '(') 
                    a.pop();
                else 
                {
                    x = 1;
                    break;
                }
            }
            else if (c == ']') 
            {
                if (!a.empty() && a.top() == '[') 
                    a.pop();
                else 
                {
                    x = 1;
                    break;
                }
            }
        }

        if (x == 0 && a.empty()) 
            cout << "yes" << endl;

        else 
            cout << "no" << endl;
    }

    return 0;
}