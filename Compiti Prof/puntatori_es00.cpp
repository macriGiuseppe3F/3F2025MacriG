#include <iostream>

using namespace std;

int main() {

    int myAge = 43; // an int variable
    int * myAgePtr = &myAge;

    cout <<  myAge << endl;
    cout << &myAge << endl;
    cout << myAgePtr << endl;

    *myAgePtr = 99;

    std::cout <<  myAge << endl;

    return 0;
}
