#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<vector<int>> vec;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        vector<int> tmp;
        vec.push_back(tmp);
    }

    for (int j = 0; j < m; j++) {
        int tmp1, tmp2;

        cin >> tmp1 >> tmp2;

        vec[tmp1 - 1].push_back(tmp2 - 1);
        //vec[tmp2 - 1].push_back(tmp1 - 1);
    }

    cout << endl << endl;

    cout << n << endl; 
    for (vector<int> i : vec) {
        cout << i.size() << " ";
        for (int j : i) {
            cout << j + 1 << " ";
        }

        cout << endl;
    }


    return 0;
} 