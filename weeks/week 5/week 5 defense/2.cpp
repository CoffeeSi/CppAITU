#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n][n];
    int m = 1;
    for (int i = 0; i < n; i++) {
        m = 1;
        for (int j = i; j < n; j++) {
            array[i][j]=m;
            array[j][i]=m;
            m++;
        }
        cout << '\n';
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            if (array[i][j] == n) {
                cout << 'x' << ' ';
            }
            else {
                cout << array[i][j] << ' ';
            }
        }
        cout << '\n';
    }
}