#include <bits/stdc++.h>
using namespace std;

void DFS(map<int, vector<int>>graph, map<int, bool> close, int node) {
    cout << node << " ";
    close[node] = true;
    for (auto i : graph[node]) {
        !close[i] ? DFS(graph, close, i) : void ();
    }
}

int main() {
    map<int, vector<int>> graph;

    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[2].push_back(4);
    graph[2].push_back(5);
    graph[3].push_back(6);


    DFS(graph, map<int, bool> (), 1);

    return 0;
}