#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) cout << " ";
        for (int j = 0; j < n - i; j++) cout << "*";
        cout << "\n";
    }
}