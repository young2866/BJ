#include <bits/stdc++.h>

using namespace std;

vector<int> v;

int main()
{
	int N;
	int A = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> N;
		v.push_back(N);
		A += N;
	}
	A /= 5;
	sort(v.begin(), v.end());

	cout << A << "\n" << v[2];

	return 0;
}