#include "Human.hpp"
#include <iostream>
#include <iterator>
#include <list>
#include <vector>
using namespace std;
int main()
{
    list< int > listewka;
    for (int i = 0; i < 3; i++) {
        listewka.push_back(10 * i + 6);
        listewka.push_front(30 * i + 7);

        cout << listewka.size() << "  ";
        cout << listewka.front() << "  ";
        cout << listewka.back() << endl;
    }

    cout << &listewka.front() << "     ";

    cout << &listewka.back() << endl;
    int i = 8;
    listewka.push_front(30 * i + 7);
    listewka.push_front(30 * i + 17);
    listewka.push_front(30 * i + 27);
    listewka.push_front(30 * i + 37);

    cout << &listewka.front() << "     ";

    cout << &listewka.back();

    cout << "\n tu się zaczynają iteratory" << endl;

    list< int >::iterator it = listewka.begin();

    for (it = listewka.begin(); it != listewka.end(); it++) {
        cout << *it << endl;
    }
    cout << "\n" << endl;

    list< int >::const_reverse_iterator itt = listewka.rbegin();

    for (itt = listewka.rbegin(); itt != listewka.rend(); itt++) {
         cout << *itt << endl;
    }
    cout << "\n koniec main" << endl;
}