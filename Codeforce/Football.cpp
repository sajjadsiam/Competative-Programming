#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();

    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            count1++;
            count2 = 0; 
            if (count1 >= 7) {
                cout << "YES" << endl;
                return 0;
            }
        }
        else if (s[i] == '1') {
            count2++;
            count1 = 0; 
            if (count2 >= 7) {
                cout << "YES" << endl;
                return 0;
            }
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
