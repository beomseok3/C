#include <stdio.h>


//c에서 문자는 존재하지 않는다. 문자도 숫자이다.


// 방법 1(for)
/*
int main(void) {
    for (int i = 97;i<=122;i++) {
        printf("%c\n",i);
    }

    return 0;
}
*/

//방법 2(while)
/*
int main() {
    int i = 97;
    while(i<=122) {
        printf("%c\n",i);
        i++;
    }

    return 0;
}
*/

//방법 3 배열을 이용한다

int main() {
    char alphabet[] = "abcdefghijklmnopqrxtuvwxyz";

    for (int i = 0; i<26;i++) {
        printf("%c\n",alphabet[i]);
    }

    return 0;
}