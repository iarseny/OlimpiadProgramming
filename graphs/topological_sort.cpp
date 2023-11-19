#include <bits/stdc++.h>

using namespace std;

map<int, vector<int>> graph;
vector<bool> visited(1000, false);
vector<int> graph_sort;

void topsort(int v) {
    visited[v] = true;
    for (auto i : graph[v]) {
        if (!visited[i]) {
            topsort(i);
        }
    }

    graph_sort.push_back(v);
}

int main() {
    graph[1] = {2, 3};

    int n = 3;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            topsort(i);
        }
    }

    reverse(graph_sort.begin(), graph_sort.end());

    for (auto i : graph_sort) {
        cout << i << endl;
    }

    return 0;
}
