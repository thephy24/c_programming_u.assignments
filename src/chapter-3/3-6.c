#include <stdio.h>

int main() {
	int n, i;
	scanf("%d", &n);
	for(i = 2; i < n; i++) {
		if(!(n % i)){
			printf("%d is not a prime", n);
			return 0;
		}
	}
	printf("%d is a prime", n);
	return 0;
}
