#include <iostream>

using namespace std;

int main()
{
	int N;
	int temp1, temp2;

	scanf("%d", &N);
	temp2 = N;

	if (N == 1)
		return 0;
	else
		for (int i = 2; temp2 != 1; i++)
		{
			if (temp2 % i == 0)
			{
				printf("%d\n", i);
				temp2 /= i;
				i = 1;
			}
		}

	return 0;
} 