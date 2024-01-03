#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int i, j, k = 0;
	int t_arr[4][5] = { 0, };
	int max=0, min=101;

	srand(time(NULL));
	for (i = 0; i < 4; i++) {
		for (k = 0; k <= 2; k++)
			t_arr[i][k] += 1 + rand() % 100;
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			t_arr[i][3] += t_arr[i][j];
	}
	for (i = 0; i < 4; i++) {
		t_arr[i][4] = t_arr[i][3] / 3;
	}
	for (i = 0; i < 4; i++) {
		if (max < t_arr[i][4])
			max = t_arr[i][4];
		if (min > t_arr[i][4])
			min = t_arr[i][4];
	}
	printf("최대값=%d", max);
	printf("최솟값=%d", min);
}