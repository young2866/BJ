#include <iostream>

using namespace std;

int main()
{
	int N;
	unsigned long long int arr[46];

	scanf("%d", &N);

	arr[0] = 0;
	arr[1] = 1;

	for (int i = 2; i < 46; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	printf("%d", arr[N]);

	return 0;
}