#include <iostream>
#include <cstring>
using namespace std;

void countArrows(char* str) {
    int arrows = 0;
    int len = strlen(str);
    for (int i = 0; i < len - 4; i++) {
        if (str[i] == '>' && str[i + 1] == '>' && str[i + 2] == '-' && str[i + 3] == '-' && str[i + 4] == '>') {
            arrows++;
        }
        if (str[i] == '<' && str[i + 1] == '-' && str[i + 2] == '-' && str[i + 3] == '<' && str[i + 4] == '<') {
            arrows++;
        }
    }
    cout << arrows << endl;
}

int main() {
    char str[1000];
    cin >> str;
    countArrows(str);
}