#include <iostream>
using namespace std;

int main(){
    int n;
    float price, total;

    cout<<"Enter order items: ";
    cin>>n;
    cout<<"Enter price per item: ";
    cin>>price;

    total = n * price;

    if (n > 1000) {
        total = total - (0.10 * total);
    }

    cout<<"Total expense: "<<total;

    return 0;
}