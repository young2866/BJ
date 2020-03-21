#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int M, N;
	int count = 0;
	int Min = 0;

	scanf("%d %d", &M, &N);

	for (int i = 1; i * i <= N; i++)
	{
		if (M <= i * i && i*i <= N)
		{
			count += (i * i);
			if (Min == 0)
				Min = i * i;
		}
		
	}
	if (count == 0)
		printf("-1\n");
	else
		printf("%d\n%d\n", count, Min);

	return 0;
}