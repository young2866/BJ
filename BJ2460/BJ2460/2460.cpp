#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, T;
	int P = 0;
	int MAX = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d %d", &N, &T);
		P += T;
		P -= N;
		MAX = max(P, MAX);
	}

	printf("%d\n", MAX);

	return 0;
}