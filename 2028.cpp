//
// Created by kmou424 on 2021/9/26.
//

// 这道题不需要注释

#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(!b) return a;
    return gcd(b, a%b);
}

int main() {
    int n, tmp, res;
    while (cin >> n) {
        cin >> res;
        while (--n) {
            cin >> tmp;
            res *= tmp/gcd(res, tmp);
        }
        cout << res << endl;
    }
    return 0;
}