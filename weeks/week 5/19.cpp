#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int array[n][n];
    int move = 1, x = 0, y = 0;

    for (int i= 0; i < n; i++) {
        if (move == 1) { // Right
            for (int j = x; j < n; j++) {
                if (array[i][j+1] == 1) {
                    array[i][j] = 0;
                    move++;
                    x = j; y = i;
                    break;
                }
                else {
                    array[i][j] = 1;
                }
            }
        }
        else if (move == 2) { // Down
            for (int j = y; j < n; j++) {
                if (array[j+1][i] == 1) {
                    array[j][i] = 0;
                    move++;
                    x = j; y = i;
                    break;
                }
                else {
                    array[j][i] = 1;
                }
            }
        }
        else if (move == 3 ) { // Left
            for (int j = x; j < n; j--) { 
                if (array[i][j-1] == 1) {
                    array[i][j] = 0;
                    move++;
                    x = j; y = i;
                    break;
                }
                else {
                    array[i][j] = 1;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << array[i][j] << ' ';
        }
        cout << '\n';
    }
}