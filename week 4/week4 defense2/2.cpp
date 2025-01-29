#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++) {
        cout << array[i];
        for (int j = 0; j < n; j++) {
            cout << ' ';
        }   
    }
}