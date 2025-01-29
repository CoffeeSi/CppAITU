#include <iostream>
#include <cstring>
using namespace std;

void blank(char* arr, int* n) {
    if (*n % 3 == 0) {
        for (int i = 1; i < *n; i++){
            i--;
            for (int j = 0; j < 3; j++) {
                cout << arr[i];
                i++;
            }
            cout << ' ';
        }
    }
    else if (*n % 3 == 1) {
        cout << arr[0];
        cout << ' ';
        for (int i = 2; i < *n; i++){
            i--;
            for (int j = 0; j < 3; j++) {
                cout << arr[i];
                i++;
            }
            cout << ' ';
        }
    }
    else if (*n % 3 == 2) {
        cout << arr[0];
        cout << arr[1];
                cout << ' ';

        for (int i = 3; i < *n; i++){
            i--;
            for (int j = 0; j < 3; j++) {
                cout << arr[i];
                i++;
            }
            cout << ' ';
        }
    }
}

int main() {
    char num[100];
    cin >> num;
    int n = strlen(num);
    blank(num, &n);
}