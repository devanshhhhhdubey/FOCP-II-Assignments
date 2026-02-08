#include <iostream>
#include <string>
using namespace std;

int main() {
    string id, rev = "";
    cout<<"Enter ID: ";
    cin>>id;

    for(int i = id.length() - 1; i >= 0; i--) {
        rev += id[i];
    }

    if(id == rev)
        cout<<"Palindrome ID";
    else
        cout<<"Not a palindrome";

    return 0;
}
