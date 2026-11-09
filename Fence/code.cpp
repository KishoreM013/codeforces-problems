    #include<iostream>
    #include<algorithm>
    #include<climits>
    using namespace std;
    
    int main() {
        
        int n, k;
        cin >> n >> k;
        
        int planks[n];
        long long minkseq = LLONG_MAX;
        long long ksequence = 0;
        int idx = 0;
        for(int i = 0 ; i < n ; i ++) {
            cin >> planks[i]; 
        }
        
        for(int i = 0 ; i < n ; i++) {
            ksequence += planks[i];
            if(i >= k-1){
                if(minkseq > ksequence){
                    minkseq = ksequence;
                    idx = i-k+1;
                }
                ksequence -= planks[i-k+1];
            }
        }
        cout << idx + 1 << endl;
        return 0;
    }