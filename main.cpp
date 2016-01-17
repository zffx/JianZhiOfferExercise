#include "declarations.h"

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    cout << "Input the number to run:" <<endl
         << "1. Print Reversed List." << endl
         << "2. Construct BinaryTree." << endl;

    unsigned int choice = 0;
    cin >> choice;

    switch(choice)
    {
    case 1:
        Q5::testQ5();
        break;
    case 2:
        Q6::testQ6();
        break;
    default:
        break;
    }
}
