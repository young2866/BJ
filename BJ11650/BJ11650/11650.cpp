#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> v;


int main()
{
	int T;

	scanf("%d", &T);

	v.resize(T);

	for (int i = 0; i < T; i++)
	{
		cin >> v[i].first >> v[i].second;
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < T; i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}
	return 0;
}