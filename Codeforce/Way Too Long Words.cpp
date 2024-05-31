#include <iostream>
using namespace std;
int main() {
    
    int p;
    int i=0;
    cin>>p;
while(i<p){
    
    string x;
    cin>>x;
    int y=x.length();
    
    
    if(y>10){
        cout<<x[0]<<y-2<<x[y-1]<<endl;
        
    }
    else{
        cout<<x<<endl;
    }
    i++;
}
 
    return 0;
}
