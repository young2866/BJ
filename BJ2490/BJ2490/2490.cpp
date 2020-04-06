#include <iostream>

using namespace std;

int main()
{
	int N;
	int SUM = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int x = 0; x < 4; x++)
		{
			scanf("%d", &N);
			SUM += N;
		}
		switch (SUM)
		{
			case 0:
				printf("D\n");
			break;
			case 1:
				printf("C\n");
			break;
			case 2:
				printf("B\n");
				break;
			case 3:
				printf("A\n");
				break;
			case 4:
				printf("E\n");
				break;
		}
		SUM = 0;
	}

	return 0;
}