#include "lab_5c.h"
bool lowercase (char &c)
{
    if (c >= 97 && c <= 122)
        return true;
    return false;
}
std::string szyfrowanie(std::string &s)
{
    std::string wynik = s;

    for (char &c : wynik)
    {
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {
            // Sprawdzenie, czy litera jest mała czy duża
            if (lowercase(c))
            {
                if (c == 122)
                    c = 65;
                else
                    c = (c - 'a' + 1) % 26 + 'a';
            }
            else
            {
                if (c == 90)
                    c = 97;
                else
                    c = (c - 'A' + 1) % 26 + 'A';
            }
        }
    }

    return wynik;
}