#include <cstdio>

int main() {
	char c, res = 0; 
	
	while(scanf("%c", &c) > 0 && c >= 'A' && 'z' >= c) {
		res += (c - 'A')/3 + 3;
		if(c == 'S' || c == 'V' || c > 'X') res--;
	}
	printf("%d", res);
	return 0;
}
