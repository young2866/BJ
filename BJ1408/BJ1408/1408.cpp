#include <iostream>
#include <string>

using namespace std;

int main()
{
	int h[3] = { 0,0,0 }, m[3] = { 0,0,0 }, s[3] = { 0,0,0 };
	int temp1, temp2;
	int temp;
	scanf("%2d:%2d:%2d", &h[0], &m[0], &s[0]);
	scanf("%2d:%2d:%2d", &h[1], &m[1], &s[1]);

	temp1 = h[0] * 3600 + m[0] * 60 + s[0];
	temp2 = h[1] * 3600 + m[1] * 60 + s[1];

	if (temp1 > temp2)
	{
		temp = 86400 -(temp1 - temp2);
		if (temp >= 3600)
		{
			h[2] = temp / 3600;
			temp %= 3600;
		}
		if (temp >= 60)
		{
			m[2] = temp / 60;
			temp %= 60;
		}
		s[2] = temp;
	}
	else
	{
		temp = temp2 - temp1;
		if (temp >= 3600)
		{
			h[2] = temp / 3600;
			temp %= 3600;
		}
		if (temp >= 60)
		{
			m[2] = temp / 60;
			temp %= 60;
		}
		s[2] = temp;
	}

	printf("%02d:%02d:%02d\n", h[2], m[2], s[2]);

	return 0;
}