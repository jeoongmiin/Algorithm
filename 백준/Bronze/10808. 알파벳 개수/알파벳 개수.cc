#include <bits/stdc++.h>
using namespace std;
int arr[26];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string s;
    cin >> s;
    for (auto a : s) arr[a - 'a']++;
    for (int i = 0; i < 26; i++) cout << arr[i] << " ";
}