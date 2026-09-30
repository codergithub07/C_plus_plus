#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    typedef long long ll;
    typedef vector<int> vi;
    typedef pair<int, int> pi;

    ll a = 12345;
    ll b = 67890;
    cout << a * b << '\n';

    vi v = {1, 2, 3};
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << '\n';

    pi p = ((1, 2), (3, 4), (5, 6));

    return 0;
}