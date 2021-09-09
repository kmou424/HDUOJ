//
// Created by kmou424 on 2021/9/10.
//

#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int arr[100], res = 0;
        for (int i = 0; i < n; ++i) cin >> arr[i];
        sort(arr, arr + n);
        for (int i = 1; i < n - 1; i++) res += arr[i];
        cout << setprecision(2) << fixed << (double )res/(n - 2) << endl;
    }
    return 0;
}