#include<stdio.h>
int main()
{
	//�밢�� �迭
	int i, j;
	int test[10][10] = { 0, };
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; i++) {
			test[i][j] = 0;
			test[i][0] = i;
			test[0][j] = j;
			
		}
		if (i == j) {
			test[i][j] = i;//i�̵� j�̵� �������
		}
		printf("%d", test[i][j]);
	}

	return 0;
}
/*
#include<stdio.h>
int main()
{
	int narr[10] = { 1, 2, -1, -2, 1, 2, -1, -2, 1, 2 };
	int temp = 0;
	for (int i = 0; i < sizeof(narr) / sizeof(int); i++) {//40(narr�� ������)/4(int�� ������)
		temp += narr[i];
		printf("���=%d\n", temp);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int dec = 17;
	int biny[20] = {0,};
	int p = 0;
	for (;;) {//���ѷ���
		biny[p] = dec % 2;
		dec = dec / 2;
		p++;
		if (dec == 0)
			break;
	}
	for (int i = p - 1; i >= 0; i--)
		printf("%d", biny[i]);//10������ 2������

	return 0;
}

#include<stdio.h>
int main()
{
	//�Ǻ���ġ ����
	int a = 0;
	int b = 1;
	for (int i = 2; i <= 10; i++) {
		int c = a + b;
		printf("%d %d %d\n", a, b, c);
		a = b;
		b = c;
	}
	return 0;
}
*/