#include<iostream> 
#include<climits>

using namespace std; 

typedef long long ll;

int main() {
    
    string recipe;
    cin >> recipe; 
    
    ll nb, ns, nc;
    cin >> nb >> ns >> nc; 
    
    ll pb, ps, pc;
    cin >> pb >> ps >> pc; 
    
    ll rubles;
    cin >> rubles; 
    
    ll ob = 0, os = 0, oc = 0; 
    
    for(char c : recipe) {
        if( c == 'B')   ob++;
        else if (c == 'S')   os++; 
        else   oc++;
    }
    
    ll burger_count = 0;
    
    ll low = 0;
    ll hie = 2e12+100;
    
    while(low <= hie) {

        ll mid = low+(hie-low)/2; 
        
        ll rqb = mid*ob - nb;
        ll rqs = mid*os - ns;  
        ll rqc = mid*oc - nc; 
        
        if(rqb < 0)  rqb = 0;
        if(rqs < 0)  rqs = 0; 
        if(rqc < 0)  rqc = 0; 
        
        ll needed_cost = 0;
        
        needed_cost += rqb*pb; 
        needed_cost += rqs*ps; 
        needed_cost += rqc*pc; 
        
        if(needed_cost <= rubles){
            burger_count = mid; 
            low = mid+1;
        } else {
            hie = mid-1;
        }
    }
    cout << burger_count << endl;
    
    return 0;
}