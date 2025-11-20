//8.Address Calculation in 2D Array
#include <iostream>
using namespace std;

int main(){
    int base, r, c, i, j;
    cout << "Enter base address: ";
    cin >> base;
    cout << "Enter rows, columns: ";
    cin >> r >> c;
    cout << "Enter element index (i j): ";
    cin >> i >> j;

    int size = 4;

    cout << "Row major: " << base + (i*c + j)*size;
    cout << "\nColumn major: " << base + (j*r + i)*size;
}

