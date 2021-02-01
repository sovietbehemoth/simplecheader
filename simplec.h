#include <stdio.h>
#include <string.h>

#define true 0
#define false 1

int stgeq(char val1[100], char val2[100]) {
    if (strcmp(val1,val2) == 0) return 0;
    if (strcmp(val1,val2) == 1) return 1;
}

int printr(char string[100], int repeat) {
    int i=0;
    for (i=1;i<=repeat;i++) {
        printf("%s", string);
    }
}

int printd(char string[100]) {
    printf("%s\n", string);
}
