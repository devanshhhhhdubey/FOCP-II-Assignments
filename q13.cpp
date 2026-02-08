#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter a,b,c: ";
    cin>>a>>b>>c;

    float D = b*b-4*a*c;

    if (D > 0) {
        float r1 = (-b + sqrt(D)) / (2*a);
        float r2 = (-b - sqrt(D)) / (2*a);
        cout<<"Roots are real and different: "<<r1<<" , "<<r2;
    }
    else if (D == 0) {
        float r = -b / (2*a);
        cout<<"Roots are real and equal: "<<r<<" , "<<r;
    }
    else {
        float real = -b / (2*a);
        float imag = sqrt(-D) / (2*a);
        cout<<"Roots are imaginary: "
            <<real<<" + "<<imag<<"i , "
            <<real<<" - "<<imag<<"i";
    }

    return 0;
}