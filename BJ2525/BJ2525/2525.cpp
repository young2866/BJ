#include <stdio.h>

int main()
{
	int A, B, C;
	int temp;
	scanf("%d %d %d", &A, &B, &C);

	if (B + C >= 60)
	{
		temp = (B + C) / 60;
		B = B + C - temp * 60;
		A += temp;
	}
	else
		B += C;
	if (A >= 24)
	{
		A -= 24;
	}

	printf("%d %d\n", A, B);

	return 0;
}