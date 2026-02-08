#include <iostream>
using namespace std;

int main() {
    int a,b,temp;
    cout<<"Enter a and b: ";
    cin>>a>>b;

    cout<<"Before swapping:\n";
    cout<<"a = "<<a<<" b = "<<b<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"After swapping:\n";
    cout<<"a = "<<a<<" b = "<<b;
    return 0;
}
