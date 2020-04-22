#include<bits/stdc++.h>

using namespace std;

struct Point
{
	int x;
	int y;
};
vector<Point> v;

bool comy(Point& a, Point& b)
{
	if (a.y < b.y)
		return true;
	else if (a.y == b.y)
		if (a.x < b.x)
			return true;
	return false;
}
int main()
{
	int N;

	cin >> N;

	v.resize(N);

	for (int i = 0; i < N; i++)
	{
		cin >> v[i].x >> v[i].y;
	}

	sort(v.begin(), v.end(), comy);

	for (int i = 0; i < N; i++)
	{
		cout << v[i].x << " " << v[i].y << "\n";
	}

	return 0;
}