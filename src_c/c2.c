#include <stdio.h>

// #pragma warning (disable: 4996)

int main() {
    int a;
    a = 20;

    int b = 40;

    int a1;
    int b1;

    a1= a;
    b1 = b;

    // replace variable a,b
    // a,b = b1,a1; 
    // python,javascript에서는 동시 할당을 지원, C/C++은 지원하지 않음, 따라서 컴파일 되지 않음(기계어로 변환)

    // 방법1
    a=b1;
    b=a1;
    printf("== printf ==\n");

/*  방법2
    int c;
    c=a;
    a=b;
    b=c;
*/

    printf("a : %d\n", a);
    //출력 예시: 40
    printf("b : %d\n", b);
    // 출력 예시: 20

    return 0;

}