#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N,cnt;
	int arr[10];
	int ANS = 0;
	int temp = 1, temp2 = 10;

	cin >> N;

	for (int i = 0; i < 10; i++)
	{
		if (N/temp != 0)
		{
			arr[i] = (N % temp2) / temp;
			cnt = i + 1;
			temp *= 10;
			temp2 *= 10;
		}
		else
			break;
	}

	sort(arr, arr + cnt);
	for (int i = 0; i < cnt; i++)
	{
		if (i == 0)
			temp = 1;
		ANS += arr[i] * temp;
		temp *= 10;
	}
	cout << ANS;

	return 0;
}