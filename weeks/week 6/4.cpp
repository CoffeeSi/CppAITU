#include <iostream>
using namespace std;

bool election(bool x, bool y, bool z) {
    int sum = x + y + z;
    if (sum < 2)
        return 0;
    else
        return 1;
}

int main() {
    bool x, y, z;
    cin >> x >> y >> z;
    cout << election(x, y, z);
}