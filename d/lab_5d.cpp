#include "lab_5d.h"
#include <iostream>
using namespace std;
string lowercase(string &s)
{
    for (char &c : s)
    {
        c = tolower(c);
    }
    return s;
}

string begin_with_upper(string &s)
{
    s[0] = toupper(s[0]);
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == ' ')
        {
            s[i + 1] = toupper(s[i + 1]);
            i++;
        }
    }
    return s;
}
