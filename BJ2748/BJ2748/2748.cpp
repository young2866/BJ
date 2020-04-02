#include <iostream>

using namespace std;

int main()
{
	int N;
	unsigned long long int F[91];
	
	scanf("%d", &N);

	F[0] = 0;
	F[1] = 1;

	for (int i = 2; i <= N; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
	}

	printf("%lld\n", F[N]);

	return 0;
}