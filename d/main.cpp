#include <iostream>
#include "lab_5d.h"
using namespace std;

int main()
{
    string s;

    cout << "Podaj napis: ";
    getline(cin, s); // wczytywanie calej linijki
//    lowercase(s);
    begin_with_upper(s);
    cout << s << endl;

    return 0;
}
//        g++ -std=c++11 -c main.cpp -o main.o
//        g++ -std=c++11 -c lab_5d.cpp -o lab_5d.o
//        g++ main.o lab_5d.o -o lab_5d
