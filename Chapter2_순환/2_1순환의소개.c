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
    for (i = 1; i <= n; i++)
        result = result * i;
    return(result);
}

/* 순환 알고리즘의 성능은 for문과 같이 O(n)이다. 다만 순환호출은 시간복잡도는 같지만 여분의 기억공간이 더 필요하고 함수를 호출하기 위한 매개변수들을 스택에
   저장하는 것과 같은 사전작업이 필요하기 때문에 수행시간도 더 걸린다. 
   이해하기는 쉽지만 수행시간관 기억공간에 비효율적인 경우가 많다.
*/

// Quiz sub(10)의 경우 어떤 값이 반환되는 가?
int sub(int n)
{
    if (n<0) return 0;
    return n + sub(n-3);
}
// 10 + 7 + 4 + 3 + 0 = 24
// 반복함수로 작성
int sub(int n)
{
    int answer = 0;
    for(int i=n ; i>n; i-=3) 
        answer += i;
    return answer;

}