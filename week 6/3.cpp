#include <iostream>
using namespace std;

bool myXor(bool x, bool y) {
    if ((x == 1 && y == 0) || (x == 0 && y == 1)) 
        return 1;
    else
        return 0;
}

int main() {
    bool x, y;
    cin >> x >> y;
    cout << myXor(x, y);
}