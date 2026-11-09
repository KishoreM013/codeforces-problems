#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n ; 
    int len = 1; 
    int max_len = 1;
    int prev = -1;
    
    for(int i = 0; i < n ; i ++ ){
        int curr;
        cin >> curr ;
        
        if(i > 0 && curr >= prev){
            len += 1;
        } else {
            len = 1;
        }
        max_len = max(max_len, len);
        prev = curr;
    }
    cout << max_len << endl;
    
}