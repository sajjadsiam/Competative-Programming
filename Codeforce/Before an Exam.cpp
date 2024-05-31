#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int d, sumTime;
    cin >> d >> sumTime;
    
    vector<int> minTime(d), maxTime(d);
    int minSum = 0, maxSum = 0;
    
    for (int i = 0; i < d; i++) {
        cin >> minTime[i] >> maxTime[i];
        minSum += minTime[i];
        maxSum += maxTime[i];
    }
    
    if (minSum <= sumTime && sumTime <= maxSum) {
        cout << "YES" << endl;
        int remaining = sumTime - minSum;
        for (int i = 0; i < d; i++) {
            int extra = min(maxTime[i] - minTime[i], remaining);
            cout << minTime[i] + extra << " ";
            remaining -= extra;
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
