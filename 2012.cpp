//
// Created by kmou424 on 2021/9/7.
//

#include <iostream>

using namespace std;

bool isPrime(int n) {
    for(int i = 2; i <= n / 2; ++i) if(n % i == 0) return false;
    return true;
}

int main() {
    int x, y;
    while (cin >> x >> y) {
        if (x == 0 && y == 0){
            continue;
        }
        if (x > y) swap(x, y);
        for (int i = x; i < y + 1; i++) {
            if (!isPrime(i * i + i + 41)) { cout << "Sorry" << endl; break;}
            else if (i == y) cout << "OK" << endl;
        }
    }
    return 0;
}