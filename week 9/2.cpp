#include <iostream>
#include <cstring>
using namespace std;

void replaceSymbol(char* arr, int n) {
    for (char* it = arr; it != arr + n; it++) {
        if (*it == '!') {
            *it = '.';
        }
    }
}

int main() {
    char str[1000];
    cin.getline(str, 1000);
    int n = strlen(str);
    replaceSymbol(str, n);
    for (int i = 0; i < n; i++) {
        cout << str[i];
    }
}