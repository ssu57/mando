#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main()
    {
        int arr[5][5] = { 0 };//5*5, 0���� �ʱ�ȭ
        int i, j, k = 0;
        for (i = 0; i < 5; i++) {//0���� 4���� �ݺ�
            for (j = 0; j < 5; j++) {//0���� 4���� �ݺ�
                k = k + 1;//1�� ����
                    arr[i][j] = k;//i��j�� ��ġ�� k �ֱ�
                printf("%3d", k);

            }
            printf("\n");
        }
        return 0;
    }