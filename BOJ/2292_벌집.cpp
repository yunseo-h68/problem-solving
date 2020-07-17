#include <cstdio>

int main()
{
	int n, i=1;
	scanf("%d", &n);
	while(n>3*i*(i-1)+1)i++;
	printf("%d", i);
	return 0;
}
