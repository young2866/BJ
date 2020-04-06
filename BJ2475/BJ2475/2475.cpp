#include <iostream>

using namespace std;

int main()
{
	int N;
	int SUM = 0;
	int ANS;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &N);
		SUM += N * N;
	}

	ANS = SUM % 10;

	printf("%d", ANS);
	
	return 0;
}