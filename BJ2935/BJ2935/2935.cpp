#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string A, B;
	char C;
	int temp;

	getline(cin, A);
	scanf("%c", &C);
	cin.ignore();
	getline(cin, B);
	

	switch (C)
	{
		case '+':
		
			if (A.size() > B.size()) {
				for (int i = 0; i < A.size() - B.size(); i++)
				{
					printf("%c", A[i]);
				}
				for (int i = 0; i < B.size(); i++)
				{
					printf("%c", B[i]);
				}
			}
			else if (A.size() == B.size())
			{
				printf("2");
				for (int i = 1; i < A.size(); i++)
				{
					printf("%c", A[i]);
				}
			}
			else
			{
				for (int i = 0; i < B.size() - A.size(); i++)
				{
					printf("%c", B[i]);
				}
				for (int i = 0; i < A.size(); i++)
				{
					printf("%c", A[i]);
				}
			}
			break;
		case '*':
		{
			printf("1");
			temp = (A.size() - 1) + (B.size() - 1);
			for (int i = 0; i < temp; i++)
				printf("0");
		}
			break;
	}
	return 0;
}