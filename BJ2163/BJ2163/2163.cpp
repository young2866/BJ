#include <stdio.h>

int main()
{
	int N, M;
	int Ans;// 정답 선언

	scanf("%d %d", &N, &M);

	Ans = (N - 1) +(N*( M - 1));

	printf("%d", Ans);
	return 0;
}