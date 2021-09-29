//
// Created by kmou424 on 2021/9/29.
//

// 不需要注释系列

#include <iostream>

using namespace std;

#define SPACE " "

int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            int ah, am, as, bh, bm, bs;
            cin >> ah >> am >> as >> bh >> bm >> bs;
            int addon_m = 0, addon_h = 0;
            int h, m, s;
            s = as + bs;
            if (s >= 60) {
                addon_m = s/60;
                s = s%60;
            }
            m = am + bm + addon_m;
            if (m >= 60) {
                addon_h = m/60;
                m = m%60;
            }
            h = ah + bh + addon_h;
            cout << h << SPACE
                 << m << SPACE
                 << s << endl;
        }

    }
    return 0;
}