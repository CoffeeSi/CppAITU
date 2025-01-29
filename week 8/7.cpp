#include <iostream>
using namespace std;

void inputValues(int* array, int size) {
    for (int* it = array; it != array + size; it++)
        cin >> *it;
}

void sumBtwTwoZeros(int* array, int n, int* count) {
    bool flag = false;
    for (int* it = array; it != array + n; it++){
        if (flag) {
            if (*it != 0)
                *count += *it;
            else
                break;
        }
        else if (*it == 0)
            flag++;
    }
}

int main() {
    int n, count = 0;
    cin >> n;
    int array[n];
    inputValues(array, n);
    sumBtwTwoZeros(array, n, &count);
    cout << count;
}