#include <iostream>
#include <cstring>
using namespace std;

void divisibility(char *arr) {
    int sum = 0;
    int len = strlen(arr);
    int even = 0, odd = 0;
    for (int i = 0; i < len; i++) {
        int dig = arr[i] - 48;
        if (i % 2 == 0) {
            even += dig;
        }
        else {
            odd += dig;
        }
    }
    if ((even - odd) % 11 == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}

int main() {
    char array[1000];
    cin >> array;
    divisibility(array);
}