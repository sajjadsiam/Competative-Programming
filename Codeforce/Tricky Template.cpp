#include <iostream>
#include <vector>

using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int count1 = 0, count2 = 0;

        string a, b, c;
        cin >> a >> b >> c;

      for (int i = 0; i < n; ++i) {
        if (b[i] != c[i] && a[i] != c[i]) {
            count1++;
        } else if (a[i] != b[i] && a[i] == c[i]) {
            count2++;
        }
    }



        if (count1>=1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
