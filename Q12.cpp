#include <bits/stdc++.h>
using namespace std;

bool hasCycleBFS(int start, map<int, vector<int>>& graph) {
    set<int> visited;
    queue<pair<int, int>> q;

    visited.insert(start);
    q.push({start, -1});

    while (!q.empty()) {
        pair<int, int> currVertex = q.front();
        q.pop();

        for (int dest: graph[currVertex.first]) {
            if (visited.find(dest) == visited.end()) {
                visited.insert(dest);
                q.push({dest, currVertex.first});
            } else if (dest != currVertex.second) {
                return true;
            }
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
        if (hasCycleBFS(start, graph)) {
            cout << "The social network contains cycles.";
            return 0;
        }
    }

    cout << "The social network does not have cycle.";
}