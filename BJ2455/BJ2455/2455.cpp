#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N,T;
	int MAX = 0;
	int P = 0;

	for (int i = 0; i < 4; i++)
	{
		scanf("%d %d", &N, &T);
		P += T - N;
		MAX = max(MAX, P);
	}

	printf("%d", MAX);

	return 0;
}