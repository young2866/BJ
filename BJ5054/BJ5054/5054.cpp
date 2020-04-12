#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	int N;
	int XI;
	int MIN=9999, MAX=0;
	int ANS;

	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		for (int x = 0; x < N; x++)
		{
			cin >> XI;
			MIN = min(MIN, XI);
			MAX = max(MAX, XI);
		}
		ANS = (MAX - MIN) * 2;
		printf("%d\n", ANS);
		MIN = 9999;
		MAX = 0;
	}

	return 0;
}