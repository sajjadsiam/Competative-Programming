#include <iostream>
#include <unordered_map>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    unordered_map<string, int> database;
    
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        
        if (database.count(name) == 0) {
            cout << "OK" << endl;
            database[name] = 1;
        } else {
            int num = database[name]++;
            cout << name << num << endl;
            database[name + to_string(num)] = 1;
        }
    }
    
    return 0;
}
