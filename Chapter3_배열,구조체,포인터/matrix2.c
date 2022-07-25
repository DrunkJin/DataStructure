// 두번째 전치행렬 알고리즘
// 새로운 전치행렬을 만들 때, 낮은 행부터 높은 행까지 순서대로 저장되어야함! -> 0열에있는 요소를 모두 찾아 전치 행렬의 0행으로 저장하고 다음 다음 이어가기

#include <stdio.h>
#include <stdlib.h>

#define MAX_TERMS 100
typedef struct 
{
    int row;
    int col;
    int value;
} element;

typedef struct SparseMatrix {
    element data[MAX_TERMS];
    int rows;       // 행의 개수
    int cols;       // 열의 개수
    int terms;      // 항의 개수
} SparseMatrix;

SparseMatrix matrix_transpose2(SparseMatrix a)
{
    SparseMatrix b;

    int bindex;     // 행렬 b에서 현재 저장 위치
    b.rows = a.cols;
    b.cols = a.rows;
    b.terms = a.terms;

    if (a.terms>0) {
        bindex = 0;
        for (int c = 0; c<a.cols; c++) {
            for (int i=0; i<a.terms; i++) {
                if (a.data[i].col == c) {
                    b.data[bindex].row = a.data[i].col;
                    b.data[bindex].col = a.data[i].row;
                    b.data[bindex].value = a.data[i].value;
                    bindex++;
                }
            }
        }
    }
    return b;
}

void matrix_print(SparseMatrix a)
{
    printf("==========================\n");
    for (int i=0; i<a.terms; i++) {
        printf("(%d, %d, %d) \n", a.data[i].row, a.data[i].col, a.data[i].value);
    }
    printf("==========================\n");
}

int main(void)
{
    SparseMatrix m = {
        { {0,3,7}, {1,0,9}, {1,5,8}, {3,0,6}, {3,1,5}, {4,5,1}, {5,2,2}},
        6,
        6,
        7
    };
    SparseMatrix result;

    result = matrix_transpose2(m);
    matrix_print(result);
    return 0;
}