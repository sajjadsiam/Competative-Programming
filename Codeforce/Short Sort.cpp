
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    string s;
    
    cin >> s;
    
    if (s[0] == 'c' && s[1] == 'a') {
        cout << "NO" << endl;
    } else if (s[0] == 'b' && s[1] == 'c') {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}
    return 0;
}
