#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int k = 1, ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= k) {
            ans++;
            k++;
        }
    }
    cout << ans << endl;
    return 0;
}
