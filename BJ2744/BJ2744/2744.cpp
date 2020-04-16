#include <bits/stdc++.h>

using namespace std;

int main() {
    char str[101];
    int n = 0, i = 0;

    scanf("%s", str);

    int check = strlen(str);

    for (i = 0; i < check; i++) {
        if ((str[i] >= 65) && (str[i] <= 90))
            str[i] += 32;

        else if ((str[i] >= 97) && (str[i] <= 129))
            str[i] -= 32;
    }
    printf("%s", str);
    return 0;
}
