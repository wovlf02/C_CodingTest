#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n - k; i++){
			printf(" ");
		}
		for (int j = 1; j <= k; j++) {
			printf("*");
		}
		printf("\n");
	}	
}