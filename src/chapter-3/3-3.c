#include <stdio.h>

int main() {
	double input, output;
	scanf("%lf", &input);
	if (input < 1) {
		output = input/2.0;
	}
	else if (input >= 1 && input < 10) {
		output = 2.0*input-1;
	}
	else{
		output = -input + 11;
	}
	printf("%.4lf", output);
	return 0;
}
