#define MAX_ELEMENTS 100
int scores[MAX_ELEMENTS]; // 자료구조

int get_max_score(int n) // 학생의 숫자는 n
{
    int i, largest;
    largest = scores[0]; // 알고리즘
    for (i = 1; i<n; i++) {
        if (scores[i] > largest) {
            largest = scores[i];
        }
    }
    return largest; 
}


// 배열 scores가 자료구조에 해당함.
// 변수 largest를 첫번째 요소로 초기화하고 나머지 요소들과 순차적으로 비교하는 것이 알고리즘!