#include <stdio.h>
using namespace std;

int main()
{
	int T;
	char P[4];
	int temp = 0;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		do {
		
		} while (getc(stdin) == ' ');
		for (int x = 1; x < temp; x++)
		{
			if (P[x] == 64)
				P[0] *= 3;
			if (P[x] == 37)
				P[0] += 5;
			if (P[x] == 35)
				P[0] -= 7;
		}
		printf("%.2f", P[0]);
		temp = 0;
	}

	return 0;
}

// @ 64 % 37  #35