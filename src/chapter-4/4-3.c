#include <stdio.h>
#include <string.h>

char dtake(char str[], int m){
	int length = strlen(str);
	return str[length-m];
}

int main() {
	int n, m;
	char Converter[50];
	scanf("%d%d", &n, &m);
	sprintf(Converter, "%d", n);
	printf("%c", dtake(Converter, m));
	return 0;
}
