#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	int N, P;
	int C;
	char A[21], B[21];
	int AP = 0, BP = 0;

	scanf("%d", &N);
	for (int x = 0; x < N; x++) 
	{
		scanf("%d", &P);
		for (int i = 0; i < P; i++)
		{
			if (AP == 0)
			{
				cin >> AP >> A;

			}
			else
			{
				cin.ignore();
				cin >> BP >> B;

			}
			if (AP < BP)
			{
				AP = BP;
				strcpy(A, B);
			}
		}
		for (int y = 0; y < strlen(A); y++)
		{
			printf("%c", A[y]);
			AP = 0;
			BP = 0;
		}
		printf("\n");
	}

	return 0;
}