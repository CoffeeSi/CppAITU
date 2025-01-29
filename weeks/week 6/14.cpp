#include <iostream>
#include <cstring>
using namespace std;

string toUpper(string str) {
    string str_;
    for (int i = 0; i < str.length(); i++) {
        if (str[i]>='a' && str[i]<='z') {
            str_ += toupper(str[i]);
        }
        else if (str[i]>='A' && str[i]<='Z') {
            str_ += tolower(str[i]);
        }
        else {
            continue;
        }
    }
    return str_;
}

int main() {
    string string;
    cin >> string;
    cout << toUpper(string);
}