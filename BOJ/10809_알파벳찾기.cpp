#include <cstdio>

int main() {
	char s[101];
	int c[26] = {0,};
	scanf("%s", &s);
	for(int i = 0; s[i] != '\0'; i++) {
		if(!c[s[i] - 'a'])c[s[i] - 'a']=i+1; 
	}
	for(int i = 0; i < 26;i++) {
		printf("%d ",c[i]?c[i]-1:-1);
	}
	return 0;
}
