//
// Created by kmou424 on 2021/9/7.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int m, n;
    double res = 1;
    while (cin >> m) {
        for (int i = 0; i < m; i++) {
            cin >> n;
            for (int q = 1; q < n; q++) if (q % 2 == 0) res += (double) 1 / (q + 1); else res -= (double) 1 / (q + 1);
            cout << setprecision(2) << fixed << res << endl;
            res = 1;
        }
    }
    return 0;
}