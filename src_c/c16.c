// 200을 저장하는 메모리가 가장 효율적인 방법

#include "stdio.h" // <>를 굳이 붙이지 않아도 됨 헤더파일 찾는 방식이 달라짐

int power(int a, int b);

int main(void) {
    unsigned char i = 200;
    unsigned char over_i = 256; // 0부터 다시 시작
    printf("%d\n",over_i);

    printf("%d\n",(int)sizeof(i));

    // printf("%d\n",(2**8)); c에는 '**' 연산자가 없다

    // 함수를 만들거나 불러와야 한다.
    printf("%d\n",(int)power(2,8));

    printf("i : %d\n", i);
    return 0;
}


int power(int a, int b ) {
    int result = 1;
    for(int i = 0;i<b;i++) {
        result *= a;
    }
    return result;
}
/*
unsigned를 이용하면 부호를 저장하는 비트를 수로 할당
데이터 크기 만큼의(2^8) 음이 아닌 정수를 표현 가능
*/