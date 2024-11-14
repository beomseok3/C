// 21억을 저장하는 가장 효율적인 방법

#include "stdio.h"
#include <math.h>

int main(void) {
    int s = 2100000000;
    printf("int의 크기 %d\n",(int)sizeof(s));
    printf("%d\n", (int)pow(2,32 -1)); // 32bit 변수

    unsigned us = 4200000000;
    printf("us : %u\n",us);
    printf("s : %d\n",s);
    
    return 0;
}