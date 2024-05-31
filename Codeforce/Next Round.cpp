#include <iostream>
using namespace std;
int main() {
    int p,q;
    cin>>p>>q;
    
    int x[p-1];
    int count=0;
 
    for(int j=0;j<p;j++){
      cin>>x[j];
          }
          
    for(int i=0;i<p;i++){
        if((x[i]>=x[q-1]) && x[i]>0){
            count++;
        }
    }
     cout<<endl<<count;
     return 0;
}
