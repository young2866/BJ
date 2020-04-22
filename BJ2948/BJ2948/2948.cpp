#include<iostream>
using namespace std;

int main()
{
    int D, M, sum = 0;
    int Date[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    string Cal[7] = {  "Wednesday", "Thursday", "Friday", "Saturday","Sunday", "Monday", "Tuesday"};

    cin >> D >> M;

    for (int i = 1; i < M; i++)
    {
        sum += Date[i - 1];
    }

    sum += D;
    sum %= 7;
    cout << Cal[sum];

    return 0;
}