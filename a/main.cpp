//
// Created by Adam Raczkowski on 03/12/2023.
//
#include <iostream>
#include "lab_5a.h"
using namespace std;
string s;
int main ()
{
    cin >> s;
    cout << is_lowercase(s);
    return 0;
}

//        g++ -std=c++11 -c main.cpp -o main.o
//        g++ -std=c++11 -c lab_5a.cpp -o lab_5a.o
//        g++ main.o lab_5a.o -o lab_5a