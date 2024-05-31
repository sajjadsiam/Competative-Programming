#include <iostream>
#include <string>

using namespace std;

int main() {
    long long a,b,c,x,y;
    long long z;
    cin>>a>>b>>c;
    
    if(a%c!=0){
        x=(a/c)+1;
    }
    else {
        x=(a/c);
    }
    if(b%c!=0){
        y=(b/c)+1;
    }
    else {
        y=(b/c);
    }
    z=x*y;
    cout<<z<<endl;
    
    
    
    return 0;
}
