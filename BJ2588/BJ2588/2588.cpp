#include <stdio.h>

int main()
{
	int x, y;// (1)�� (2) ����
	int Ans[4]; // ����� �� �迭 ����

	scanf("%d %d", &x, &y); // (1)�� (2) �Է¹���

	Ans[0] = x * ((y % 100) % 10);
	Ans[1] = x * ((y % 100) / 10);
	Ans[2] = x * (y / 100);
	Ans[3] = x * y;

	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", Ans[i]);
	}

	return 0;
}

