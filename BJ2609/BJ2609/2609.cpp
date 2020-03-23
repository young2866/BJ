#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int A, B;
	int CDG = 1, CGB;

	scanf("%d %d", &A, &B);

	CGB = A * B;

	for (int i = 1; i <= max(A, B); i++)
	{
		if (A % i == 0 && B % i == 0)
		{
			CDG = i;
		}
	}
	if (CDG != A * B)
		CGB /= CDG;

	printf("%d\n%d", CDG, CGB);
	
	return 0;
}

