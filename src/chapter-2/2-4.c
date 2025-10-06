#include <stdio.h>

int main() {
    char input;
    scanf("%c", &input);
    printf("Former one is %c, latter one is %c.",
		   ((int)input) - 1,
		   ((int)input) + 1 );
    return 0;
}
