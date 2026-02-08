#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int even = 0, odd = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0)
            even += arr[i];
        else
            odd += arr[i];
    }

    cout << "\nSum of even numbers = " << even << endl;
    cout << "Sum of odd numbers = " << odd << endl;

    return 0;
}
