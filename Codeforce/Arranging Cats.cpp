#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
 
         string a1;
         string a2;
        int extra=0,noone=0;
            cin>>a1;
            cin>>a2;
        for(int j=0;j<a;j++){
            if(a1[j]=='1' && a2[j]=='0'){
                extra++;
            }
            else if(a1[j]=='0' && a2[j]=='1'){
                noone++;
            }
        }
        int mx=max(extra,noone);
        cout<<mx<<endl;
    }
    return 0;
}
