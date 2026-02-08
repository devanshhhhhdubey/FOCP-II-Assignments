#include <iostream>
using namespace std;
int main(){
    int choice;
    float f,c;
    cout<<"choose:"<<endl<<"1. f to c"<<endl<<"2. c to f"<<endl;
    cout<<"enter choice: ";
    cin>>choice;
    if(choice == 1) {
        cout<<"enter fahrenhiet value: ";
        cin>>f;
        c=(f-32.0)*(5.0/9.0);
        cout<<"value in celcius is: "<<c;
    }
    else if(choice == 2) {
        cout<<"enter celcius value: ";
        cin>>c;
        f=(c*9.0/5.0)+32.0;
        cout<<"value in fahrenhiet is: "<<f;
    }
    else {
        cout<<"invalid choice!!";
    }
    return 0;
}