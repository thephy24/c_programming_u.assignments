#include <stdio.h>

int Denominator[40] = {1, 2};
int Numerator[40] = {2, 3};

int main() {
	int n;
	double res = 0;
	scanf("%d", &n);
	for(int i = 2; i < n; i++) {
		Numerator[i] = Numerator[i-1] + Denominator[i-1];
		Denominator[i] = Numerator[i-1];
	}
	for(int i = 0; i < n; i++) {
        res += (double)(Numerator[i]) / (double)(Denominator[i]);
	}
	printf("%.5lf", res);
	return 0;
}
