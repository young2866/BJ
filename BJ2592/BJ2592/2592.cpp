#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	int C[101] = { 0, };
	int MAX = 0, temp;
	int AVG = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &N);
		AVG += N / 10;
		C[N / 10] += 1;
	}
	for (int i = 1; i < 101; i++)
	{
		if (MAX < C[i])
		{
			MAX = C[i];
			temp = i*10;
		}
	}

	printf("%d\n%d", AVG, temp);

	return 0;
}