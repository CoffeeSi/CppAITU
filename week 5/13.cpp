#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char contacts[5][2][9] = { {"Tom", "555-3322"}, {"Mary", "555-8976"},
                            {"Jon", "555-1037"}, {"Rachel", "555-1400"}, 
                            {"Sherry", "555-8873"} };
    char name[100];
    bool check = false;
    cin >> name;
    for (int i = 0; i < 5; i++) {
        if (!(strcmp(name, contacts[i][0]))){
            cout << contacts[i][1];
            check = true;
        }
    }
    if (!check) {
        cout << "Not found";
    }
}