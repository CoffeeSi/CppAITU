#include <iostream>
using namespace std;

int different(int array1[], int array2[], int n) {
    int pos1 = 0, pos2 = 0;
    int res;
    for (int i = 0; i < n; i++) {
        if (array1[i] > 0) {
            pos1++;
        }
        if (array2[i] > 0) {
            pos2++;
        }
    
    }
    if (pos1 > pos2)
        res = 1;
    else if (pos1 < pos2)
        res = 2;
    else if (pos1 == pos2)
        res = 0;
    return res;
}

int main() {
    int n;
    cin >> n;
    int array1[n], array2[n];

    for (int i = 0; i < n; i++)
        cin >> array1[i];
    for (int i = 0; i < n; i++)
        cin >> array2[i];

    switch (different(array1, array2, n)) {
    case 0:
        cout << "Numbers are equal";
        break;
    case 1:
        cout << "Number of positives in the first array is greater";
        break;
    case 2:
        cout << "Number of positives in the second array is greater";
        break;
    }
}