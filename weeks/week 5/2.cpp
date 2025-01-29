#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int table_[N][N], x, maind = 0, secondd = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> x;
            table_[i][j] = x;
            if (i == j) {
                maind += x;
            }
            if ((N - 1) - i == j) {
                secondd += x;
            }
        }
    }
    cout << maind << ' ' << secondd;
}