#include<bits/stdc++.h>

using namespace std;

vector<int> v;
int main()
{
	int N;
	int K;
	int M;
	int cnt = 0;

	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		cin >> M;
		v.push_back(M);
	}

	while (K)
	{
		if (v.back() > K)
			v.pop_back();
		else
		{
			K -= v.back();
			cnt++;
		}
	}

	printf("%d\n", cnt);


	return 0;
}