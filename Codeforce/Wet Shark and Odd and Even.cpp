#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    long long sum = 0;
    int arr[n];
 
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[i] = num;
        sum += num;
    }
 
    sort(arr, arr + n);
 
    if (sum % 2 == 0) {
        cout << sum << endl;
    } else {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 1) {
                sum -= arr[i];
                if (sum % 2 == 0) {
                    cout << sum << endl;
                    return 0;
                }
            }
        }
        cout << 0 << endl;
    }
 
    return 0;
}
