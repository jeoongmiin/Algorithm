#include <bits/stdc++.h>
using namespace std;
int N;
int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}