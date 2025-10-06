#include <stdio.h>
#include <string.h>

char Telegraph[256];

int main() {
	fgets(Telegraph, 256, stdin);
    for(int i = 0; i < strlen(Telegraph); i ++){
        if(Telegraph[i] >= 'A' && Telegraph[i] <= 'W'){
            Telegraph[i] += 3;
        }
        if(Telegraph[i] > 'W' && Telegraph[i] <= 'Z'){
            Telegraph[i] -= 23;
        }
    }
    printf("%s", Telegraph);
	return 0;
}
