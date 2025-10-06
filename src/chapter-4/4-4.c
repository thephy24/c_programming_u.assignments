#include <stdio.h>

int main() {
	int input, result[100] = {}, iter = 0;
	scanf("%d", &input);
	printf("%d = ", input);
	if(input == 1) {
		printf("1");
		return 0;
	}
	for(int i = 2; i <= input; i++) {
		if(!(input%i)) {
			while(!(input%i)) {
				input /= i;
				result[iter++] = i;
			}
		}
	}
	for(int i = 0; i < iter; i++) {
		if(i != iter-1)
			printf("%d * ", result[i]);
		else
			printf("%d", result[i]);
	}
	return 0;
}
