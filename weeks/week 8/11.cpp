#include <iostream>
#include <cstring>
using namespace std;

void palindrom(char array[], int* size) {
    for (int i = 0; i < *size; i++) {
        if (array[i] != array[*size-i-1]) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main() {
    char str[100];
    cin >> str;
    int size = strlen(str);
    palindrom(str, &size);
}