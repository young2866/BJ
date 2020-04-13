#include <bits/stdc++.h>

using namespace std;

vector<int> H;
vector<int> S;
int main()
{
	int N,ANS;
	for (int i = 0; i < 3; i++)
	{
		cin >> N;
		H.push_back(N);
	}
	for (int i = 0; i < 2; i++)
	{
		cin >> N;
		S.push_back(N);
	}

	sort(H.begin(), H.end());
	sort(S.begin(), S.end());

	ANS = H[0] + S[0] - 50;

	cout << ANS << "\n";

	return 0;
}