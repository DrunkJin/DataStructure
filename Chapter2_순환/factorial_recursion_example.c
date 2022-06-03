/* 순환적인 팩토리얼 계산
    1보다 작으면 1
    n = 5 인 경우 5 * 4! -> 5!
*/
int factorial(int n)
{
    if( n<= 1) return 1;
    else return ( n * factorial( n-1));
}

/* 출력문 추가 순환적인 팩토리얼 계산 */
int factorial(int n)
{
    printf("factorial(%d)\n", n);
    if ( n <= 1) return (1);
    else return ( n * factorial(n-1) );
}

/* 반복적인 팩토리얼 계산 
    1,2,3,4,5,6,7,8 늘어나면서 곱하기
*/
int factorial_iter(int n)
{
    int i, result = 1;
    for (i = 1; i <= n; i++);
        result = result * i;
    return(result);
}

/* Quiz 
01. sub(10) 호출시 어떤 값이 반환되는가? */
int sub(int n)
{
    if ( n < 0 ) return 0;
    return n + sub( n-3 );
}

// 10 + 7 + 4 + 1 = 22가 나온다.

// 02. 반복함수로 다시 작성하시오.

int sub_iter(int n)
{   
    int ans = 0;
    for (int i = n; i > 0; i -= 3)
    {
        ans += i
    }
    return ans;
}