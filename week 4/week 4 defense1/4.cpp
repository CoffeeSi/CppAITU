#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == ':')
            break;
        cout << x;
    }
}