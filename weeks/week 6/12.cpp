// #include <iostream>
// #include <cstring>
// using namespace std;

// char toUpper(int len, char str) {
//     for (int i = 0; i < len; i++) {
//         if ((str>='a' && str<='z') || (str>='A' && str<='Z')) {
//             str = toupper(str);
//         }
//         else {
//             str = str;
//         }
//     }
//     return str;
// }

// int main() {
//     int len = 0;
//     char a[100];
//     for (int i = 0; i < 100; i++){
//         cin >> std::noskipws >> a[i];
//         len++;
//         if (a[i] == 10)
//             break;
//     }
//     char string[len];
    
//     for (int i = 0; i < len; i++) {
//         string[i] = toUpper(len, a[i]);
//         cout << string[i];
//     }
// }

#include <iostream>
#include <cstring>
using namespace std;

string toUpper(string str) {
    string str_;
    for (int i = 0; i < str.length(); i++) {
        if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) {
            str_ += toupper(str[i]);
        }
        else {
            str_ += str[i];
        }
    }
    return str_;
}

int main() {
    string string;
    cin >> string;
    cout << toUpper(string);
}