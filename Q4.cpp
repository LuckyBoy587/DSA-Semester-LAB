#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int res = n * (n + 1) / 2;
    cout << "Sarah could climb " << n << " steps: " << res;
}