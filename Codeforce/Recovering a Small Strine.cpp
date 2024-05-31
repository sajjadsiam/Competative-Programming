 #include <iostream>
    #include <vector>
     
    using namespace std;
     
    int main() {
        int t;
        cin >> t;
     
        while (t--) {
            int n;
            cin >> n;
     
            vector<char> result(3);
            if (n == 26) {
                result[2] = 'x';
                result[1] = 'a';
                result[0] = 'a';
            } else if(n==27){
                result[2] = 'y';
                result[1] = 'a';
                result[0] = 'a';
            }
             else if (n < 26) {
                result[2] = 'a' + (n - 3);
                result[1] = 'a';
                result[0] = 'a';
            }
            
            
            else if(n>26){
                if(n/26==1){
                result[2] = 'z';
                result[1] = 'a' + ((n%26)-2);
                result[0] = 'a';  
            }
            else if(n==52){   
                result[2] = 'z';
                result[1] = 'y';
                result[0] = 'a';
            }
            else if(n/26==2){   
                result[2] = 'z';
                result[1] = 'z';
                result[0] = 'a' + ((n%26)-1);
            }
             else if(n==52){   
                result[2] = 'z';
                result[1] = 'y';
                result[0] = 'a';
            }
            else if(n==78){  
                result[2] = 'z';
                result[1] = 'z';
                result[0] = 'z';
            }
            }
            
            // Output the result
            for (int i = 0; i <3 ; i++) {
                cout << result[i];
            }
            cout << endl;
        }
     
        return 0;
    }
