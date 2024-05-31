#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int stability = (m / 2) * n;


        cout << stability << endl;
    }

    return 0;
}
