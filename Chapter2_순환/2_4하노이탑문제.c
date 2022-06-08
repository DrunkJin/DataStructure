 // 순환의 힘을 가장 극명하게 보여주는 문제

 // 막대 from에 쌓여있는 n개의 원판을 막대 tmp를 사용하여 막대 to로 옮긴다.

/* 하노이 문제 글로 쓰는 알고리즘 1
void hanoi_tower(int n, char from, char tmp, char to)
{
    if (n==1) {
        from의 원판을 to로 이동시킨다.
    }
    else {
        1. from의 맨 밑의 원판을 제외한 나머지 원판들을 tmp로 옮긴다.
        2. from에 있는 한 개의 원판을 to로 옮긴다.
        3. tmp의 원판들을 to로 옮긴다.
    }
}

하노이 문제 글로 쓰는 알고리즘 2
void hanoi_tower(int n, char from, char tmp, char to)
{
    if (n==1) {
        from의 원판을 to로 이동시킨다.
    }
    else {
        hanoi_tower(n-1, from, to, tmp);
        from에 있는 한 개의 원판을 to로 옮긴다.
        hanoi_tower(n-1, tmp, from, tmp);
    }
}
*/

// 프로그램 2.8 하노이의 탑 문제 프로그램
#include <stdio.h>
void hanoi_tower(int n, char from, char tmp, char to)
{
    if (n==1) printf("원판 1을 %c에서 %c로 옮긴다. \n", from, to);
    else {
        hanoi_tower(n - 1, from, to, tmp);
        printf("원판 %d을 %c에서 %c으로 옮긴다.\n", n, from, to);
        hanoi_tower(n - 1, tmp, from, to);
    }
}
int main(void)
{
    hanoi_tower(4, 'A', 'B', 'C');
    return 0;
}

/* 
반복적인 형태로 바꾸기 어려운 순환
1. return n * factorial(n - 1); => 꼬리순환. 순환호출이 순환 함수의 맨 끝에서 이루어지는 형태의 순환. 쉽게 반복적인 형태로 변환이 가능하다.
2. return factorial(n - 1) * n; => 머리순환의 경우 여러군데에서 자기 자신을 호출하는 경우 쉽게 바꿀 수 없다. 

모두 표현가능하다면 꼬리 순환으로 작성해야함.
*/