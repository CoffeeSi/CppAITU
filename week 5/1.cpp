#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    float table_[N][M], x, mini = 1000;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> x;
            table_[i][j] = x;
            if (x < mini)
            {
                mini = x;
            }
        }
    }
    cout << mini;
}