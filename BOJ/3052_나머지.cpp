#include <iostream>
using namespace std;

int main() {
	int x, r = 0;
	int a[42]={0,};
	
	for(int i = 0; i < 10; i++) {
		cin >> x;
		r += !a[x % 42]++;
	}
	
	cout << r;
	return 0;
}
