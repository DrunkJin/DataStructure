#include <stdio.h>
// 01. factorial(5), 4, 3, 2, 1 => 5번 호출

// 02. 순환 호출 시 활성 레코드들은 스택에 저장됨

// 03. 활성 레코드 : 복귀 주소가 스택에 저장되고 호출되는 함수의 매개변수와 지역변수를 할당받음.

// 04. 순환호출은 스택이 허용하는 한도만큼 호출 가능

// 05. 1이 아니면 끝나지 않는 함수

// 06. 끝나는 지점이 지정되어있지 않음

// 07. sum(5) 호출시 내용과 함수의 반환값
int sum(int n)
{
    printf("%d\n", n);
    if( n<1 ) return 1;
    else return ( n + sum(n-1) );
}

// 08. recursive(5) 호출시 출력내용과 반환값
int recursive(int n)
{
    printf("%d\n", n);
    if( n<1) return 2;
    else return( 2*recursive(n-1)+1 );
}


void main()
{
    printf("Chapter2 07번 문제 답\n");
    int n = 5;
    int sumResult = sum(n);
    printf("%d까지 합 : %d\n\n",n, sumResult);

    printf("Chapter2 08번 문제 답\n");
    int recursiveResult = recursive(n);
    printf("recursive(%d) 답 : %d\n\n", n, recursiveResult);
    
    return 0;
}