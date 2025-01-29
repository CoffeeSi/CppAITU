#include <iostream>
#include <cstring>
using namespace std;

int findMax(int array[], int n){
    int MaxInd = 0;
    for (int i = 1; i < n; i++) {
        if (array[MaxInd] <= array[i])
            MaxInd = i;
    }
    return MaxInd;
}

void mostRecent(char *text, string *word) {
    char* array;
    string strArray[1000];
    int n = 0;
    array = strtok(text, " !?.");
    while (array != NULL) {
        for (char *ch = array; *ch; ch++)
        {
        *ch = toupper((unsigned char) *ch);
        }
        strArray[n] = array;
        n++;
        array = strtok(NULL, " !?.");
    }

    *word = strArray[n-1];
}

int main() {
    char str[1000];
    string word[1000];
    cin.getline(str, 1000);

    mostRecent(str, word);
    
    cout << *word;
}