#include <iostream>
#include <cstring>
using namespace std;

void decode(char* str, int size, int shift) {
    for (char* it = str; it != str + size; it++){
        char s = *it - shift;
        if (s < 65) {
            s = *it - shift + 26;
        }
        cout << s;
    }
}
//65 90
int main() {
    char str[50];
    cin >> str;
    int shift;
    cin >> shift;
    int size = strlen(str);
    decode(str, size, shift);
}