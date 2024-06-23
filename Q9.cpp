#include <bits/stdc++.h>
using namespace std;

struct Job {
    int data, priority;

    bool operator < (const Job& other) const {
        return priority < other.priority;
    }
};

int main(){
    int size;
    cin >> size;

    priority_queue<Job> pq;
    while (size-- > 0) {
        Job j;
        cin >> j.data >> j.priority;
        pq.push(j);
    }

    while (!pq.empty()) {
        cout << pq.top().data << ' ';
        pq.pop();
    }
}