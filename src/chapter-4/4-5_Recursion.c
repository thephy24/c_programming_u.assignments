#include <stdio.h>

double func(double x, int n) {
	if(n == 1) {
		return (x+1);
	}
	return func(x, n-1) + n;
}

int main() {
	double x;
	int n;
	scanf("%lf %d", &x, &n);
	printf("%.4lf", func(x, n));
	return 0;
}
