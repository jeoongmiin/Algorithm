#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int arr[2][26], res;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> s1 >> s2;
    for (auto c : s1) arr[0][c - 'a']++;
    for (auto c : s2) arr[1][c - 'a']++;
    for (int i = 0; i < 26; i++) {
        res += abs(arr[0][i] - arr[1][i]);
    }
    cout << res;
}