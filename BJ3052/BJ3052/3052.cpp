#include <iostream>

using namespace std;

int main()
{
	int N[42] = { 0, };
	int C = 0;
	int A;

	for (int i = 0; i < 10; i++)
	{
		cin >> A;
		if (N[A % 42] == 0)
		{
			C++;
			N[A % 42]++;
		}
	}

	printf("%d\n", C);

	return 0;
}