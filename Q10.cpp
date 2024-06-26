#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name, gender;
};

int main(){
    int size;
    cin >> size;

    map<int, Student> m;
    while (size-- > 0) {
        int roll;
        Student s;
        cin >> roll;
        cin >> s.name >> s.gender;
    }

    int target;
    cin >> target;

    if (m.find(target) == m.end()) {
        cout << "Student with roll number " << target << " found.";
    } else {
        cout << "Student with roll number " << target << " not found.";
    }
}