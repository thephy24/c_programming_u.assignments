#include <stdio.h>

int main() {
	int a[4] = {}, i, j, temp;
	for(i = 0; i < 4; i++) 
		scanf("%d", &a[i]);
	for (i = 0; i < 3; i++)
        for (j = 0; j < 3 - i; j++)
			if (a[j] > a[j + 1]) {
			    temp = a[j];
			    a[j] = a[j + 1];
			    a[j + 1] = temp;
			}
	for(i = 0; i < 4; i++)
		printf("%d ", a[i]);
	return 0;
}
