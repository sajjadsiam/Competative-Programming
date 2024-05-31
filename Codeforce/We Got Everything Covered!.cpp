#include <iostream>
#include <vector>
#include <string>

using namespace std;

string generateString(int n, int k) {
    string result = "";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            char ch = 'a' + j % 26; 
            result += ch;
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n, k;
        cin >> n >> k;

        string result = generateString(n, k);
        cout << result << endl;
    }

    return 0;
}
