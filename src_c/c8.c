#include <stdio.h>

int global_variable = 0;

int Gcd();

int Gcd(int a, int b) {
    int max;
    for(int i=1; i<=a&&i<=b; i++) {
        if(a%i==0&&b%i==0) {
            max = i;
        }
    }
    return max;
}

int main() {
    printf("%d", Gcd(6,12));
    return global_variable;
    // printf("%d\n",global_variable);
}

/*
def main()은 프로그램의 시작점이다.

main()에 return을 넣지않아도 프로그램이 종료되나 명시적으로 return을 넣어 종료하는 것이 좋다.

함수내의 변수, 즉 {}내에서 선언된 변수들은 지역변수로 해당 함수내에서만 유효하다.

헤더라인에서 선언한 변수는 전역변수로 프로그램 전체에서 유효하다.
*/