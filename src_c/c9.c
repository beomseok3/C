#include <stdio.h>
#include <time.h>

int is_prime(int num) {
    if(num<2) {
        return 0;
    }

    for(int i = 2; i<num; i++) {
        if(num%i == 0) {
            return 0;
        }
    }
    return 1;
}

void sum(int n, int m) {
    int sum = 0;
    
    for(int i = n; i<=m; i++) {

        if (is_prime(i)) {
            sum+=1;
        }
    }
    printf("%d부터 %d까지 소수의 수 : %d\n",n,m,sum);
}

int main(void) {
    clock_t start = clock();
    sum(1,200000);
    clock_t end = clock();
    printf("소요시간 %lf\n", (double)(end - start)/CLOCKS_PER_SEC); // 4.13 sec 
    return 0;
}

/*
중간정리

소스코드의 4대 구성 요소

변수
변수선언 int a
int를 변수 타입(식별자), a를 변수명이라고 한다. 변수 a를 만들고 a에는 정수에만 담을 수 있다는 의미
변수선언은 2번 이상 할 수 없음
변수는 값을 넣어줄 때 말고는 값 취급 해야 한다.

자료형: 
1byte = 8bit(c), nbit 2^n 표현 0을 포함하고 음수부터 시작 (unsigned를 이용하면 더많은 양수 표현 가능)

문자형: char(1byte) 

정수형: short(2byte), int(4byte), long(4), long long(8) ( 고정소수점 )

실수형: float(4byte), double(8byte) ( 부동 소수점 : 근사값 )
값
종류: 숫자, 문자(사실 숫자)

조건문
if : if( 조건문 ) { 실행문 }
else: if( 조건문 ) { 실행문 } else{실행문2}

switch문

반복문
*/

/*
연산자 우선순위 
사칙 연산자(*,/ > +,-) > 논리 연산자(*>&&,||)
앞이 먼저 실행
*/