#include <iostream>
using namespace std;

int main()
{
	int N;
	long long int max = 0;
	int temp;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &temp);

		if (i == 0)
			max = max + temp;
		else
		max = max + temp - 1;

	}

	cout << max << endl;

	return 0;
}