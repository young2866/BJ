#include <bits/stdc++.h>

using namespace std;


int main()
{
	string X, Y;
	cin >> X >> Y;
	
	int temp1; 
	int temp2;
	int temp;

	string ANS;
	int ANS1;

	reverse(X.begin(), X.end());
	reverse(Y.begin(), Y.end());

	temp1 = atoi(X.c_str());
	temp2 = atoi(Y.c_str());

	temp = temp1 + temp2;

	ANS = to_string(temp);
	reverse(ANS.begin(), ANS.end());

	ANS1 = atoi(ANS.c_str());

	cout << ANS1 << "\n";

	return 0;
}