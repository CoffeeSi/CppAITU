#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void onlyLetters(char* array) {
    for (char* it = array; it != array + strlen(array); it++) {
        if (isalpha(*it)) {
            cout << *it;
        }
    }
}

int main() {
    char array[100];
    cin >> array;
    onlyLetters(array);
}