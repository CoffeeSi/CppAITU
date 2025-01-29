#include <iostream>
using namespace std;

int totalPositive(int m, int array[]) {
    int count = 0;
    for (int j = 0; j < m; j++) {
        if (array[j] > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;
    int array[n][m], arrCount[n], arrCount_[n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> array[i][j];
    for (int i = 0; i < n; i++){
        arrCount[i] = totalPositive(m, array[i]);
        arrCount_[i] = arrCount[i];
    }

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (n - 1); j++) {
            if (arrCount[j - 1] > arrCount[j]){
                int k = arrCount[j - 1];
                arrCount[j - 1] = arrCount[j];
                arrCount[j] = k;
            }
        }
    }
    int equal = 0;
    for (int i = 0; i < n; i++) {
        if (arrCount[i] == arrCount[i+1]){
            equal++;
        }
    }
    if (arrCount[0] == arrCount[n-1])
        equal++;
        
    if (n == equal){
        cout << "Numbers are equal";
        return 0;
    }
    else {
        for (int i = 0; i < n; i++){
            if (arrCount_[i] == arrCount[n-1]){
                cout << i+1;
                return 0;
            }
        }
    }
}