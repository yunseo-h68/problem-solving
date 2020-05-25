#include <cstdio>

int main() {
	int bc, c, wc=0;
	
	c=getchar();
	bc=c;
	while((c=getchar())!='\0'&&c!='\n') {
		if(c==' ')wc++;
		bc=c;
	}
	
	if(bc==' ')wc--;
	printf("%d", wc+1);
}
