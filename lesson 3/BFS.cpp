#include <bits/stdc++.h>
using namespace std;

void BFS(map<int, vector<int>> graph, map<int, bool> close) {
    vector<int> queue;
    queue.push_back(1);

    while (queue.size() != 0) {
        cout << queue[0] << " ";
        close[queue[0]] = true;
        int tmp = queue[0];
        queue.erase(queue.begin());
        for (auto i : graph[tmp]) {
            !close[i] ? queue.push_back(i) : void ();
        }
    }
}

int main() {

    map<int, vector<int>> graph;
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[2].push_back(4);
    graph[2].push_back(5);
    graph[3].push_back(6);

    BFS(graph, map<int, bool> ());

    return 0;
}