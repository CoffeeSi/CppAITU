#include <iostream>
#include <cstring>
using namespace std;

struct Luggage {
    string description;
    int count;
    double weight;
};

struct Passenger {
    int luggageSize;
    string name;
    Luggage* luggage;
};

void maxWeight(Passenger arr[1000], int* n1, int* n2) {
    double max = 0;
    double totalWeight = 0;
    int luggage_ = 0;
    Passenger res;

    for (int i = 0; i < *n1; ++i) {
        for (int j = 0; j < arr[i].luggageSize; ++j) {
            totalWeight = (arr[i].luggage[j].count * arr[i].luggage[j].weight);
            if (totalWeight > max) {
                max = totalWeight;
                res = arr[i];
                luggage_ = j;
            }
        }
    }
    cout << res.name << '\n' << res.luggage[luggage_].description;
}

int main() {
    int n1, n2;
    cin >> n1;
    Passenger arr[1000];
    for (int i = 0; i < n1; ++i) {
        cin >> arr[i].name;
        cin >> n2;

        arr[i].luggageSize = n2;
        arr[i].luggage = new Luggage[n2];

        for (int j = 0; j < n2; ++j) {
            cin >> arr[i].luggage[j].description >> arr[i].luggage[j].count >> arr[i].luggage[j].weight;
        }
    }
    maxWeight(arr, &n1, &n2);
}