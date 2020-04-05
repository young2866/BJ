#include <iostream>

using namespace std;

int Sosu(int x)
{
	if (x != 1)
		for (int i = 2; i <= x; i++)
		{
			if (x % i == 0)
			{
				if (i == x)
					return x;
				else
				{
					return 0;
					break;
				}
			}
		}
	else
		return 0;
}

int main()
{
	int M, N;

	int Min=0, Sum = 0;

	scanf("%d", &M);
	scanf("%d", &N);

	for (int i = M; i <= N; i++)
	{
		Sum += Sosu(i);
		if (Sum != 0 && Min == 0)
			Min += Sosu(i);
	}
	if (Sum != 0)
		printf("%d\n%d", Sum, Min);
	else
		printf("-1\n");
	return 0;
}