#include <cstdio>

int main(){
	int n, t=0;
	scanf("%d",&n);
	for(;n>=0&&n%5;n-=3,t++);
	printf("%d", n<0?-1:n/5+t);
	return 0;
}
