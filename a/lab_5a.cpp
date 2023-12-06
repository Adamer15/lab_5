//
// Created by Adam Raczkowski on 03/12/2023.
//
#include "lab_5a.h"
#include <iostream>
#include <cctype>
using namespace std;
bool is_lowercase(string &s)
{
    for (char c : s)
    {
        if (c >= 97)
            return false;
    }
    return true;
}
