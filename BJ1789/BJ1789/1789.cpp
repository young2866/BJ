#include <iostream>

using namespace std;

int main()
{
	unsigned int S;
	int count = 0;
	unsigned int temp = 0;
	unsigned int temp2;

	scanf("%d", &S);

	temp2 = S;

	for (int i = 1; temp2 != 0; i++)
	{
		if (temp2 - i <= temp || temp2 - i == i)
		{
			count++;
			temp2 = 0;
		}
		else
		{
			count++;
			temp2 -= i;
			temp = i;
		}
	}

	printf("%d\n", count);

	return 0;
}