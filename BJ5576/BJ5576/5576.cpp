#include <bits/stdc++.h>

using namespace std;

vector<int> W;
vector<int> K;
int main()
{
	int N;
	int SUMW = 0;
	int SUMK = 0;
	for (int i = 0; i < 20; i++)
	{
		cin >> N;
		if (i < 10)
			W.push_back(N);
		else
			K.push_back(N);
	}
	sort(W.begin(), W.end());
	sort(K.begin(), K.end());

	for (int i = 9; i > 6; i--)
	{
		SUMW += W[i];
		SUMK += K[i];
	}

	printf("%d %d", SUMW, SUMK);

	return 0;
}