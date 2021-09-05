//
// Created by kmou424 on 2021/9/6.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    int res1 = 0, res2 = 0, res3 = 0;
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            double num;
            cin >> num;
            if (num < (double)0) res1++;
            else if (num == (double)0) res2++;
            else if (num > (double)0) res3++;
        }
        if (n != 0) cout << res1 << " " << res2 << " " << res3 << endl;
        res1 = res2 = res3 = 0;
    }
    return 0;
}