#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    int count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++) {
        if (isupper(s[i])) {
            count1++;
        } else if (islower(s[i])) {
            count2++;
        }
    }

    if (count1 > count2) {
        for (int i = 0; i < n; i++) {
            cout << (char)toupper(s[i]);
        }
    } else if (count2 > count1) {
        for (int i = 0; i < n; i++) {
            cout << (char)tolower(s[i]);
        }
    } else {
        for (int i = 0; i < n; i++) {
            cout << (char)tolower(s[i]);
        }
    }

    cout << endl;

    return 0;
}
