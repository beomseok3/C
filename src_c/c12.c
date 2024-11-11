/*컴퓨터의 구조

cpu ram disk cache

cpu = 처리자

ram = 정보 저장 담당

cpu(core) -> ram에 접근 -> 정보를 이용해 처리

*/

/*
cpu
데이터 처리 속도 엄청 빠름
Read/Write 속도 : 엄청빠름

메모리: 정보 저장용
저장공간 작음/8Gbyte
Read/Write 속도 : 엄청빠름

L1 cache: L2보다 빠르고 저장공간이 작음
L2 cache:
Read/Write 속도 : 엄청빠름
많이 쓰는 정보를 cpu 가까이에 두고 사용

하드디스크:
저장용량 큼
Read/Write 속도 : 느림

pc관리 소프트웨어: 운영체제(os)
os가 메모리를 관리한다.

메모리는 크게 2개의 구역으로 나뉜다.
힙: 객체들의 세계, 위에서 아레로 내려온다
스택: 지역변수들의 세계. 아레에서 올라간다.


*/

/*
포인터 개념 기본 정리
*/
#include <stdio.h>

void main() {
    int i = 5;

    int* p = &i; // int 변수 i의 주소를 저장할 수 있는 변수 p(&은 실제 주소)
    printf("%d\n",*p);

    printf("%p\n",&i);
    printf("%llu\n",&i); //메모리 주소
    printf("%llu\n",p); //메모리 주소

    *p = 10; // p의 주소로 찾아간다, p의 주소로 가면 4byte 공간이 있고 그곳에는 5가 들어있음, 그것을 10으로 바꾼다.
    printf("%d\n",i);

}