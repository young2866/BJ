#include <iostream>

using namespace std;

int main()
{
	int Max = 0;
	int N;
	int NN;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &N);
		if (Max < N)
		{
			Max = N;
			NN = i + 1;
		}
	}
	printf("%d\n%d\n", Max, NN);

	return 0;
}