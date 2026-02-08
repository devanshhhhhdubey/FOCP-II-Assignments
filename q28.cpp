#include <iostream>
using namespace std;

int main() {
    float price[10];
    float max;

    for (int i = 0; i < 10; i++) {
        cout << "Enter price of item " << i + 1 << ": ";
        cin >> price[i];
    }

    max = price[0];

    for (int i = 1; i < 10; i++) {
        if (price[i] > max) {
            max = price[i];
        }
    }
    cout<<"\nMaximum price = "<<max<<endl;

    return 0;
}
