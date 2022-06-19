// p.54 순환적인 피보나치 수열 계산 프로그램
int fib(int n)
{
    if (n==0) return 0;
    if (n==1) return 1;
    return (fib(n-1) + fib(n-2));
}
/* 위 함수는 단순하지만 매우 비효율적.. fib(6)을 넣었을 경우 fib(3)은 3번 계산됨. 숫자가 커질수록 점점 심해짐 => 시간복잡도 O(2^n) */

// 반복적인 피보나치 수열 계산 프로그램
int fib_iter(int n)
{
    if (n==0) return 0;
    if (n==1) return 1;

    int pp = 0;
    int p = 1;
    int result = 0;

    for (int i = 2; i <= n; i++){
        result = pp + p;
        pp = p;
        p = result;
    }
    return result;
}

/*
Quiz
01. 3번
02. O(n)
03. 한번 돌아갈 때마다 2배로 분화하기 때문에 2의 거듭제곱
*/

