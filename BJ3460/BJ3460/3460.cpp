#include <iostream>


using namespace std;


int main()
{
	int T;
	int N;
	int B[101] = { 0, };
	int temp = 0;

	cin >> T;

	
	for (int i = 0; i < T; i++)
	{
		temp = 0;
		cin >> N;
		if (N == 1)
		{
			printf("0\n");
			continue;
		}
		while (N) {
			B[temp] = N % 2;
			N = N / 2;
			if (B[temp] == 1)
				printf("%d ", temp);
			if (N == 1)
			{
				B[++temp] = 1;
				printf("%d\n", temp);
				break;
			}
			temp++;
		}

	
	}


	return 0;
}