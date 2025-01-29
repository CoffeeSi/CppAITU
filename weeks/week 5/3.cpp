#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    float x, k, l;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> x;
            if (x == 0) {
                k = i+1;
                l = j+1;
            }

        }
    }
    cout << k << ' ' << l;
}