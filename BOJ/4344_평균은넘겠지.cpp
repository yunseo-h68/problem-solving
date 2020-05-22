#include <cstdio>

int main() {
	int c, s[1001];
	scanf("%d", &c);
	while(c--) {
		int n, sum = 0, ov = 0;
		scanf("%d", &n);
		for(int i = 0; i < n; i++) {
			scanf("%d", &s[i]);
			sum+=s[i];
		}
		for(int i = 0; i < n; i++) {
			if(s[i] > sum / n)ov++;
		}
		printf("%.3f%\n", (float)ov/n*100);
	}	
}
