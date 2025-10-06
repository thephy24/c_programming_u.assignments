#include <stdio.h>
#include <math.h>

#define M_PI 3.1415926

double Surface(double r1, double r2, double L){
	return (M_PI * ((pow(r1, 2)+pow(r2, 2))+(r1+r2)*L));
}
	
double l(double h, double r1, double r2){
	return sqrt((pow(h, 2) + pow((r1-r2), 2)));
}

double Volume(double h, double r1, double r2){
	return (M_PI * h * (pow(r1, 2) + pow(r2, 2) + r1 * r2) /3);
} 

int main() {
	double r1 = 32.5, r2 = 40.6, h = 20.5;
	printf("s = %.5lf\nv = %.5lf", Surface(r1, r2, l(h, r1, r2)), Volume(h, r1, r2));
	return 0;
}
