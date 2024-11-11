#include <stdio.h>

void pointer(int *num) {
    *num += 5;
}

void number(int num) {
    num += 5;
}

int main() {
    int a = 15;

    pointer(&a); // 함수 호출 변수의 주소를 준다( *num = & a )
    printf("%d\n",a); //값을 바꾼다

    number(a);
    printf("%d",a); //값을 못 바꾼다

}