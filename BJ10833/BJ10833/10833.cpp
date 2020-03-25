#include <iostream>

using namespace std;

int main()
{
	int N;
	int ST, AN;
	int SUM = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &ST, &AN);
		SUM += (AN % ST);
	}

	printf("%d\n", SUM);

	return 0;
}