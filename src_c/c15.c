# include <stdio.h>

int main(void) {
    int i = 3.14;
    printf("1st ==> i : %d\n", i);
    // i에는 정수만 넣을 수 있다

    float f = 3.14;
    printf("2nd ==> f : %d\n",f);
    // %d는 데이터를 정수로 해석한다 , 실수의 비트 패턴 해석 --> 미정의 동작

    float k = 3.14;
    printf("3rd ==> k : %f\n",k);

    return 0;

    }
