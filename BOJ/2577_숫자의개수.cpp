#include <iostream>
using namespace std;

int main() {
	int a,b,c,mr;
	int nums[10] = {0,};
	
	cin >> a >> b >> c;
	mr = a * b * c;
	
	while(mr) {
		nums[mr % 10]++;
		mr /= 10;
	}
	
	for(int i = 0; i < 10; i++) {
		cout << nums[i] << "\n";
	}
	
	return 0;
}
