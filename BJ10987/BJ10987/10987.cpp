#include <bits/stdc++.h>

using namespace std;

int moum(string N)
{
	int ANS = 0;
	for (int i = 0; i < N.length(); i++)
	{
		if (N[i] == 'a' || N[i] == 'e' || N[i] == 'i' || N[i] == 'o' || N[i] == 'u')
			ANS++;
	}

	return ANS;
}

int main()
{
	string N;

	cin >> N;

	cout << moum(N) << "\n";

	return 0;
}