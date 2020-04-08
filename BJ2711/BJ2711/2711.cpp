#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T,N;
	string str1;
	cin >> T;

	for (int i = 0; i < T; i++)
	{	
		cin >> N >> str1;
		str1.replace(N-1, 1, "");
		cout << str1 << endl;
		cin.ignore();
	}

	return 0;
}