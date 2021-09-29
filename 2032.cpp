//
// Created by kmou424 on 2021/9/29.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        // 存储上一行杨辉三角数组用于推算下一行
        int last_res[30];
        // 默认全部给1
        for (int &i: last_res) i = 1;
        for (int i = 0; i < n; i++) {
            // 存储本行数组
            int temp[30];
            // 默认全部给1
            for (int &j: temp) j = 1;
            // 行数大于2时，由上一行数组按照定义递推
            if (n > 2) {
                for (int j = 1; j < i; j++) {
                    // 默认第一个和最后一个数为1，中间递推
                    temp[j] = last_res[j - 1] + last_res[j];
                }
            }
            for (int j = 0; j <= i; j++) {
                // 输出本行
                cout << temp[j] << (j == i ? "\n" : " ");
                // 存储本行数据为上一行并开始进行下一行的递推
                last_res[j] = temp[j];
            }
        }
        cout << endl;
    }
    return 0;
}