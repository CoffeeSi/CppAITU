#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int array[n][m], arrayT[m][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            cin >> array[i][j];
            arrayT[j][i] = array[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arrayT[m-i-1][j] << ' ';
        }
        cout << '\n';
    }
}