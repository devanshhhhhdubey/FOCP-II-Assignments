#include <iostream>
using namespace std;

int main() {
    string username;
    bool valid = true;

    cout<<"Enter username: ";
    cin>>username;

    for (int i = 0; i < username.length(); i++) {
        char ch = username[i];

        if (!((ch >= 'A' && ch <= 'Z') ||(ch >= 'a' && ch <= 'z') ||(ch >= '0' && ch <= '9'))) {
            valid = false;
            break;
        }
    }

    if (valid)
        cout << "Username Accepted";
    else
        cout << "Username Rejected";

    return 0;
}
