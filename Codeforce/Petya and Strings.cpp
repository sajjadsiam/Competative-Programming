#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();

    for (int i = 0; i < n; i++) {
        s1[i]=(char)tolower(s1[i]);
        s2[i]=(char)tolower(s2[i]);
        }

    if(s1==s2)
        cout<<0;
    else if(s1<s2)
        cout<<-1;
    else
        cout<<1;
    return 0;
}
