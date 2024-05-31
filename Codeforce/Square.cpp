#include <bits/stdc++.h>

using namespace std;

int main() {
 int a, b,c,d,e,f,g,h;
    int n;
    cin >> n;
    while(n>0)
    {
        cin >> a >> b >> c >> d >> e >> f >> g >> h;
    int area = 0;

     int l[4]={a,c,e,g};
    int w[4]={b,d,f,h};
    sort(l,l+4);
    sort(w,w+4);
     int p=l[3]-l[0];
    int q=w[3]-w[0];
    cout<<abs(p*q) <<endl;
 
        n--;
    }
  
    
   
    return 0;
}
