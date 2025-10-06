#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    printf("This value %s be divided evenly.", (!(x%11))?("can"):("can't") );
    return 0;
}