#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    clock_t start, stop;
    double duration;
    start = clock();  // 측정 시작 -> start변수에 시간 저장

    for (int i = 0; i < 1000000; i++);  // 알고리즘이 도는 시간이라고 가정. 여기서는 의미없는 반복 루프

    stop = clock();  // 측정 종료 -> stop변수에 루프가 끝나고 난 다음의 시간을 저장
    duration = (double)(stop - start) / CLOCKS_PER_SEC; // 초단위의 시간을 측정하기 위해 CLOCKS_PER_SEC로 나누어준다고 함
    printf("수행시간은 %f초입니다.\n", duration);
    
    return 0;
}