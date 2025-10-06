#include <stdio.h>

int main() {
    int input, tryError = 0;
    do {
    	if(tryError)
            printf("Invaild number!\n");
    	if(tryError == 5)
            return 0;
        scanf("%d", &input);
        tryError++;
    }
    while(input < 1000 || input > 9999);
    printf("%d %d %d %d", (input/1000),
                          (input%1000/100),
                          (input%100/10),
                          (input%10) );
    return 0;
}
