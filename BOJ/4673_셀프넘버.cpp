#include <cstdio>

int d(int n) {
	int r = n;
	while(n > 0) {
		r += n % 10;
		n /= 10;
	}
	return r;
} 

int main() {
	bool a[10000] = {0,};
	for(int i = 1; i <= 10000;i++) {
		int t = d(i);
		if(t <= 10000) a[t-1] = 1;
		if(!a[i-1])printf("%d\n",i);
	}
	return 0;
}

