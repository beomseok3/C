#include <stdio.h>

int main(vodi) {
    // 포인터 = 메모리 저장의 주소값

    int *p1;
    int a = 15; 
    p1 = &a;
    // a에는 값 15, p1에는 a의 주소

    printf("%lld\n",p1);

    printf("%lld\n",&a);

    printf("%d\n",*p1);

//p1과 *p1은다르다 *은 값이고 p1은 주소이다

}