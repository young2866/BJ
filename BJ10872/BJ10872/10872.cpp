#include <iostream>

using namespace std;

int main()
{
	int N;
	int temp = 1;

	scanf("%d", &N);
	if (N != 0)
	{
		for (int i = 1; i <= N; i++)
		{
			temp *= i;
		}
		printf("%d", temp);
	}
	else
		printf("1\n");
	
	

	return 0;
}