#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    stack<int> s;
    int cnt = 1;
    string ans;
    while (n--) {
        int t;
        cin >> t;
        while (cnt <= t) {
            s.push(cnt++);
            ans += "+\n";
        }
        if (s.top() != t) {
            cout << "NO";
            return 0;
        }
        s.pop();
        ans += "-\n";
    }
    cout << ans;
}