#include <iostream>
using namespace std;

int main() {
    float temp[30];
    float minTemp;

    for (int i = 0; i < 30; i++) {
        cout<<"Enter temperature for day "<<i + 1<<": ";
        cin>>temp[i];
    }

    minTemp = temp[0];

    for (int i = 1; i < 30; i++) {
        if (temp[i] < minTemp) {
            minTemp = temp[i];
        }
    }


    cout<<"\n Minimum temperature of the month = "<<minTemp<<endl;

    return 0;
}
