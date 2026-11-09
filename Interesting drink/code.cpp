#include<iostream> 
#include<vector> 
#include<algorithm> 

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    vector<int> cost(n);
    
    for(int i = 0 ; i < n ; i++ ){
        cin >> cost[i]; 
    }
    
    sort(cost.begin(), cost.end());
    
    int days;
    cin >> days;
    
    while(days--){
        int money;
        cin >> money;
        cout << upper_bound(cost.begin(), cost.end(), money) - cost.begin() << endl;
    }
    
    return 0;
}