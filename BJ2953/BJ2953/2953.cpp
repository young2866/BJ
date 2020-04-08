#include <iostream>

using namespace std;

int main()
{
	int N;
	int P, G = 0;
	int MAX = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> N;
			G += N;
			if (MAX < G)
			{
				MAX = G;
				P = i + 1;
			}
		}
		G = 0;
	}

	printf("%d %d\n", P, MAX);
	return 0;
}