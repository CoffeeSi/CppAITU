#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

void func(char* str, int n) {
    long double res = 0;
    
    long double count = 0;
    long double count_ = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] == ' ' || str[i] == ',' || str[i] == '.' || str[i] == '?' || str[i] == '!' || str[i] == '-' || (str[i] >= '0' && str[i] <= '9')) {
            if (count_ > 0) {
                res += count_;
                count_ = 0;
                count++;
            }
        }
        if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90)) {
            count_++;
        }
    }
    if (count_ > 0) {
        res += count_;
        count++;
    }
    cout << setprecision(9) << res / count << endl;
}

int main() {
    char str[1000];
    cin.getline(str, 1000);
    int n = strlen(str);
    func(str, n);
}