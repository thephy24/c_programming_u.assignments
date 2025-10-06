#include <stdio.h>

int main() {
    int x, y, z, intFlag = 0;
    scanf("%d%d%d", &x, &y, &z);
    if((x + y > z) && (y + z > x)
       && (x + z > y)
       && (x && y && z))
        intFlag = 1;
    switch (intFlag) {
        case 1:
            printf("Able to construct a triangle.");
            break;
        default:
            printf("Unable to construct a triangle.");
    }
    return 0;
}
