#include <iostream>
using namespace std;

// 1
// int main() {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         for (int j = 1; j <= n; j++) {
//             cout << (i*n+j)*(i*n+j) << ' ';
//         }
//         cout << '\n';
//     }
// }

//2
// int main() {
//     int n;
//     cin >> n;
//     int array[n][n];
//     int m = 1;
//     for (int i = 0; i < n; i++) {
//         m = 1;
//         for (int j = i; j < n; j++) {
//             array[i][j]=m;
//             array[j][i]=m;
//             m++;
//         }
//         cout << '\n';
//     }
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++){
//             if (array[i][j] == n) {
//                 cout << 'x' << ' ';
//             }
//             else {
//                 cout << array[i][j] << ' ';
//             }
//         }
//         cout << '\n';
//     }
// }

// 3
// int main() {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i == j) {
//                 cout << (n-i)*(n-i) << ' ';
//             }
//             else
//                 cout << 0 << ' ';
//         }
//         cout << '\n';
//     }
// }