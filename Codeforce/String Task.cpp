#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        s[i] = tolower(s[i]);
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') {
            s[i] = ' ';
        }
    }

    auto s1 = remove(begin(s), end(s), ' ');
    s.erase(s1, end(s));

    int n1 = s.length();

    for (int i = 0; i < n1; i++) {
        cout << '.' << s[i];
    }

    return 0;
}
