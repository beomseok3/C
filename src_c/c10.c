#include <stdio.h>
#include <stdlib.h> // rand 함수 포함 라이브러리
#include <time.h> // time 함수 포함 라이브러리

void game() {
    
    srand(time(NULL)); // rand함수에 seed값을 준다.

    int random_number = rand () % 100 + 1; // 0~32767 범위 난수 생성 1~9로 범위를 좁혔다, 규칙이 존재한다

    // printf("무작위 수 %d\n", random_number);

    while (1)
    {
        int answer;
        scanf("%d",&answer);

        if (answer == random_number) {
            printf("1\n");
            break;
        }

        else if(answer > random_number) {
            printf("big\n");
        }

        else if(answer < random_number) {
            printf("small\n");
        }

    }
    
}

int main() {
    game();
}