#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[3][n/3+n%3], elems = n/3+round((n%3)/2);

    for (int i = 0; i < 3; i++) {
        if (n%3 != 0 && i == n%3)
            elems--;
        for (int j = 0; j < elems; j++) {
            cin >> array[i][j];
            cout << array[i][j] << ' ';    
        } 
        cout << '\n';
    }
}