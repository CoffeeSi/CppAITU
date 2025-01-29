#include <iostream>
#include <cstring>
using namespace std;

void sum(const char* a, const char* b) {
    const int max = 1001;
    char res[max];
    int len1 = strlen(a);
    int len2 = strlen(b);
    int tr = 0;
    int index = max - 1;
    res[index--] = '\0';
    while (len1 > 0 || len2 > 0 || tr > 0)
    {
        int num1 = 0;
        int num2 = 0;
        if (len1 > 0)
        {
            num1 = a[len1 - 1] - '0';
            len1--;
        }
        if (len2 > 0)
        {
            num2 = b[len2 - 1] - '0';
            len2--;
        }
        int total = num1 + num2 + tr;
        tr = total / 10;
        res[index--] = (total % 10) + '0';
    }
    cout << (res + index + 1) << endl;
}

int main() {
    char array1[1000], array2[1000];
    cin.getline(array1, 1000);
    cin.getline(array2, 1000);
    sum(array1, array2);
}