#include <iostream>
#include <cstring>
using namespace std;

void countLetters(char a, char* aList) {
    int count = 0, n = strlen(aList);
    for (char* it = aList; it != aList + n; it++) {
        if (*it == a) {
            count++;
        }
    }
    cout << count << ' ' << a << " in ";
    for (char* it = aList; it != aList + n; it++)
        cout << *it;
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    char a, aList[20];

    for (int i = 0; i < n; i++) {
        cin >> a;
        cin >> aList;
        countLetters(a, aList);
    }
}