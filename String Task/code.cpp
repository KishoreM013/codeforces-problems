#include<iostream>

using namespace std; 

int main () {
    
    string s; 
    cin >> s;
    
    for(char c : s){
        if('A' <= c && c <= 'Z'){
            c -= 'A';
            c += 'a';
        }
        if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y'){
            continue;
        } 
        cout << "." << c ;
    }
    cout << endl;
    
    return 0;
    
}