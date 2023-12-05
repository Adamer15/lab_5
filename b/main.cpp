//
// Created by Adam Raczkowski on 03/12/2023.
//
#include<iostream>
#include "lab_5b.h"
using namespace std;
int t[128];
int main ()
{
    string s;
    cin >> s;
    zliczanie(s, t);
    wypisz(t);
    return 0;
}
//        g++ -std=c++11 -c main.cpp -o main.o
//        g++ -std=c++11 -c lab_5b.cpp -o lab_5b.o
//        g++ main.o lab_5b.o -o lab_5b