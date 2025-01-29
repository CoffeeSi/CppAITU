#include <iostream>
#include <cstring>
using namespace std;

void com(char* num1, char* num2, char* num3) {
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < strlen(num1); i++) {
        a += num1[i];
    }
    for (int i = 0; i < strlen(num2); i++) {
        b += num2[i];
    }
    for (int i = 0; i < strlen(num3); i++) {
        c += num3[i];
    }

    if (a > b && a > c) {
        for (int i = 0; i < strlen(num1); i++) {
            cout << num1[i];
        }
    }
    if (b > c && b > a) {
        for (int i = 0; i < strlen(num2); i++) {
            cout << num2[i];
        }
    }
    if (c > a && c > b) {
        for (int i = 0; i < strlen(num3); i++) {
            cout << num3[i];
        }
    }
}

int main() {
    char num1[101], num2[101], num3[101];
    cin >> num1 >> num2 >> num3;
    com(num1, num2, num3);
}