#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int N;
	char nameM[15];
	char name_temp[15];
	char namem[15];
	int y, m, d;
	int tempM,temp,tempm;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		cin >> name_temp >> d >> m >> y;
		temp = d + m * 30 + y * 365;
		if (i == 0)
		{
			tempM = temp;
			tempm = temp;
			strcpy(nameM, name_temp);
			strcpy(namem, name_temp);
		}
		else if (temp < tempM)
		{
			tempM = temp;
			strcpy(nameM, name_temp);
		}
		else if (temp > tempm)
		{
			tempm = temp;
			strcpy(namem, name_temp);
		}
		cin.ignore();
	}

	cout << namem << endl << nameM << endl;
	
	return 0;
}