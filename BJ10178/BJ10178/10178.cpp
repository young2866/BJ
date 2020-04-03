#include <iostream>

using namespace std;

int main()
{
	int N;
	int Candy, Bro;
	int temp1, temp2;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &Candy, &Bro);
		temp1 = Candy / Bro;
		temp2 = Candy % Bro;
		printf("You get %d piece(s) and your dad gets %d piece(s).\n", temp1, temp2);
	}

	return 0;
}