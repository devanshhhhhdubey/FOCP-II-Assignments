#include <iostream>
using namespace std;
int main() {
    int item,qty;
    float up;
    cout<<"item no: ";
    cin>>item;
    cout<<"quantity: ";
    cin>>qty;
    cout<<"unit price: ";
    cin>>up;
    float amount=qty*up;
    cout<<"amount: "<<amount<<endl;
    float discount=(20.0/100.0)*amount;
    cout<<"discount: "<<discount<<endl;
    float total=amount-discount;
    cout<<"total amount: "<<total;
    return 0;
}