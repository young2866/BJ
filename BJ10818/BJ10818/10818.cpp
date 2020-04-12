#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	int I;
	int MAX = 0 , MIN = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> I;
		if (i == 0)
		{
			MAX = I;
			MIN = I;
		}
		else 
		{
			MAX = max(MAX, I);
			MIN = min(MIN, I);
		}
	}
	printf("%d %d\n", MIN, MAX);

	return 0;
}