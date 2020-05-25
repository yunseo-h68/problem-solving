#include <cstdio>

int main() {
	int n, m;
	char w[21];
	scanf("%d", &n);
	while(n--) {
		scanf("%d %s",&m, w);
		for(int i=0;w[i]!='\0';i++){
			for(int j=0;j<m;j++){
				putchar(w[i]);
			}
		}
		puts("");
	}
	return 0;
}
