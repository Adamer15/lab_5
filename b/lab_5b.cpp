//
// Created by Adam Raczkowski on 03/12/2023.
//

#include "lab_5b.h"
#include <iostream>
using namespace std;

void zliczanie(string &s, int t[]){
    for (char c : s)
    {
        t[c]++;
    }
}
void wypisz(int t[])
{
    for (int i = 0; i < 128; i++)
        if (t[i] > 0)
            std::cout << (char)i << " " << t[i] << std::endl;
}
