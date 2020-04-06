#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	int SUM = 0;
	int MIN = 0;

	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &N);
		if (N % 2 == 1)
		{
			SUM += N;
			if (MIN == 0)
				MIN = N;
			MIN = min(MIN, N);
		}
	}

	if (SUM != 0)
		printf("%d\n%d", SUM, MIN);
	else
		printf("-1");


	return 0;
}