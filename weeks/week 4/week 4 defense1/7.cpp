#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int count = 0;
    char x[6] = {'a','b',' ','d','e','f'};
    for (int i = 0; i < n; i++) {
        if (x[i] == ' ') {
            count++;
        }
    }

    cout << count;
}