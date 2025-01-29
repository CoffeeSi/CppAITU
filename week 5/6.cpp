#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int table[N][N], x;
    bool check = true;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> x;
            table[i][j] = x;
            if (i == j) {
                continue;
            }
            else if (table[i][j] == table[j][i]) {
                check = true;
            }
            else {
                check = false;
            }
            
        }
    }
    if (check) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}