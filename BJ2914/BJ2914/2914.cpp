#include <stdio.h>

int main()
{
	int A, B;
	int Ans;

	scanf("%d %d", &A, &B);
	
	Ans = A * (B - 1) + 1;

	printf("%d\n", Ans);

	return 0;
}