// ReSharper disable all
#include<iostream>
#include <memory>

using namespace std;

void HelloWorld() {
    cout << "Hello World!" << endl;
}

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

void P4() {
    auto (*pFunc)() = HelloWorld;
    pFunc();
}

class A {
    int n = 0;
public:
    static void show() {
        cout << "Hello, A show!" << endl;
    }

    void internalShow() const {
        cout << "Hello, A internalShow!" << this->n << endl;
    }
};

void P5() {
    auto p = &A::show;
    p();

    auto pA = new A();
    pA->internalShow();
}

void P6() {
    auto ptr = make_unique<int>(10);
    cout << *ptr << endl;
}

int main() {
    freopen("CPP/Data/Data.in", "r", stdin);
    freopen("CPP/Data/Data.out", "w", stdout);

    P5();
    return 0;
}
