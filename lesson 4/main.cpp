#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &vec, int start, int end, int m) {
    vector<int> arr1;
    vector<int> arr2;
    for (int i = start; i <= m; i++) {
        arr1.push_back(vec[i]);
    }

    for (int i = m + 1; i <= end; i++) {
        arr2.push_back(vec[i]);
    }

    int i = 0, j = 0, k = start;

    //7, 4    8, 9, 10
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            vec[k] = arr1[i];
            i++;
        } else {
            vec[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < arr1.size()) {
        vec[k] = arr1[i];
        k++;
        i++;
    }

    
    while (j < arr2.size()) {
        vec[k] = arr2[j];
        k++;
        j++;
    }

}

void merge_sort(vector<int> &vec, int start, int end) {
    if (start < end) {
        int m = start + (end - start) / 2;
        merge_sort(vec, start, m);
        merge_sort(vec, m + 1, end);
        merge(vec, start, end, m);
    }
}

int main() {
    vector<int> vec{2, 8, 3, 7, 6};
    merge_sort(vec, 0, vec.size() - 1);
    
    for (auto i : vec) {
        cout << i << " ";
    }

    return 0;
}