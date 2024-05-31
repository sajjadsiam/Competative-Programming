#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> summands;

    for (int i = 0; i < s.size(); i += 2) {
        int summand = s[i] - '0'; 
        summands.push_back(summand);
    }
    sort(summands.begin(), summands.end());

    string newSum;
    for (int i = 0; i < summands.size(); i++) {
        newSum += to_string(summands[i]);
        if (i < summands.size() - 1) {
            newSum += "+";
        }
    }

    cout << newSum << endl;

    return 0;
}
