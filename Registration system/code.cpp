#include "iostream"
#include "unordered_map"
//#include "algorithm"

using namespace std;


int main() {
	
	int n;
	cin >> n;
	
	unordered_map<string, int> freq;
	
	for( int i = 0 ; i < n ; i ++ ) {
		string s;
		cin >> s;
		if(freq.find(s) != freq.end()){
			cout << s << freq[s] << endl;
			freq[s]++;
		} else {
			freq[s] = 1;
			cout << "OK\n";
		}
	}
	
    return 0;
}