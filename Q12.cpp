#include <bits/stdc++.h>
using namespace std;

bool dfs(int start, int parent, map<int, vector<int>>& graph, set<int>& visited) {
    visited.insert(start);

    for (int dest: graph[start]) {
        if (visited.find(dest) == visited.end()) {
            dfs(dest, start, graph, visited);
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
    for (int i = 0; i < edges; ++i) {
        int st, end;
        cin >> st >> end;
        graph[st].push_back(end);
        graph[end].push_back(st);
    }

    set<int> visited;
    if (dfs(0, -1, graph, visited)) {
        cout << "The social network contains cycles.";
    } else {
        cout << "The social network does not have a cycle.";
    }
}