//
// Created by kmou424 on 2021/9/6.
//

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int a, b;
    long long res1 = 0, res2 =0;
    while (cin >> a >> b) {
        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        for (int i = a; i <= b; i++) {
            if (i % 2 == 0) res1 += (long long)i*i;
            else res2 += (long long)i*i*i;
        }
        cout << res1 << " " << res2 << endl;
        res1 = res2 = 0;
    }
    return 0;
}