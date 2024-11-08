#include <stdio.h>
#include <stdlib.h> //for exit()

int main(void) {
    int a;

    scanf("%d",&a);


// if문보다 가독성이 좋아짐(중괄호를 쓸 필요가 없어진다)
//switch문 : 조건에 맞는 case의 구문을 수행
    switch(a) {
        case 4:
        /* intentional fallthrough 구문 공유를 위함*/ 
        
        case 5:
        printf("5");
        break; // break를 걸지않으면 switch 내의 남아있는 구문을 수행

        case 1:
        printf("1");
        break;

        default:
        printf("Invalid_input");
        exit(1); //의도적인 프로그램 종료
        break;

    }
    
    return 0;
}