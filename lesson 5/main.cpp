#include <iostream>
#include <vector>

using namespace std;

int n;
void all_numbers(vector<int> s) {
    if (s.size() == n) {
        for (auto i : s) {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    
    for (int i = 1; i <= n; i++) {
        bool flag = true;
        for (auto j : s) {
            if (j == i) {
                flag = false;
            }
        }
        
        if (flag) {
            s.push_back(i);
            all_numbers(s);
            s.pop_back();
        }
    }
}

int main()
{
    int k;
    cin >> k;
    n = k;
    all_numbers(vector<int> ());

    return 0;
}
