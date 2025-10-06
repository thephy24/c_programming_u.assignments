#include <stdio.h>

#define FLAG 1
//#define FLAG 0

int main() {
    char input[1000], output[1000];
    int i = 0;
	gets(input);
	#if FLAG
        while (input[i] != '\0') {
            if (input[i] >= 'a' && input[i] <= 'z')
                output[i] = input[i] - 'a' + 'A';
            else if (input[i] >= 'A' && input[i] <= 'Z')
                output[i] = input[i] - 'A' + 'a';
            else
                output[i] = input[i];
            i++;
        }
        output[i] = '\0';
    #else
		strcpy(output, input);
	#endif
	printf("%s", output);
	return 0;
}
