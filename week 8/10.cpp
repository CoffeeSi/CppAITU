#include <iostream>
#include <cstring>
using namespace std;

bool compare(char* s1, int size1, char* s2, int size2) {
    if (size1 == size2) {
        for (int i = 0; i < size1; i++) {
            if (s1[i] == s2[i])
                continue;
            else
                return 0;
        }
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    char s1[200], s2[200];
    cin >> s1;
    cin >> s2;
    int size1 = strlen(s1), size2 = strlen(s2);
    switch (compare(s1, size1, s2, size2))
    {
    case 0:
        cout << "NO";
        break;
    case 1:
        cout << "YES";
        break;
    }
}