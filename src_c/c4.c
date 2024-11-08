#include <stdio.h>

int main(void) {
    // '&&'은 그리고(and)를 의미
    // '||'는 또는(or)을 의미

    // age에 따른 할인 가능 불가능 판단
    /*
    scanf => 사용자가 입력한 값을 변수에 넣는다
    %d 정수를 입력 받겠다
    &age age 변수에 값을 저장 받겠다
    */
   
    int age;

    printf("나이를 입력해주세요: ");

    scanf("%d", &age);

    printf("당신의 나이는 %d살 입니다.\n",age);

    if (age<= 19 || age >= 60) {
        printf("할인 대상입니다");
    }
    else{
        printf("할인 대상이 아닙니다");
    }   
    return 0;
}