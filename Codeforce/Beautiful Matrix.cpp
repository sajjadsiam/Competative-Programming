#include <iostream>
#include <cstdlib> 
using namespace std;

int main() {
    int arr[25], r, c, sum;

    for (int i = 0; i < 25; i++) {
        cin >> arr[i];
    }

   
    for (int i = 0; i < 25; i++) {
        if (arr[i] == 1) {
            r = (i / 5) + 1; 
            c = (i % 5) + 1; 
            break;
        }
    }

    
    sum = abs(r - 3) + abs(c - 3);


    cout << sum << endl;

    return 0;
}
