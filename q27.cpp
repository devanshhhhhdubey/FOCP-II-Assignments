#include <iostream>
using namespace std;

int main() {
    float marks[5];
    float total = 0, perct;

    for (int i = 0; i < 5; i++) {
        cout<<"Enter marks of subject "<<i + 1<<": ";
        cin>>marks[i];
        total = total + marks[i];
    }

    perct = total / 5;

    cout<<"\nTotal Marks = "<<total<<endl;
    cout<<"Percentage = "<<perct<<"%"<<endl;

    return 0;
}
