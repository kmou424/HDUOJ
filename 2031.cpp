//
// Created by kmou424 on 2021/9/27.
//

// 我觉得不需要注释

#include <iostream>
#include <string>

using namespace std;

int main() {
    const char addon[17] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
                     '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    int num, base;
    while (cin >> num >> base) {
        int a = (num < 0 ? -num : num);
        string out;
        while (a != 0) {
            out += addon[a%base];
            a = a/base;
        }
        cout << (num < 0 ? "-" : "");
        for (int j = 1; j <= out.length(); j++) {
            cout << out[out.length() - j];
        }
        cout << endl;
    }
    return 0;
}