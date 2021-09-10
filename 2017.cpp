//
// Created by kmou424 on 2021/9/11.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, num_of_digits;
    string str;
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            // 初始化一手统计数字的变量，默认为0
            num_of_digits = 0;
            // 读入字符串
            cin >> str;
            // 遍历读取字符串每一个字符，为char
            // 转int为ASCII，判断是否为数字，即 48 ≤ ascii ≤ 57，若是则统计数量++
            for (char j: str) if ((int)j >= 48 && (int)j <= 57) num_of_digits++;
            cout << num_of_digits << endl;
        }
    }
    return 0;
}