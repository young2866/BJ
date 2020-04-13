#include <bits/stdc++.h>

using namespace std;

vector<int> v;
int main()
{
	int N;
	int SUM = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> N;
		v.push_back(N);
		SUM += N;
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (j != i)
			{
				if (SUM - v[i] - v[j] == 100)
				{
					v[i] = 0;
					v[j] = 0;
					i = 9;
					j = 9;
				}
			}
		}
	}

	for (int i = 0; i < 9; i++)
	{
		if (v[i] != 0)
			cout << v[i] << "\n";
	}

	return 0;
}