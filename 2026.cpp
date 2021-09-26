//
// Created by kmou424 on 2021/9/25.
//

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[101];
    while (gets(str)) {
        // 首先转换首字母
        str[0] = str[0] - 32;
        for (int i = 0; i < strlen(str); i++) {
            // 逐个读取，遇到空格则判定为有新的单词
            if (str[i] == ' ') {
                // 为下一个单词首字母转换为大写
                str[i + 1] = str[i + 1] - 32;
            }
        }
        cout << str << endl;
    }
    return 0;
}