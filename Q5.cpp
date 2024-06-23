#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;

    stack<int> s;
    while (size-- > 0) {
        int num;
        cin >> num;
        s.push(num);
    }

    stack<int> temp = s;
    cout << "Stack: ";
    while (!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }
    cout << endl;
    while (!temp.empty()) {
        cout << "Popped :" << temp.top() << endl;
        temp.pop();
    }
    cout << "Stack :";
}