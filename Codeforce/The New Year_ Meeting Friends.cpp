#include <bits/stdc++.h>


using namespace std;


int main() {
    int a, b, c;
    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());

    a = abs(v[1] - v[1]);
    b = abs(v[2] - v[1]);
    c = abs(v[0] - v[1]);

    cout << a + b + c << endl;

    return 0;
}
