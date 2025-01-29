#include <iostream>
using namespace std;

int main() {
    int n;
    bool check = false;
    cin >> n;
    char x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (check)
            cout << x;
        if (x == ':')
            check = true;
    }
}