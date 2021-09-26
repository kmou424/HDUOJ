//
// Created by kmou424 on 2021/9/25.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    while (cin >> str) {
        // 用max来存储找到的最大字母
        int max = 'a';
        // 遍历字符串来找到最大字母
        for (int i : str) if (i > max) max = i;
        for (int i : str) {
            // 逐个输出字符串
            cout << (char)i;
            if (i == max) {
                // 若遍历时遇到最大字母则多输出一个(max)
                cout << "(max)";
            }
        }
        // 换行满足格式
        cout << endl;
    }
    return 0;
}