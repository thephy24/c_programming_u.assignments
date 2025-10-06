#include <stdio.h>

double func(double x, int n) {
	double result = x;
	for(int i = 1; i <= n; i++){
		result += i;
	}
	return result;
}

int main() {
	double x;
	int n;
	scanf("%lf %d", &x, &n);
	printf("%.4lf", func(x, n));
	return 0;
}
