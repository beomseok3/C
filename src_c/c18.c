// 22억을 저장하는 효과적인 방법

#include "stdio.h"

int main(void) {
    long s = 2200000000; //data 영역에 8byte 차지

    unsigned int ud = 2200000000; //data 영역에 4byte 차지

    printf("long : %d, unsinged int :  %d\n", (int)sizeof(s),(int)sizeof(ud));

    printf("long : %ld, unsinged int :  %ld\n",(long)s,(long)ud );

    s = 2200000000000;

    printf("long: %ld\n",s);

    ud = s;

    printf("unsigned int : %ld\n",(long)ud); 
    // 물론 long은 더 많은 수를 담을 수 있음 
    // 변수가 담을 값의 범위를 잘 생각하기

    return 0;
}