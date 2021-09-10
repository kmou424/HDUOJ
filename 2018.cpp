//
// Created by kmou424 on 2021/9/11.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int cow = 0;
        int f1 = 1;
        int f2 = 2;
        int f3 = 3;
        if (n != 0) {
            if (n <= 4) {
                cow = n;
            } else {
                for (int i = 4; i < n + 1; i++) {
                    cow = f1 + f3;
                    // 下次循环
                    // 第i - 3年
                    f1 = f2;
                    // 第i - 2年
                    f2 = f3;
                    // 第i - 1年
                    f3 = cow;
                }
            }
            cout << cow << endl;
        }
    }
    return 0;
}