#include<iostream>
#include<vector> 
#include<algorithm>

using namespace std;

int main() {
    
    int n, l;
    cin >> n >> l ;
    
    vector<double> lights;
    
    for(int i = 0 ; i < n ; i ++ ){
        double lite;
        cin >> lite;
        lights.push_back(lite);
    }
    sort(lights.begin(), lights.end());
    
    
    double radius = 0.0;
    
    radius = lights.front();
    
    radius = max(radius, l - lights.back());
    
    
    for( int i = 0; i < (int)lights.size()-1 ; i ++ ) {
        radius = max(radius, (lights[i+1]-lights[i])/2);
    }
    
    cout.precision(10);
    cout << fixed << radius << endl;
    
    return 0;
 } 