#include <stdio.h>

int main(void) {
    for(int dan = 1; dan <= 10; dan++) {
        printf("%d단\n",dan);
        for(int j=1; j<=9; j++) {
            printf("%d * %d = %d\n",dan,j,dan*j);
        }
    }
    return 0;
}