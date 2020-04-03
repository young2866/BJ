#include <iostream>

using namespace std;

int main()
{
	int T;
	int V, E;
	
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &V, &E);

		printf("%d\n", 2 - V + E);
	}

	return 0;
}