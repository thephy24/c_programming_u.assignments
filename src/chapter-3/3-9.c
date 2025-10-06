#include <stdio.h>

int main() {
    char i,j,k;
    for(char i='x';i<='z';i++) {
        for(char j='x';j<='z';j++) {
            if(i != j) {
                for(char k='x'; k<='z';k++) {
                    if(i!=k&&j!=k) {
                        if(i!='x'&&k!='x'&&k!='z') {
                            printf("a %c\n b %c \n c %c",i,j,k);
                        }
                    }
                }
            }
        }
    }
}
 
