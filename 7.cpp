//Design a program to find 2’s complement of a given binary number.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    bool torf = true;
    for (int i = 0; i <= s.size() - 1; i++)
    {
        if (s[i] == '0' || s[i] == '1')
        {
            continue;
        }
        else
        {
            torf = false;
        }
    }

    if (torf)
    {
        for (int i = 0; i <= s.size() - 1; i++)
        {
            if (s[i] == '1')
                s[i] = '0';
            else
                s[i] = '1';
        }
        int carry = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (i == s.size() - 1)
            {
                if (s[i] == '1')
                {
                    s[i] = '0';
                    carry = 1;
                }
                else
                {
                    s[i] = '1';
                }
            }
            else
            {
                if (s[i] == '1' && carry == 1)
                {
                    s[i] = '0';
                    carry = 1;
                }
                else if (s[i] == '0' && carry == 0)
                {
                    s[i] = '0';
                    carry = 0;
                }
                else
                {
                    s[i] = '1';
                    carry = 0;
                }
            }
        }
        if (carry == 0)
            cout << "The 2's complement of the string is: " << s << endl;
        else
            cout << "The 2's complement of the string is: " << carry << s << endl;
    }
    else
    {
        cout << "Incorrect Input" << endl;
    }

    return 0;
}
