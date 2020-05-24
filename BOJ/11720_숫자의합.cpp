#include <cstdio>

int main() {
	int n, t, sum = 0;
	scanf("%d",&n);
	while(n--) {
		scanf("%1d", &t);
		sum += t;
	}
	printf("%d", sum);
	return 0; 
}
