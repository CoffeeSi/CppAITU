#include <iostream>
#include <cstring>
using namespace std;

struct Train {
    int id;
    char location[200];
    char time[5];
};

void departure(Train* trains, char* city, int* n) {
    bool possible = 0;
    int ids[*n];
    int times[*n];
    int count = 0;
    string city_;
    string loc_city_;
    for (char* it = city; it != city + strlen(city); it++) {
        if ('a' <= *it && *it <= 'z') {
            city_ += (char)(*it - 32);
        }
        else {
            city_ += (char)*it;
        }
    }
    for (int i = 0; i < *n; i++) {
        int time = 0;
        int d = 1;
        if (trains[i].time[2] == ':') {
            time += 600*(trains[i].time[0]-48);
            time += 60*(trains[i].time[1]-48);
            d = 0;
        }
        else {
            time += 60*(trains[i].time[0]-48);
        }
        time += 10*(trains[i].time[3-d]-48);
        time += trains[i].time[4-d]-48;


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
            possible = 1;
            loc_city_ = loc_city;
            ids[count] = trains[i].id;
            times[count++] = time;
        }
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (times[j] > times[j+1]) {
                int temp = times[j];
                int temp_ = ids[j];
                times[j] = times[j + 1];
                ids[j] = ids[j + 1];
                times[j + 1] = temp;
                ids[j + 1] = temp_;
            }
        }
    }
    
    if (possible) {
        cout << ids[0] << '_' << loc_city_ << '_' << times[0]/60 << ':' << times[0]%60;
    }
    else 
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