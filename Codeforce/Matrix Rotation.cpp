#include <iostream>
using namespace std;
int main() {
    int p;
    cin>>p;
 int a,b,c,d;
 while(p>=1){
     cin>>a>>b>>c>>d;
    if(((a<b)&& (c<d)&&(a<c)&&(b<d))||((c<a)&&(a<b)&&(d<b)&&(c<d))||((d<c)&&(c<a)&&(b<a)&&(d<b))||((b<a)&&(d<c)&&(b<d)&&(a<c))){
    cout<<"YES"<<endl;
    }
    else {
    cout<<"NO"<<endl;
    }
     
     p--;
 }
 
    return 0;
}
