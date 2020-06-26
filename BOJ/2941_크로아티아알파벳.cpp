#include <cstdio>
#include <cstring>

void fc(char* t, char* s, int a, int b) {
	for(int i = 0; i < 5; i++) t[i] = '\0';
	for(int i = a; i < a+b; i++) t[i - a] = s[i];
}

int main() {
	char s[101] = {0,};
	char t[5];
	int res = 0;
	
	scanf("%s", s);
	
	for(int i = 0; s[i]; i++) {
		fc(t, s, i, 2);
		
		if(t[1] == '=' && ( t[0] == 'c' || t[0] == 's' || t[0] == 'z')) i++;
		else if(t[1] == '-' && (t[0] == 'c' || t[0] == 'd')) i++;
		else if(t[1] == 'j' && (t[0] == 'l' || t[0] == 'n')) i++;
		else {
			fc(t,s,i,3);
			if(!strcmp(t, "dz=")) i+=2;	
		}
		res++;
	}
	
	printf("%d", res);
}
