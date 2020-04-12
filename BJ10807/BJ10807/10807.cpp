#include <iostream>

using namespace std;

int main()
{
	int N;
	int V;
	int arr[100];
	int cnt = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	cin >> V;
	for (int i = 0; i < N; i++)
	{
		if (V == arr[i])
			cnt++;
	}
	printf("%d\n", cnt);


	return 0;
}