#include <iostream>
using namespace std;

int main() { 
    int n, t;
    cin >> n >> t;
    int array[n][n], arrayK[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> array[i][j];
            arrayK[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (array[i][j] == 1) {
                cout << array[2][-1] << endl;
                if (array[i+1][j] == 1) arrayK[i][j]++;
                if (array[i-1][j] == 1) arrayK[i][j]++;
                if (array[i][j+1] == 1) arrayK[i][j]++;
                if (array[i][j-1] == 1) arrayK[i][j]++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arrayK[i][j] << ' ';
        }
        cout << '\n';
    }
}