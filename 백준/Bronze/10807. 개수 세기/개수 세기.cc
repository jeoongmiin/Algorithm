#include <bits/stdc++.h>
using namespace std;
int n, v, cnt;
int arr[101];
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> v;
    for (int i = 0; i < n; i++) {
        if (arr[i] == v) cnt++;
    }
    cout << cnt;
}