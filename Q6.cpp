#include <iostream>
#include <stack>
using namespace std;

int main(){
    string word;
    cin >> word;
    stack<char> s;

    for (char letter: word) {
        s.push(letter);
    }

    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
}