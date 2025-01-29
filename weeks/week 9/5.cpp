#include <iostream>
#include <cstring>
using namespace std;

void mostRecent(char *text) {
    char* array;
    string strArray[1000];
    int n = 0;
    array = strtok(text, " ");
    while (array != NULL) {
        bool flag = true;
        if (n == 0) {
            strArray[n] = array;
            n++;
        }
        else {
            for (int i = 0; i < n; i++) {
                if (strArray[i] == array) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                strArray[n] = array;
                n++;
            }
            
        }
        array = strtok(NULL, " ");
    }

    for (int i = 0; i < n; i++) {
        cout << strArray[i] << ' ';
    }
    
}

int main() {
    char str[1000];
    cin.getline(str, 1000);

    mostRecent(str);
}