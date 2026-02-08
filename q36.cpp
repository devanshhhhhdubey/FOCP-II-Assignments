#include <iostream>
using namespace std;

int main() {
    int A[3][3], T[3][3];

    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            T[j][i] = A[i][j];
        }
    }

    cout << "\nTranspose of matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
