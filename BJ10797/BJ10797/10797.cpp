#include <iostream>

using namespace std;

int main()
{
	int N;
	int C;
	int SUM = 0;

	scanf("%d", &N);

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &C);
		if (C % 10 == N)
			SUM++;
	}

	printf("%d\n", SUM);

	return 0;
}