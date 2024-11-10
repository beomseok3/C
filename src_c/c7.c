#include <stdio.h>

void print_o_dan() {
    int dan;
    dan = 5;

    printf("==%d단==\n", dan);
    
    for(int i=1; i<=9; i++) {
        printf("%d*%d=%d\n", dan, i, dan*i);
    }
    printf("\n");
}
// 함수 생성

int main(void) {
    print_o_dan();
    print_o_dan();

    return 0;
}

// 함수 호출