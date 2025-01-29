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

int findMin(int array[], int n){
    int MinInd = 0;
    for (int i = 1; i < n; i++) {
        if (array[MinInd] > array[i])
            MinInd = i;
    }
    return MinInd;
}

void numsBtwMinMax(int array[], int MinInd, int MaxInd, int* sum) {
    if (MinInd < MaxInd) {
        for (int i = MinInd+1; i < MaxInd; i++)
            if (array[i] % 2 == 0)
                *sum += 1;
    }
    else {
        for (int i = MaxInd+1; i < MinInd; i++)
            if (array[i] % 2 == 0)
                *sum += 1;
    }
}

int main() {
    int n, sum = 0;
    cin >> n;
    int array[n];
    inputValues(array, n);
    numsBtwMinMax(array, findMin(array, n), findMax(array, n), &sum);
    cout << sum;
}