// 반복적인 거듭제곱 계산 프로그램
double slow_power(double x, int n)
{
    int i;
    double result = 1.0;
    for( i=0 ; i<n ; i++)
        result = result * x;
    return (result);
}

/* x^n 구하는 함수 알고리즘

power(x, n):
    if n==0
        then return 1;
    else if n이 짝수
        then return power(x^2, n/2);
    else if n이 홀수
        then return x*power(x^2, (n-1)/2)

처음엔 n승이었으나 n/2, n/4승으로 점점 크기가 줄어든다.
*/

// 순환적인 거듭제곱 계산 프로그램
double power(double x, int n)
{
    if (n==0) return 1;
    else if ( (n%2)==0 )
        return power(x*x, n/2);
    else return x*power(x*x, (n-1)/2);
}

// 같은 거듭제곱이라해도 slow_power는 n번의 계산이 필요하지만 power는 순환호출이 나타날수록 1/2으로 줄어들어버림. 
// 그래서 각각 시간복잡도가 O(n), O(logn)