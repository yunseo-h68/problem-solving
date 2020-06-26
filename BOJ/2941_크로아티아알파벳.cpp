#include <cstdio>
#include <cstring>

void fc(char* t, char* s, int a, int b) {
	int i = 0;
	
	for(i = 0; i < 5; i++) {
		t[i] = '\0';
	}
	
	for(i = a; i < a+b; i++) {
		t[i - a] = s[i];
	}
}

int main() {
	char s[101] = {0,};
	char t[5];
	int res = 0, ch=0;
	
	char cro[7][3] = {
		"c=",
		"c-",
		"d-",
		"lj",
		"nj",
		"s=",
		"z=",
	};
	scanf("%s", s);
	
	for(int i = 0; s[i]; i++) {
		fc(t, s, i, 2);
		
		for(int j = 0; j < 7; j++) {
			if(strcmp(t, cro[j])==0){
				res++;
				ch = 1;
				i+=1;
				
				break;
			}
		}
		if(ch) {
			ch = 0;
			continue;
		}
		if(!ch) {
			fc(t, s, i, 3);
			if(strcmp(t, "dz=")==0) {
				res++;
				i+=2;
				
				continue;
			}
		}
		
		res++;
		ch = 0;
	}
	printf("%d", res);
}
