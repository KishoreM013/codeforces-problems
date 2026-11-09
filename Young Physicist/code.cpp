#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long fi = 0, fj = 0, fk = 0;
    while(n > 0){
        int i, j, k;
        cin >> i >> j >> k;
        fi += i;
        fj += j;
        fk += k;
        n--;
    }
    cout << ((!fi && !fj && !fk)?"YES":"NO") ;
    return 0;
}