#include <stdio.h>

int main(void) {
    printf("==개념시작==\n");

    if( 1 ) {  // in C 1 means True
        printf("True\n");
    }
    
    if( 0 ) { // in C 0 means False
        printf("False\n");
    }

    printf("==문제시작==\n");
    int a = 10;

    // == equal
    if ( a == 10 ) {
        printf("True\n");
    }

    // != diffrent
    if( a!= 10 ) {
        printf("False\n");
    }

    if ( a > 10 ) {
        printf("False\n");
    }

    if (a>=10) {
        printf("True\n");
    }

    int b = 10;

    if ( a == b ) {
        printf("True\n");
    }
    
    // c에는 1(True) or 0(False)이 담긴다
    int c = a != b;
    // c 에는 0(false)가 담긴다.
    // c = (10 != 10) = (0)

    if ( c ) {
        printf("False\n");
    }

    if ( c == 0 ) {
        printf("True\n");
    }

    // ! ==> reverse
    if ( !c ) {
        printf("True\n");
    }

    if (!(!c)) {
        printf("False\n");
    }

    int d = 1;

    if ( c != d ) {
        printf("True\n");
    }
    // &&(and in python) 
    if(1 ==1 && 2 == 2 && 3 == 3 && 4!=4) {
        printf("False\n");
    }

    if( 10 > 10 || 2 < 1 ) {
        printf("False\n");
    }

    if(!(10 > 10 || 2 <1 && 100 == 100)) {
        printf("True");
    }

    return 0;
}