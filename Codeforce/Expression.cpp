#include<bits/stdc++.h>
using namespace std;

int main(){
  
    int a, b, c;
    cin >> a >> b >> c;
     
    if(a == b && b == c && a == c) {
        int l = a + a + a;
        int f = a * a * a;
        int p = max({l, f});
        cout << p << endl;
    }
    else {
        int x = a + b * c;
        int y = a * (b + c);
        int z = a * b * c;
        int k = (a + b) * c;
        int d = a * b + c;
        int g = a + b * c;
        int h = a + b + c;

        int m = max({x, y, z, k, d, g, h});

        cout << m << endl;
    }
   
}
