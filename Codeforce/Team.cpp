#include <iostream>
using namespace std;
int main() {
    int x[2];
    int p;
    int count=0,s=0;
    int i=0;
    cin>>p;
while(i<p){
    for(int j=0;j<3;j++){
    cin>>x[j];
          }
        s=x[0]+x[1]+x[2];
        if(s>=2){
            count++;
            s=0;
        }
        else{
            s=0;
        }
        
      i++;
}
cout<<count<<endl;
    return 0;
}
