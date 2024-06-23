#include <bits/stdc++.h>
using namespace std;

bool hasCycleDFS(int start, int parent, map<int, vector<int>>& graph, set<int> visited) {
    visited.insert(start);

    for (int dest: graph[start]) {
        if (visited.find(dest) == visited.end()) {
            if (hasCycleDFS(dest, start, graph, visited)) {
                return true;
            }
        } else if (dest != parent) {
            return true;
        }
    }

    return false;
}

int main(){
    int vertex, edges;
    cin >> vertex >> edges;
    map<int, vector<int>> graph;

    for (int i=0; i<edges; i++) {
        int p1, p2;
        cin >> p1 >> p2;
        graph[p1].push_back(p2);
        graph[p2].push_back(p1);
    }

    for (int start = 0; start < vertex; start++) {
        if (hasCycleDFS(start, -1, graph, set<int>())) {
            cout << "The social network contains cycles.";
            return 0;
        }
    }

    cout << "The social network does not have cycle.";
}