#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double a, b;

    do {
        cout<<"\nWelcome to calculator"<<endl;
        cout<<"Choose: "<<endl;
        cout<<"1. Add"<<endl;
        cout<<"2. Subtract"<<endl;
        cout<<"3. Multiply"<<endl;
        cout<<"4. Divide"<<endl;
        cout<<"5. Square root"<<endl;
        cout<<"6. Square"<<endl;
        cout<<"0. Exit"<<endl;

        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice) {
            case 1:
                cout<<"Enter two numbers: ";
                cin>>a>>b;
                cout<<"Result = "<<a+b<<endl;
                break;

            case 2:
                cout<<"Enter two numbers: ";
                cin>>a>>b;
                cout<<"Result = "<<a-b<<endl;
                break;

            case 3:
                cout<<"Enter two numbers: ";
                cin>>a>>b;
                cout<<"Result = "<<a*b<<endl;
                break;

            case 4:
                cout<<"Enter two numbers: ";
                cin>>a>>b;
                if(b!=0)
                    cout<<"Result = "<<a/b<<endl;
                else
                    cout<<"Division by zero not allowed"<<endl;
                break;

            case 5:
                cout<<"Enter number: ";
                cin>>a;
                cout<<"Square root = "<<sqrt(a)<<endl;
                break;

            case 6:
                cout<<"Enter number: ";
                cin>>a;
                cout<<"Square = "<<a*a<<endl;
                break;

            case 0:
                cout<<"Exiting..."<<endl;
                break;

            default:
                cout<<"Invalid choice"<<endl;
        }

    } while(choice != 0);

    return 0;
}
