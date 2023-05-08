#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int last = -1;
    
    for (int i = 0; i < n; i++) {
        int counter = 0;
        for (int j = 0; j < n; j++) {
            int number;
            cin >> number;
            if (number == 1) {
                counter++;
            }
        }
        
        if (last != -1 && counter != last) {
            cout << "NO";
            return 0;
        }
        
        last = counter;
        
        
    }
    
    cout << "YES";

    return 0;
}

