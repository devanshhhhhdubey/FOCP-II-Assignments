#include <iostream>
using namespace std;

int main() {
    float salary[10];
    float total = 0, avg;

    for (int i = 0; i < 10; i++) {
        cout << "Enter salary of employee " << i + 1 << ": ";
        cin >> salary[i];
        total += salary[i];
    }

    avg = total / 10;

    cout << "\nTotal salary = " << total << endl;
    cout << "Average salary = " << avg << endl;

    return 0;
}
