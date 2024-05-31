#include <bits/stdc++.h>

using namespace std;

int main() {
   int a, b;
    cin >> a >> b;
    int count = 0;

    if (a == b) {
        cout << 1;
        return 0;
    }
    else if (a > b) {
        cout << 1;
        return 0;
    }
    else {
        while (a <= b) {
            a *= 3;
            b *= 2;
            count++;
        }
        cout << count;
    }

    return 0;
}
