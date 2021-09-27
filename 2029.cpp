//
// Created by kmou424 on 2021/9/27.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            string abc, cba;
            cin >> abc;
            // 简简单单翻转字符串
            for (int j = 1; j <= abc.length(); j++) {
                cba += abc[abc.length() - j];
            }
            // 判断和原字符串是否相同
            cout << (abc == cba ? "yes" : "no") << endl;
        }
    }
    return 0;
}