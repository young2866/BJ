#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
int main()
{
	int N;
	for (int i = 0; i < 3; i++)
	{
		cin >> N;
		v.push_back(N);
	}

	sort(v.begin(), v.end());

	printf("%d %d %d", v[0], v[1], v[2]);

	return 0;
}