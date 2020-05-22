#include <cstdio>

int main() {
	int n, a, s;
	char c;
	
	scanf("%d", &n);
	scanf("%c", &c);
 	
	while(n--){
		a = s = 0;
		while(1) {
			scanf("%c", &c);
			if(c == 'O') s += ++a;
			else if(c == 'X') a = 0;
			else break;
		}
		printf("%d\n", s);
	}
	return 0;
}
