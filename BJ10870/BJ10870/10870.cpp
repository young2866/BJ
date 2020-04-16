#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	int F[21];
	F[0] = 0;
	F[1] = 1;
	
	cin >> N;

	for (int i = 2; i <= 20; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
	}

	printf("%d\n", F[N]);

	return 0;
}