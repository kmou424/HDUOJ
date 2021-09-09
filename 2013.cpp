//
// Created by kmou424 on 2021/9/10.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int res = 1;
        for (int i = 0; i < n - 1; i++) {
            res = 2 * (res + 1);
        }
        cout << res << endl;
    }
    return 0;
}