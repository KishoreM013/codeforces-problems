
#include<iostream> 
#include<vector> 
#include<numeric>

using namespace std ;

bool dfs(int i, int& n, vector<vector<int>>& graff, vector<int>& group, int belong) {
    if(group[i] != -1 && group[i] != belong) {
        return false ;
    }
    group[i] = belong;
    for(int j : graff[i]){
        if(group[j] == -1)
            if(!dfs(j, n, graff, group, !belong))
                return false;
        if(group[j] == belong)
            return false;
    }
    return true;
}

int main() {
    
    int n, e;
    cin >> n >> e;
    
    vector<vector<int>> graff(n+1, vector<int>());
    vector<int> group(n+1, -1); 
    vector<bool> seen(n+1, false);
    
    for(int i = 0 ; i < e ; i++ ){
        
        int u, v;
        cin >> u >> v; 
        
        graff[u].push_back(v);
        graff[v].push_back(u);
    }
    
    for(int i = 1; i <= n; i ++){
        if(group[i] == -1){
            if(!dfs(i, n, graff, group, 0)){
                cout << -1 << endl;
                return 0;
            }
        }
    }
    
    int a = accumulate(group.begin()+1, group.end(), 0);
    cout << a << endl;
    for(int i = 1 ; i <= n ; i ++){
        if(group[i])
            cout << i << " ";
    }
    cout << endl;
    cout << n - a << endl; 
    for(int i = 1 ; i <= n ; i ++){
        if(!group[i])
            cout << i << " ";
    }
    return 0;
}
