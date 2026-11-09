#include<iostream>

using namespace std;

int main() {
    long long n, k ;
     cin >> n >> k ;
    long long odds = (n/2) + (n&1);
 // int eves = n - odds;
    if(k <= odds) {
        cout << k*2 - 1 << endl; 
    } else {
        cout << (k-odds)*2 << endl;
    }
    return 0;
}