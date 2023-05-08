#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<vector<int>> m;

    for (int i = 0; i < n; i++) {
        vector<int> vec;
        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;
            vec.push_back(tmp);
        }
        m.push_back(vec);
    }

    vector<int> colors;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        colors.push_back(tmp);
    }

    int k = 0;

    for (int i = 0; i < n; i++) {
        int clr = colors[i];
        for (int j = 0; j < n; j++) {
            if (clr != colors[j] && m[i][j] == 1) {
                k++;
            }
        }
    }

    cout << k / 2;

    return 0;
}