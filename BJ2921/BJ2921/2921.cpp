#include <iostream>

using namespace std;

int main()
{
	int N;
	int ANS[1001] = { 0, };

	scanf("%d", &N);

	ANS[0] = 0;

	for (int i = 1; i <= N; i++)
	{
		if (ANS[i - 1] != 0)
		{
			for (int x = i; x <= 2 * i; x++)
			{
				ANS[i] += x;
			}
			ANS[i] += ANS[i - 1];
		}
		else
			for (int x = i; x <= 2 * i; x++)
			{
				ANS[i] += x;
			}
	}

	printf("%d\n", ANS[N]);

	return 0;
}