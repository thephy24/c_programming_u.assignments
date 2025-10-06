#include <stdio.h>
#include <string.h>

char dtake(char str[], int m){
	int length = strlen(str);
	return str[length-m-1];
}

int main() {
	int m;
	char input[60];
	scanf("%d", &m);
	fgets(input, 60, stdin);
	printf("%c", dtake(input, m));
	return 0;
}
