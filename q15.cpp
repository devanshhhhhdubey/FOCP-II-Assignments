#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of entries: ";
    cin>>n;

    int num, max;

    cout<<"Enter number: ";
    cin>>max;

    for(int i = 2; i <= n; i++) {
        cout<<"Enter number: ";
        cin>>num;

        if(num > max) {
            max = num;
        }
    }

    cout<<"Largest value = "<<max;

    return 0;
}
