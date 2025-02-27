#include <iostream>

using namespace std;

void UpdateValue(int *x) {
    *x = 29;
}

void PrintValue(const int *x) {
    cout << "Value of x: " << *x << endl;
    // *x = 10; Error because x is a const pointer
    // Use const pointer when you don't want to change the value of the variable (read-only)
}

void AllocateMemory(int **p) {
    *p = new int(50); // Allocate memory and store the address in p
}

void PF1() {
    int x = 15;
    cout << "Value of x before: " << x << endl;
    UpdateValue(&x);
    cout << "Value of x after: " << x << endl;
}

void ConstPointer() {
    int x = 10;
    PrintValue(&x);
}

void DoublePointer() {
    int *ptr = nullptr;
    AllocateMemory(&ptr);
    cout << "Value of ptr: " << *ptr << endl;
    delete ptr;
}

int main(){
    freopen("CPP/Data/Data.in", "r", stdin);
    freopen("CPP/Data/Data.out", "w", stdout);

    // PF1();
    // ConstPointer();
    // DoublePointer();

    return 0;
}