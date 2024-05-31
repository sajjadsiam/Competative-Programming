#include <iostream>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
    
    int total_time = 240 - k;
    int problems_solved = 0;
    
    for (int i = 1; i <= n; i++) {
        int time_for_problem_i = 5 * i;
        if (total_time >= time_for_problem_i) {
            total_time -= time_for_problem_i;
            problems_solved++;
        } else {
            break;
        }
    }
    
    cout << problems_solved << endl;
    
    return 0;
}
