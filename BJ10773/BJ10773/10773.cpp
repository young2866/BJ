#include <bits/stdc++.h>

using namespace std;

vector<int> v;
int main()
{
	int K;
	int N;
	long long ANS = 0;
	cin >> K;

	for (int i = 0; i < K; i++)
	{
		cin >> N;
		if (N != 0)
		{
			v.push_back(N);
			ANS += N;
		}
		else
		{
			ANS -= v.back();
			v.pop_back();
		}

	}
	printf("%d\n", ANS);
	return 0;
}