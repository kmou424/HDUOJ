//
// Created by kmou424 on 2021/9/27.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        cin.ignore();
        for (int i = 0; i < n; i++) {
            string str;
            getline(cin, str);
            // chn_num: 存储中文字符的个数
            double chn_num = 0;
            for (int j = 0; j < str.length(); j++) {
                // 中文字符为全角字符，所以每个中文字符占两个字节
                // 每个字节对应的ASCII均小于0，所以逐个遍历字符串，小于0则为chn_num增加0.5(2个小于0的ASCII值代表一个中文字符)
                if (str[j] < 0) chn_num += 0.5;
            }
            cout << (int)chn_num << endl;
        }
    }
    return 0;
}