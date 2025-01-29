#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    float x, k, l;
    bool check = false;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> x;
            if (x == -1) {
                k = i+1;
                l = j+1;
                check = true;
            }

        }
    }
    if (check) {
        cout << k << ' ' << l;
    }
    else {
        cout << "-1 -1";
    }
}