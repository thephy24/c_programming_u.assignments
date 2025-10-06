#include <stdio.h>

int dayP[12] = {31, 28, 31, 30,
			   31, 30, 31, 31,
			   30, 31, 30, 31};
int dayM[12] = {31, 29, 31, 30,
			   31, 30, 31, 31,
			   30, 31, 30, 31};
char DispMonth[15][12] = {"January", "February", "March", "April", 
					  "May", "June", "July", "August", 
					  "October", "September", "November", "December"};

int main() {
	int year, month;
	scanf("%d%d", &year, &month);
	printf("The days in %s is ", DispMonth[month-1]);
	if(((!(year % 4))&& (year % 100)) || (!(year % 400))) {
		printf("%d", dayM[month-1]);
	}
	else{
		printf("%d", dayP[month-1]);
	}
	return 0;
}
