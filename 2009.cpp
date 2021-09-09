//
// Created by kmou424 on 2021/9/6.
//

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    int num, n;
    double res = 0, last_num = 0;
    while (cin >> num >> n) {
        res += (double)num;
        last_num = (double)num;
        for (int i = 0; i < n - 1; i++) {
            res += (double)sqrt(last_num);
            last_num = (double)sqrt(last_num);
        }
        cout << setprecision(2) << fixed << res << endl;
        res = 0;
    }
    return 0;
}