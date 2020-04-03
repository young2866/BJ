#include <iostream>

using namespace std;

int main()
{
	int T;
	int temp1, temp2;

	scanf("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		scanf("%d %d", &temp1, &temp2);
		printf("Case %d: %d\n", i, temp1 + temp2);
	}

	return 0;
}