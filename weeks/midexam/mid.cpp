#include <iostream>
#include <cmath>
using namespace std;

//Midterm (Variant 1)
// Name _____Averyanov Yevgeniy_____ Group ___SE-2436___

// 1.	B
// 2.	a) x != y; 
// b) x > y; 
// c) x-y < z; 
// d) x > y && (x < z).
// 3.	A
// 4.	A
// 5.	A


// Task 1
// int main() {
//     int n = 0, sum;
//     cin >> n;
//     sum = floor(n/100) * floor(n%100/10) *floor(n%100%10);
//     cout << sum;
// }

// Task 2
// int main() {
//     double circle, square, r1, r2;
//     cin >> circle >> square;
//     r1 = sqrt(circle/(2*M_PI));
//     r2 = sqrt(square);
//     if (r1 >= r2) {
//         cout << "YES";
//     }
//     else {
//         cout << "NO";
//     }
// }

// Task 3
// int main() {
//     int n;
//     double summa = 0;
//     cin >> n;
//     for (double i = 1; i <= n; i++) {
//         summa += + pow(-1,i+1)*(1/(2*i));
//     }
//     cout << summa;
// }

// Task 4
// int main() {
//     int n;
//     cin >> n;
//     double array[n], temp;
//     for (int i = 0; i < n; i++) {
//         cin >> array[i];
//     }
//     for (int i = 0; i < n-1; i+=2) {
//         if (array[i] > array[i+2]) {
//             temp = array[i+2];
//             array[i+2] = array[i];
//             array[i] = temp;
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         cout << array[i] << ' ';
//     }
// }

// Task 5 
// int main() {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++) {
//             if (j == (n-i-1)) {
//                 cout << 'x' << ' ';
//             }
//             else {
//                 cout << i*n + j+1 << ' ';
//             }
//         }
//         cout << '\n';
//     }
// }