#include<iostream>

using namespace std;

int main() {
    freopen("CPP/Data/Data.in", "r", stdin);
    freopen("CPP/Data/Data.out", "w", stdout);

    int A[2][3] = {{2, 4, 6}, {5, 7, 8}};
    cout << *(*A) << endl; // A[0][0]
    cout << *(*A + 1) << endl; // A[0][1]
    cout << *(*A + 2) << endl; // A[0][2]
    cout << *(*(A + 1)) << endl; // A[1][0] = *(*A + 3)
    cout << *(*(A + 1) + 1) << endl; // A[1][1] = *(*A + 4)
    cout << *(*(A + 1) + 2) << endl; // A[1][2] = *(*A + 5)
    return 0;
}
