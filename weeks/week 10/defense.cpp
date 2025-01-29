#include <iostream>
#include <cstring>
using namespace std;

struct Book {
    string title;
    string author;
    int year;
};

void inputBooks(Book books[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Book " << i+1 << ':' << endl;
        cout << "Title: ";
        cin >> books[i].title;
        cout << "Author: ";
        cin >> books[i].author;
        cout << "Publication Year: ";
        cin >> books[i].year;
    }
}

void printBooks(Book books[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (books[j].year > books[j + 1].year) {
                Book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }

    cout << "\nBooks: " << endl;
    for (int i = 0; i < n; i++) {
        cout << books[i].title << " by " << books[i].author << ' ' << books[i].year << endl;
    }
}

int main() {
    int n;
    cin >> n;

    Book books[n];
    inputBooks(books, n);
    printBooks(books, n);
}