#include <cstdio>

char i, j, k;
	
int main() {
	int t = 0;
	while((i=getchar()) != '\n') {
		if (i == '=' && (j == 'c' || j == 's' || j == 'z'))
			(j=='z'&&k=='d')?t--:0;
		else if(
		!(i == '-' && (j == 'c' || j == 'd')) &&
		!(i == 'j' && (j == 'l' || j == 'n'))) t++;
		k = j, j = i;
	}
	printf("%d", t);
}
