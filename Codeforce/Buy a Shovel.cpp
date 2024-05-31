#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a,b,ans=0;
    cin>>a>>b;
 
    for(int i=1;i<=10;i++){
        int x=a*i;
        if((x-b)%10==0 || (x%10)==0){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}
