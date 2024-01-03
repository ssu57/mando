#include<stdio.h>
int main() {
	int i, j;
	for (i = 2; i <= 100; i++) {
		for (j = 2; i % j != 0; j++);
		if (i == j)
			printf("%d\n", i);
	}
	return 0;
}//소수 구하기