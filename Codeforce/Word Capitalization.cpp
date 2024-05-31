#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    cin >> s;
    int i=0;
    int n = s.length();
    
    char x= (char)toupper(s[i]);
    s[i]=x;

    for (int i = 0; i < n; i++) {
            cout<<(s[i]);
        }
    }
