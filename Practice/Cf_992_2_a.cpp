#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool flag = false;
        for (int i = 0; i < n; i++) {
            flag = true;
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    continue;
                }

                int absval = abs(a[i] - a[j]);

                if (absval % k == 0) {
                    flag = false;
                    break;
                }
            }
            if (flag == true) {
                cout << "yes";
                break;
            }
        }
        if (flag == false) {
            cout << "no";
        }
    }
    cout << endl;
}