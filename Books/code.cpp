#include<iostream>
#include<vector> 

using namespace std;
int main () {
    
    int n, t;
    cin >> n >> t;
    
    vector<int> reading_time(n);
    
    for(int i = 0 ; i < n ; i ++ ){
        cin >> reading_time[i];
    }
    
    int j = 0;
    int book_count = 0;
    int time_taken = 0;
    
    for(int i = 0 ; i < n ; i ++) {
        time_taken += reading_time[i];
        while( t < time_taken && j < n ){
            time_taken -= reading_time[j++];
        }
        book_count = max(book_count, i - j + 1);
    }
    
    cout << book_count << endl;
    
    return 0;
}