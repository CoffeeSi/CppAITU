#include <iostream>
#include <cstring>
using namespace std;

void checkAITU(char str[], int n, bool* flag) {
    for (int i = 0; i < n; i++) {
        if (str[i] == 'a' || str[i] == 'A')
            if (str[i+1] == 'i' || str[i+1] == 'I')
                if (str[i+2] == 't' || str[i+2] == 'T')
                    if (str[i+3] == 'u' || str[i+3] == 'U')
                        *flag = 1;
    }
}

int main() {
    char str[1000];
    cin >> str;
    int n = strlen(str);
    bool flag = false;
    checkAITU(str, n, &flag);
    switch (flag)
    {
    case true:
        cout << "YES";
        break;
    case false:
        cout << "NO";
        break;
    }
    
}