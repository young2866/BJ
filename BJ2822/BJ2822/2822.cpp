#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, int>> v;
vector<int> index;
int main()
{
	int N;
	int SUM = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> N;
		v.push_back(make_pair(N, i));
	}

	sort(v.begin(), v.end(), greater < pair<int,int>>());

	for (int i = 0; i < 5; i++)
	{
		SUM += v[i].first;
		index.push_back(v[i].second);
	}
	cout << SUM << "\n";
	sort(index.begin(), index.end());

	for (int i = 0; i < 5; i++)
	{
		cout << index[i] + 1 << " ";
	}

	cout << "\n";

	return 0;
}