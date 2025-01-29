#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int x, sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> x;
            if (i == j) continue;
            else if (i - j > 0){
                sum += x;
            }
        }
    }
    cout << sum;
}