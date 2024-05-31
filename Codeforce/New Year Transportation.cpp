#include <iostream>
using namespace std;
 
int main() {
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
    }
 
    int current = 1;
    while (current < t) {
        current += a[current];
    }
 
    if (current == t) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
 
    return 0;
}
