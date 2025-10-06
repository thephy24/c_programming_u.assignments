#include "4-6_pri.h"

int main() {
	char input_char;
	int input_int;
	double input_lfloat;
	scanf("%d %lf %c", &input_int, &input_lfloat, &input_char);
	UDEF_PRINTF_INT(input_int);
	UDEF_PRINTF_LFLOAT(input_lfloat);
	UDEF_PRINTF_CHAR(input_char);
	return 0;
}
