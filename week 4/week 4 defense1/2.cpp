#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    char array[n];
    
    for (int i = 0; i < n; i++)
        cin >> array[i];

    for (int i = 0; i < n; i++) {
        if (array[i] == 'a' && array[i+1] == 'b' && array[i+2] == 'c')
            count++;
    }
    cout << count;
}