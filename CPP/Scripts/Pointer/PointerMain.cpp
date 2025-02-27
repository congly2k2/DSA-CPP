#include<iostream>

using namespace std;

void P1() {
    // "&" is used to get the address of a variable
    int x = 10;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl << endl;
}

void P2() {
    // "*" is used to declare a pointer and to get the value of a variable
    int y = 5;
    int *p = &y;
    cout << "Address of y: " << &y << endl;
    cout << "Address in p: " << p << endl;
    cout << "Value in p: " << *p << endl;
}

void P3() {
    // Dynamic memory allocation
    auto p = new int(20); // Allocate memory
    cout << "Value of p: " << *p << endl;
    delete p; // Release memory

    int arr[] = {100, 42, 11, 64, 30};
    int *pArr = arr;

    cout << *pArr << endl; // 100
    cout << *(pArr + 1) << endl; // 42

    delete[] pArr;
}

int main() {
    freopen("CPP/Data/Data.in", "r", stdin);
    freopen("CPP/Data/Data.out", "w", stdout);

    P3();
    return 0;
}
