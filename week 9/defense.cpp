#include <iostream>
#include <cstring>
using namespace std;

bool checkLetters(char* arr, int n) {
    bool flag = false;
    for (char* it = arr; it != arr + n; it++) {
        if ((('A' > *it || *it < 'Z') && ('a' < *it || *it < 'z') && *it != ' '))
            flag = true;
    }
    return flag;
}

int main() {
    char str[200];
    cin.getline(str, 200);
    int n = strlen(str);
    switch (checkLetters(str, n))
    {
    case 1:
        cout << "True";
        break;
    case 0:
        cout << "False";
        break;
    }
}