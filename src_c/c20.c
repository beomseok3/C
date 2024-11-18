#include <stdio.h>

int main(void) {
    char c; // 1byte - 128 char는 8bit array로 수를 표현 음수는 2의 보수를 사용
    char nc;
    // 2의 보수란 2^n - binary(자릿수) (n = 자릿수)

    c = 8; // bit 형태 0000 1000
    nc = -8; // 2의 보수를 통한 표현 (2^8 - bin)
    // 1의 보수 0000 1000 -> 1111 0111
    // 2의 보수 1111 1000( -8로 해석 )
    // 1 0000 0000 - 0000 1000 = 1111  1000 (-8)(bit마다 not 연산을 함 + 1)
    printf("%d\n",(c + nc == 0)); // 0000 1000 + 1111 1000 =  1 0000 0000(char 연산에서 9번째 비트는 무시된다.)
    // 정상적으로 0 이나옴

    // 2 의 보수 형태 이므로  1111 1111 은 2^8 - 2^7 즉 -128임 결과적을 음수는 128~-1을 표현가능하고
    // 양수는 0 ~  127까지 포함할 수 있다

    char overflow_c = 129; // 129 = 1000 0001  8비트이므로 9번째 비트는 잘린다 무시(overflow)
    // 0111 1111의 2의 보수, 즉 -127이 된다 1 0000 0000 0 1111 1111
    printf("%d\n",overflow_c);

    // 보수 표현을 통해 cpu의 가산기로 감산을 할 수 있다. 빼는 수의 보수를 더하면 된다.

    unsigned char uc; // 부호비트(MSB)를 수로 표현 255까지 표현 가능
    unsigned char nuc;

    uc = 5;
    nuc = 7;
    // unsigned char는 2의 보수를 사용 못할텐데 감산이 가능할까?
    // 모듈로 256 연산을 통해 처리 감산에 256을 더한다.
    printf("%u\n",(unsigned char)(uc-nuc)); 
    

    printf("%d\n",(int)sizeof(signed char));
    printf("%d\n",(int)sizeof(unsigned char));
    // 1 byte를 다른 방법으로 사용
    return 0;
}
