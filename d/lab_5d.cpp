#include "lab_5d.h"
using namespace std;
string lowercase(string &s)
{
    for (char &c : s)
    {
        c = to_lower(c);
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
            s[i + 1] = to_upper(s[i + 1]);
            i++;
        }
    }
    return s;
}
char to_upper(char &c)
{
    if (c >= 97 && c <= 122) // sprawdzenie czy mala litera
        c -= 32; // zamiana malej litery na wielka
    return c;
}

char to_lower(char &c)
{
    if (c >= 65 && c <= 90) // sprawdzenie czy wielka litera
        c += 32; // zamiana wielkiej litery na mala
    return c;
}