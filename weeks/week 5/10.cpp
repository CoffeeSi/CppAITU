#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int array[N][M], array_[N*M];
    int index = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            cin >> array[i][j];
            if (array[i][j] > 0) {
                array_[index] = array[i][j];
                index++;
            }
        }
    int k;
    for (int i = 1; i < index; i++) {
        for (int j = 1; j < index ; j++) 
            if (array_[j - 1] > array_[j]) {
                k = array_[j - 1];
                array_[j - 1] = array_[j];
                array_[j] = k;
        }
    }
    cout << index << endl;
    for (int i = 0; i < index; i++)
        cout << array_[i] << " ";
    return 0;
}