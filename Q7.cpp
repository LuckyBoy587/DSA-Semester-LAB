#include <iostream>
#include <queue>
using namespace std;

int main(){
    int size;
    cin >> size;

    queue<int> q;
    while (size-- > 0) {
        int num;
        cin >> num;
        q.push(num);
    }

    int delCount;
    cin >> delCount;
    while (delCount-- > 0) q.pop();
    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }
}