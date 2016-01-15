#include "declarations.h"

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    cout << "Input the number to run:" <<endl
         << "1. Print Reversed List." << endl;

    unsigned int choice = 0;
    cin >> choice;

    switch(choice)
    {
    case 1:
        Q5::testQ5();
        break;
    default:
        break;
    }
}
