#include <iostream>
#include "Complex.h"


int main() {
//    Complex c1(10, 20);
//    Complex c2(5, 5);
//    Complex c3 = c1 + c2;
//    cout << "C1" << endl;
//    c1.echo();
//    cout << "C2" << endl;
//    c2.echo();
//    cout << "C1+C2" << endl;
//    c3.echo();
//    cout << endl;


    // Definitely lost
    cout << "Definitely lost" << endl;
    Complex *c4 = new Complex(1, 1);
    c4->echo();
    c4 = new Complex(0, 0);
    c4->echo();
    delete c4;
    cout << endl;

    int *arr = new int[2];
    // Invalid read
    cout << "Invalid read" << endl;
    cout << arr[0] << arr[1] << arr[2] << endl << endl;

    // Invalid write
    cout << "Invalid write" << endl;
    arr[2] = 1;

    delete[] arr;

    return 0;
}