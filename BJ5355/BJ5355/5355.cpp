#include <iostream>
#include <string>
using namespace std;

int main()
{
	float T,N;
	string P;
	int temp = 0;
	scanf("%f", &T);
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		getline(cin, P);
		for (int x = 0; x < P.size(); x++)
		{
			switch (P[x])
			{
			case '@':
				N *= 3;
				break;
			case '%':
				N += 5;
				break;
			case '#':
				N -= 7;
				break;
			}
		}
		printf("%.2f\n", N);
	}

	return 0;
}

// @ 64 % 37  #35