#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int x, table[N][M], maxi = 0, _maxi = 0, index = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> table[i][j];
            }
        }
    for (int j = 0; j < M; j++) {
        maxi = 0;
        for (int i = 0; i < N; i++) {
            maxi += table[i][j];
        }
        if (maxi > _maxi) {
            _maxi = maxi;
            index = j + 1;
        }
    }
    cout << index;
}