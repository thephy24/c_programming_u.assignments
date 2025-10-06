#include <stdio.h>

int main() {
	double input, output;
	int typeID = -1;
	scanf("%lf", &input);
	typeID = (input < 1) ? (1) : ((input < 10) ? (2) : (3));
	printf("%d\n", typeID);
	switch(typeID){
		case 1:
			output = input/2.0;
			break;
		case 2:
			output = input*2-1;
			break;
		case 3:
			output = -input + 11;
			break;
	}
	printf("%.4lf", output);
	return 0;
}
