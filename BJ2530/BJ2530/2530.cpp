#include <stdio.h>

int main()
{
	int A, B, C, D;
	int temp1,temp2;
	scanf("%d %d %d %d", &A, &B, &C, &D);

	for (int i = 0; i < D; i++)
	{
		C++;
		if (C == 60)
		{
			B++;
			C = 0;
			if (B == 60)
			{
				A++;
				B = 0;
				if (A == 24)
				{
					A = 0;
				}
			}
		}
	}
	printf("%d %d %d\n", A, B, C);

	return 0;
}