#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
int main()
{
	int N;
	int T;
	 
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> T;
		v.push_back(T);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++)
	{
		cout << v[i] << "\n";
	}

	return 0;
}