#include <cstdio>

int f(int n) {
	return (n % 10)*100 + ((n / 10) % 10)*10 + (n / 100);
} 

int main() {
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d", f(a) > f(b) ? f(a) : f(b));
	return 0;
}
