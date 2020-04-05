#include <iostream>
#include <string>

using namespace std;
int Sosu(int x)
{
	int count = 0;
	for (int i = 2; i <= x; i++)
	{
		if (x != 1)
		{
			if (x % i == 0) 
			{
				if (i != x)
					break;
				else
					count++;
			}
		}
	}
	return count;
}
int main()
{
	int N,temp;
	int arr[101];
	int count=0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		count += Sosu(arr[i]);
	}
	
	printf("%d\n", count);

	return 0;
}