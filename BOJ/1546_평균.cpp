#include <iostream>
using namespace std;

int main() {
	int n, t, m = 0, sum = 0;
    cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> t;
		sum += t;
		if(t > m) m = t;
	}
	
	cout << (float)sum/m*100.0/n;
	return 0;
}
