#include <iostream>
using namespace std;

// 1
// int main() {
//     int n;
//     cin >> n;
//     char array[n];
//     for (int i = 0; i < n; i++) {
//         cin >> array[i];
//     }
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i+1; j++) {
//             cout << array[i];
//         }
//         cout << ' ';
//     }
// }

// 2
// int main() {
//     int n;
//     cin >> n;
//     char array[n];
//     for (int i = 0; i < n; i++) {
//         cin >> array[i];
//     }

//     for (int i = 0; i < n; i++) {
//         cout << array[i];
//         for (int j = 0; j < n; j++) {
//             cout << ' ';
//         }   
//     }
// }


// 3
// int main() {
//     int n;
//     cin >> n;
//     char array[n], array_[n];
//     int check = 0, count = 0;
//     for (int i = 0; i < n; i++) {
//         cin >> array[n-i-1];
//     }
//     for (int i = 0; i < n; i++) {
//         if (array[i] == '!' && check == 0) {
//             check = 1;
//             continue;
//         }
//         else if (check == 1) {
//             if (array[i] == '!') {
//                 break;
//             }
//             else {
//                 count++;
//                 array_[count] = array[i];
//             }
//         }
//     }
//     for (int i = 0; i < count-1; i++) {
//         char temp = array_[i];
//         array_[i] = array_[count-i];
//         array_[count-i] = temp;
//     }
//     for (int i = 0; i <= count; i++) {
//         cout << array_[i] << ' ';
//     }
// }