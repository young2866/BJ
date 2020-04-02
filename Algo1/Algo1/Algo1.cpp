#include <iostream>
#include <vector>
using namespace std;

vector<int> seq;

int main() {
    //preprocess
    seq.push_back(1);
    seq.push_back(1);
    for (int i = 2; i < 45; ++i)
        seq.push_back(seq[i - 1] + seq[i - 2]);
    int n; scanf("%d", &n);
    int ans = 0;
    while (n) {
        if (n >= seq.back()) {
            n -= seq.back();
            seq.pop_back();
            ans += seq.back();
            seq.pop_back();
        }
        else
            seq.pop_back();
    }
    printf("%d", ans);
}