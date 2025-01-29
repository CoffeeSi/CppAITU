#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int sorti(int array[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            // cout << array[j];
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    return array[0];
}

void blank(char* arr, int* n) {
    if (*n % 3 == 0) {
        for (int i = 1; i < *n; i++){
            i--;
            for (int j = 0; j < 3; j++) {
                cout << arr[i];
                i++;
            }
            cout << ' ';
        }
    }
    else if (*n % 3 == 1) {
        cout << arr[0];
        cout << ' ';
        for (int i = 2; i < *n; i++){
            i--;
            for (int j = 0; j < 3; j++) {
                cout << arr[i];
                i++;
            }
            cout << ' ';
        }
    }
    else if (*n % 3 == 2) {
        cout << arr[0];
        cout << arr[1];
                cout << ' ';

        for (int i = 3; i < *n; i++){
            i--;
            for (int j = 0; j < 3; j++) {
                cout << arr[i];
                i++;
            }
            cout << ' ';
        }
    }
}
int chArray[1000];
void longestSeq(char* text, int* n) {
    bool flag = false;
    
    int temp_ar = 0;
    string temp;
    int temp_n = 0;
    for (char* it = text; it != text + *n; it++) {
        if (isdigit(*it)) {
            flag = true;
            temp[temp_n] = *it;
            temp_n++;
        }
        else if (!isdigit(*it) && flag) {
            // for (int i = 0; i < temp_n; i++){
            chArray[temp_ar] = stoi(temp);
            // }
            cout << chArray[1];
            temp_ar++;
            temp = " ";
            temp_n = 0;
            flag = false;
        }
        // cout << isdigit(*it) << " - " <<  *it << endl;

    }
    // cout << chArray[0];
    // cout << sorti(chArray, temp_ar);
}

int main() {
    char text[1000];
    cin.getline(text, 1000);
    int n = strlen(text);
    longestSeq(text, &n);
}