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
    char aList[n], strList[n][MAX_N];
    
    for (int i = 0; i < n; i++) {
        cin >> a >> str1;
        aList[i] = a;
        for (int j = 0; j < MAX_N; j++)
            strList[i][j] = str1[j];
        
    }

    for (int i = n-1; i >= 0; i--)
        cout << countOccurrence(strList[i], aList[i]) << ' ' << aList[i] << " in " << strList[i] << endl;
}