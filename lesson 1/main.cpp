#include <vector>
#include <map>
#include <iostream>

using namespace std;

int main()
{   
    int sum = 9;
    vector<int> a = {5, 4, 8, -1, 0};
    map<int, int> m;

    for (int i = 0; i < a.size(); i++) {
        if (m.find(sum - a[i]) != m.end()) {
            cout << i << " " << m[sum - a[i]];
            break;
        }
        m[a[i]] = i;
    }
    
    return 0;
}
