#include <iostream>
using namespace std;

void inputValues(int* array, int size) {
    for (int* it = array; it != array + size; it++)
        cin >> *it;
}

int findMax(int array[], int n){
    int MaxInd = 0;
    for (int i = 1; i < n; i++) {
        if (array[MaxInd] <= array[i])
            MaxInd = i;
    }
    return MaxInd;
}

void sumBeforeMax(int* array, int MaxInd, int* sum) {
    for (int* it = array; it != array + MaxInd; it++)
        if (*it > 0)
            *sum += *it;
}

int main() {
    int n, sum = 0;
    cin >> n;
    int array[n];
    inputValues(array, n);
    sumBeforeMax(array, findMax(array, n), &sum);
    cout << sum;
}