#include <iostream>
using namespace std;

int main(){
    int size;
    cin >> size;

    for (int i=0; i<size; i++) {
        int pick, drop;
        cin >> pick >> drop;
        if (drop <= pick) {
            cout << "Invalid input! Drop-off time must be greater than pick-up time for request " << i;
            return 0;
        }
    }

    cout << size;
}