#include <iostream>
#include <cctype>   // for isdigit, isalpha, tolower
using namespace std;

int main() {
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;

    if (isdigit(ch)) {
        cout<<"It is a Number";
    }
    else if (isalpha(ch)) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout<<"It is a Vowel";
        }
        else {
            cout<<"It is a Consonant";
        }
    }
    else {
        cout<<"It is a Special Character";
    }

    return 0;
}
