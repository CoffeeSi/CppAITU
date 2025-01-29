#include <iostream>
using namespace std;

int main() {
    int array[10][10], max = 0, temp = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++) {
            cin >> array[i][j];
            if (array[i][j] == 0) {
                temp++;
            }
            else if (array[i][j] == 1) {
                if (temp > max) {
                    max = temp;
                }
                temp = 0;
            }
        }
        if (temp > max) {
            max = temp;
        }
        temp = 0;
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++) {
            if (array[j][i] == 0) {
                temp++;
            }
            else if (array[j][i] == 1) {
                if (temp > max) {
                    max = temp;
                }
                temp = 0;
            }
        }
        if (temp > max) {
            max = temp;
        }
        temp = 0;
    }

    cout << max;
}