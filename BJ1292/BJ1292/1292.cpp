#include <iostream>

using namespace std;

int main()
{
	int A, B;
	int N = 0;
	int temp = 0;
	int cnt = 0;

	cin >> A >> B;

	int C = B - A + 1;
	for (int i = 0; i < 46; i++)
	{
		
		temp += i;

		while (A <= temp && cnt != C && A != B+1)
		{
			N += i;
			A++;
			cnt++;
		}
		

	}
	printf("%d\n", N);

	return 0;
}