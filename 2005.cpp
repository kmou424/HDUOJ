//
// Created by kmou424 on 2021/9/5.
//

#include <iostream>
#include <cstdio>

using namespace std;

bool isLeapYear(int y) {
    if (y % 4 == 0 && y % 100 != 0) { return true; }
    else if (y % 400 == 0 && y % 100 == 0) { return true; }
    else return false;
}

bool isBigMonth(int m) {
    int bigm[7] = {1, 3, 5, 7, 8, 10, 12};
    for (int i : bigm){
        if (m == i) {
            return true;
        };
    }
    return false;
}

int main() {
    int y, m, d;
    int res = 0;
    while (scanf("%d/%d/%d", &y, &m, &d) != EOF){
        for (int i = 2; i <= m; i++) {
            if (i == 3) { res += isLeapYear(y) ? 29 : 28; }
            else { res += isBigMonth(i - 1) ? 31 : 30; }
        }
        res += d;
        cout << res << endl;
        res = 0;
    }
    return 0;
}