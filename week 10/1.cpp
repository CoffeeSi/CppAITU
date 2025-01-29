#include <iostream>
#include <cstring>
using namespace std;

struct Train {
    int id;
    char location[200];
    string time;
};

void departure(Train* trains, char* city, int* n) {
    int size = strlen(city);
    string city_;
    for (char* it = city; it != city + size; it++) {
        if ('a' <= *it && *it <= 'z') {
            city_ += (char)(*it - 32);
        }
        else {
            city_ += (char)*it;
        }
    }
    for (int i = 0; i < *n; i++) {
        int loc_size = strlen(trains[i].location);
        string loc_city;
        for (char* it = trains[i].location; it != trains[i].location + loc_size; it++) {
            if ('a' <= *it && *it <= 'z') {
                loc_city += (char)(*it - 32);
            }
            else {
                loc_city += (char)(*it);
            }
        }
        if (loc_city == city_) {
            cout << trains[i].id << '_' << loc_city << '_' << trains[i].time;
            return;
        }
    }
    cout << "Impossible";
}

int main() {
    int n;
    cin >> n;
    Train trains[n];
    for (int i = 0; i < n; i++) {
        cin >> trains[i].id >> trains[i].location >> trains[i].time;
    }
    char city[200];
    cin >> city;

    departure(trains, city, &n);

}