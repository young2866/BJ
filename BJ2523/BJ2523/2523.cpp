#include <iostream>

using namespace std;

int main()
{
	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int x = 0; x <= i; x++)
			printf("*");

		printf("\n");
	}
	for (int i = N; i > 1; i--)
	{
		for (int x = 1; x < i; x++)
			printf("*");

		printf("\n");
	}

	return 0;
}