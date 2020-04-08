#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
	int A, B;
	int temp1, temp2;

	scanf("%d %d", &A, &B);

	temp1 = (A / 100) + ((A % 10) * 100) + (A % 100 - (A % 10));
	temp2 = (B / 100) + ((B % 10) * 100) + (B % 100 - (B % 10));

	printf("%d\n", max(temp1, temp2));

	return 0;
}