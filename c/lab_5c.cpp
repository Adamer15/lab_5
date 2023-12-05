//
// Created by Adam Raczkowski on 03/12/2023.
//

#include "lab_5c.h"
#include<iostream>
std::string szyfrowanie(std::string &s)
{
    std::string wynik = s;

    for (char &c : wynik)
    {
        if (std::isalpha(c))
        {
            // Sprawdzenie, czy litera jest mała czy duża
            if (std::islower(c))
            {
                c = (c - 'a' + 1) % 26 + 'a';
            }
            else
            {
                c = (c - 'A' + 1) % 26 + 'A';
            }
        }
    }

    return wynik;
}