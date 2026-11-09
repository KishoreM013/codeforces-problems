#include<iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    
    cout << ((num == 2) || (num&1) ? ("NO\n") : ("YES\n"));

    return 0;
}