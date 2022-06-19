// 2.4 반복적인 거듭제곱 계산 프로그램
double slow_power(double x, int n)
{
    int i;
    double result = 1.0;
    for( i=0; i<n; i++ )
        result = result * x;
    return(result);
}

// x^n 구하는 함수 알고리즘 작성
/* 
알고리즘 2.1 순환적인 거듭제곱 계산

power(x, n):
    if n == 0
        then return 1;
    
    else if n이 짝수
        then return power(x^2, n/2);   --------> (x^2)^(n/2)
    
    else if n이 홀수
        then return x*power(x^2, (n-1)/2);  --------> x * (x^2)^((n-1)/2) --------> x * x^(n-1)

*/

// 2.5 순환적인 거듭제곱 계산 프로그램
double power(double x, int n)
{
    if ( n==0 ) return 1;
    else if ( (n%2)==0 )
        return power(x*x, n/2);
    else return power(x*x, (n-1)/2);

    // 순환은 반복할 때마다 크기가 작아지기 때문에 반복보다 시간이 줄어들게 된다. n = 2^k 따라서 k = logn. 시간복잡도는 O(logn)
}



