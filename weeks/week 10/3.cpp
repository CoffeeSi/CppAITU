#include <iostream>
#include <cstring>
using namespace std;

struct Student{
    int ID;
    string surname;
    double grade;
};

void sortGrade(Student* students, int* n) {
    for (int i = 0; i < *n - 1; i++) {
        for (int j = 0; j < *n - 1 - i; j++) {
            if (students[j].grade < students[j+1].grade) {
                Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < *n - 1; i++) {
        for (int j = 0; j < *n - 1 - i; j++) {
            if ((students[j].grade == students[j+1].grade) && (students[j].ID > students[j+1].ID)) {
                Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
    cout << students[0].ID << ' ' << students[0].surname << ' ' << students[0].grade;
}

int main() {
    int n;
    cin >> n;
    Student students[n];
    for (int i = 0; i < n; i++) {
        cin >> students[i].ID >> students[i].surname >> students[i].grade;
    }
    sortGrade(students, &n);
}