#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    float table_1[N][N], x;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> x;
            table_1[i][j] = x;
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> x;
            cout << table_1[i][j] + x << ' ';
        }
        cout << '\n';
    }
}