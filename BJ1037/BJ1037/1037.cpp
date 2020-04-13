#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	int N[50];
	long long int ANS;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> N[i];
	}
	sort(N, N + T);
	ANS = N[T - 1] * N[0];

	cout << ANS << "\n";

	return 0;
}