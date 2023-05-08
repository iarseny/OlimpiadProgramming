#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    

    int matrix[n + 1][n + 1];

    cout << endl << endl << endl;

    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < n + 1; j++) {
            matrix[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        matrix[tmp1][tmp2] = 1;
        matrix[tmp2][tmp1] = 1;
    }

    for (int i = 1; i < n + 1; i++) {
        int answer = 0;
        for (int j = 1; j < n + 1; j++) {
            if (matrix[i][j] == 1) {
                answer += 1;
            }
        }
        cout << answer << " ";
    }
    return 0;
}