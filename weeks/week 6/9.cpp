#include <iostream>
#include <cstring>
using namespace std;

const int MAX_N = 200;

int countOccurrence(char arr[MAX_N], char ch) {
    int result = 0;
    int arrLength = strlen(arr);
    for (int i = 0; i < arrLength; i++)
        if (arr[i] == ch)
            result++;
    return result;
}

int main() {
    char a, b;
    char str1[MAX_N], str2[MAX_N];
    cin >> a >> b;
    cin >> str1;
    cin >> str2;
    cout << countOccurrence(str1, a) << ' ' << a << " characters in " << str1 << endl;
    cout << countOccurrence(str2, b) << ' ' << b << " characters in " << str2;

}