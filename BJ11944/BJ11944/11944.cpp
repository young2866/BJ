#include <bits/stdc++.h>

using namespace std;

int main()
{
	string N;
	int M;
	int j = 0;
	cin >> N >> M;

	int a = N.length();
	int b = atoi(N.c_str());
	if (a*b < M)
	{
		for (int i = 0; i < b; i++)
		{
			cout << N;
		}
		printf("\n");
	}
	else
	{
		for (int i = 0; i < M; i++)
		{
			cout << N[j];
			j++;
			if (j == a)
				j = 0;
		}
		printf("\n");
	}
	return 0;
}