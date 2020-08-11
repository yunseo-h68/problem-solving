#include <stdio.h>

int main() {
	int n, nums[1001],i,j,temp;
	scanf("%d", &n);
    
	for (i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}
	
	for (i = 0; i < n; i++) {
		for (j = i+1; j < n; j++) {
			if (nums[i] > nums[j]) {
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
		printf("%d\n", nums[i]);
	}
	
	return 0;
}
