#include<iostream>
#include "lab_5c.h"
using namespace std;
int main ()
{
    string s;
    cout << "Podaj napis do zaszyfrowania: ";
    cin >> s;
    cout << "\nNapisz po zaszyfrowaniu: " << szyfrowanie(s);
    return 0;
}

//        g++ -std=c++11 -c main.cpp -o main.o
//        g++ -std=c++11 -c lab_5c.cpp -o lab_5c.o
//        g++ main.o lab_5c.o -o lab_5c