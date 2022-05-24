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