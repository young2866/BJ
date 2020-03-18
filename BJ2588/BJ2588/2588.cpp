#include <stdio.h>

int main()
{
	int x, y;// (1)과 (2) 선언
	int Ans[4]; // 출력이 될 배열 선언

	scanf("%d %d", &x, &y); // (1)과 (2) 입력받음

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

