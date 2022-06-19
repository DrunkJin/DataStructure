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

// 09. recursive2(10) 호출시 출력내용과 반환값
int recursive2(int n)
{
    printf("%d\n", n);
    if ( n<1) return -1;
    else return( recursive2(n-3)+1);
}

// 10. recursive3(5) 호출시 화면에 출력되는 내용
int recursive3(int n)
{
    if(n !=1) recursive3(n-1);
    printf("%d\n", n);
}

// 11. asterisk(5) 호출할때 출력되는 *의 갯수는?
void asterisk(int i)
{
    if( i > 1 ) {
        asterisk(i/2);
        asterisk(i/2);
    }
    printf("*");
}

// 12. unknown()에서 "recursive" 입력하면 뭐가 출력되는가?
// unknown()
// {
//     int ch;
//     if( (ch=getchar()) != '\n')
//         unknown();
//     putchar(ch);
// }



void main()
{
    printf("Chapter2 07번 문제 답\n");
    int n = 5;
    int sumResult = sum(n);
    printf("%d까지 합 : %d\n\n",n, sumResult);

    printf("Chapter2 08번 문제 답\n");
    int recursiveResult = recursive(n);
    printf("recursive(%d) 답 : %d\n\n", n, recursiveResult);
    
    printf("Chapter2 09번 문제 답\n");
    n = 10;
    int recursive2Result = recursive2(n);
    printf("recursive2(%d) 답 : %d\n\n", n, recursive2Result);
    
    printf("Chapter2 10번 문제 답\n");
    n = 5;
    int recursive3Result = recursive3(n);
    printf("recursive3(%d) 답 : %d\n\n", n, recursive3Result);

    printf("Chapter2 11번 문제 답\n");
    asterisk(5); // 7개. asterisk(5)에서 1개 asterisk(2) 2개에서 각각 1개씩, asterisk(1) 4개에서 각각 1개씩

    printf("Chapter2 12번 문제 답\n");
    // unknown;

    return NULL;
}