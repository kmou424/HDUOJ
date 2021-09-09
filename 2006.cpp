//
// Created by kmou424 on 2021/9/6.
//

#include <iostream>

using namespace std;

int main() {
    int res = 1, n;
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (num%2 == 1) res *= num;
        }
        cout << res << endl;
        res = 1;
    }
    return 0;
}