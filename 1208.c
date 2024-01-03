#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main()
    {
        int arr[5][5] = { 0 };//5*5, 0으로 초기화
        int i, j, k = 0;
        for (i = 0; i < 5; i++) {//0부터 4까지 반복
            for (j = 0; j < 5; j++) {//0부터 4까지 반복
                k = k + 1;//1씩 증가
                    arr[i][j] = k;//i행j행 위치에 k 넣기
                printf("%3d", k);

            }
            printf("\n");
        }
        return 0;
    }