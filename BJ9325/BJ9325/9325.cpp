#include <iostream>

using namespace std;

int main()
{
	int N;
	int S;
	int NO;
	int Q, P;
	int ANS = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> S;
		ANS += S;
		cin >> NO;
		for (int x = 0; x < NO; x++)
		{
			cin >> Q >> P;
			ANS = ANS + Q * P;
		}
		printf("%d\n", ANS);
		ANS = 0;
	}

	return 0;
} 