#include <iostream>
#include <cmath>
using namespace std;

// Week 4 Def
// 1
// int main() {
//     int n;
//     cin >> n;
//     // long array[n];
//     double x, sum = 0;
//     for (int i = 0; i < n; i++){
//         cin >> x;
//         if (i < n/2 + n%2) {
//             sum += x;
//         }
//         else {
//             sum += sqrt(x);
//         }
//     }
//     cout << sum;
// }

// 2
// int main() {
//     int n, count = 0;
//     cin >> n;
//     char array[n];
    
//     for (int i = 0; i < n; i++)
//         cin >> array[i];

//     for (int i = 0; i < n; i++) {
//         if (array[i] == 'a' && array[i+1] == 'b' && array[i+2] == 'c')
//             count++;
//     }
//     cout << count;
// }

// 3
// int main() {
//     int n;
//     cin >> n;
//     int array[3][n/3+n%3], elems = n/3+round((n%3)/2);

//     for (int i = 0; i < 3; i++) {
//         if (n%3 != 0 && i == n%3)
//             elems--;
//         for (int j = 0; j < elems; j++) {
//             cin >> array[i][j];
//             cout << array[i][j] << ' ';    
//         } 
//         cout << '\n';
//     }
// }

// 4
// int main() {
//     int n;
//     cin >> n;
//     char x;
//     for (int i = 0; i < n; i++) {
//         cin >> x;
//         if (x == ':')
//             break;
//         cout << x;
//     }
// }

// 5
// int main() {
//     int n;
//     bool check = false;
//     cin >> n;
//     char x;
//     for (int i = 0; i < n; i++) {
//         cin >> x;
//         if (check)
//             cout << x;
//         if (x == ':')
//             check = true;
//     }
// }

// 6
// int main() {
//     int n, check = 1;
//     cin >> n;
//     char x;
    
//     for (int i = 0; i < n; i++) {
//         cin >> x;
//         if (x == ':') {
//             check++;
//             continue;
//         }
//         if (check % 2 == 0)
//             cout << x;      
//     }
// }

// 7
// int main() {
//     int n = 6;
//     int count = 0;
//     char x[6] = {'a','b',' ','d','e','f'};
//     for (int i = 0; i < n; i++) {
//         if (x[i] == ' ') {
//             count++;
//         }
//     }

//     cout << count;
// }