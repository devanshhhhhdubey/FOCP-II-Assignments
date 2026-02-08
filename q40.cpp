#include <iostream>
#include <cctype>
using namespace std;

string trimSpaces(string str) {
    int start = 0, end = str.length() - 1;

    while (start <= end && str[start] == ' ') start++;
    while (end >= start && str[end] == ' ') end--;

    return str.substr(start, end - start + 1);
}

string removeExtraSpaces(string str) {
    string result = "";
    bool spaceFound = false;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            result += str[i];
            spaceFound = false;
        } else {
            if (!spaceFound) { 
                result += ' ';
                spaceFound = true;
            }
        }
    }
    return result;
}

string toSentenceCase(string str) {
    if (str.length() > 0) {
        str[0] = toupper(str[0]);
        for (int i = 1; i < str.length(); i++) {
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

int main() {
    string input;
    cout << "Enter the text: ";
    getline(cin, input);

    input = trimSpaces(input);
    input = removeExtraSpaces(input);

    input = toSentenceCase(input);

    int wordCount = 0, digitCount = 0, specialCount = 0;
    bool valid = true;

    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];

        if (isalpha(ch)) {
            continue;   
        } else if (isdigit(ch)) {
            digitCount++;
        } else if (ch == ' ') {
            if (i == 0 || input[i-1] != ' ') wordCount++;
        } else {
            specialCount++;
            valid = false;   
        }
    }

    if (input.length() > 0 && input[input.length() - 1] != ' ')
        wordCount++;

    cout << "\nNormalized text: \"" << input << "\"\n";
    cout << "Total words: " << wordCount << endl;
    cout << "Total digits: " << digitCount << endl;
    cout << "Total special characters: " << specialCount << endl;

    if (valid)
        cout << "Validation: String contains only alphabets, digits, and spaces.\n";
    else
        cout << "Validation: String contains invalid characters.\n";

    return 0;
}
