#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int array[n], array2[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];

    for (int i = n; i >= 0; --i) {
        array2[i] = 0;
        for (int j = 0; j <= i; j++)
            array2[i] += array[n-j-1]; 
    }
    for (int i = 0; i < n; i++)
        cout << array2[i] << ' '; 
}

//a3=a0
//a2=a0+a1
//a1=a0+a1+a2
//a0=a0+a1+a2+a3