#include <stdio.h>

int main() {
	int input;
	scanf("%d", &input);
	if(!(input % 2)) {
		printf("Even Number");
	}
	else{
		printf("Odd Number");
	}
	return 0;
}
