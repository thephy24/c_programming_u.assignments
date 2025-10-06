#include <stdio.h>

int main() {
	int n, fibo[100] = {1, 1}, i;
	scanf("%d", &n);
	printf("%d %d ", fibo[0], fibo[1]);
	for(i = 2; i < n; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
		printf("%d ", fibo[i]);
	}
	return 0;
}
