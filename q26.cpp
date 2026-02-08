#include <iostream>
using namespace std;

int main() {

    // prime no.
    int start, end;
    cout << "Enter start limit: ";
    cin >> start;

    cout << "Enter end limit: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are:\n";

    for (int i = start; i <= end; i++) {
        if (i < 2) continue;

        bool isPrime = true;

        for (int j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << i << " ";
    }

    // password
    string password;
    cout<<"\n\nEnter password: ";
    cin>>password;

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    for (int i = 0; i < password.length(); i++) {
        char ch = password[i];

        if (ch >= 'A' && ch <= 'Z')
            hasUpper = true;
        else if (ch >= 'a' && ch <= 'z')
            hasLower = true;
        else if (ch >= '0' && ch <= '9')
            hasDigit = true;
        else if (ch=='@' || ch=='#' || ch=='$' || ch=='%' || ch=='!' || ch=='&' || ch=='*')
            hasSpecial = true;
    }

    if (hasUpper && hasLower && hasDigit && hasSpecial)
        cout << "Password is Strong";
    else
        cout << "Password is Weak";

    return 0;
}
