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
    int n;
    cin >> n;
    char a;
    char str1[MAX_N];
    
    for (int i = 0; i < n; i++) {
        cin >> a >> str1;
        cout << countOccurrence(str1, a) << ' ' << a << " in " << str1 << endl;
    }
}