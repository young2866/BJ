#include <iostream>

using namespace std;

int main()
{
	int N;

	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &N);
		sum += N;
	}

	printf("%d\n", sum);

	return 0;
}