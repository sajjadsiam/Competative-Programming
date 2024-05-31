#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t = 1;
    cin >> t;
    while (t--) {
    int n;
    cin>>n;
    int arr[n];
        for (int i = 0; i < n; ++i) {
            cin>>arr[i];
        }
        ll total=1;
        sort(arr,arr+n);
        arr[0]=arr[0]+1;
        for (int i = 0; i < n; ++i) {
            total*=arr[i];
        }
    cout<<total<<endl;
    }}
