//
// Created by kmou424 on 2021/9/17.
//

#include <iostream>
#include <cmath>

using namespace std;

#define SPACE " "

int main() {
    // x: 记录行数
    // y: 记录列数
    // temp: 用来获取输入的临时变量
    int x, y, temp;
    // res_x: 结果行数
    // res_y: 结果列数
    // res: 对应行列的结果
    int res_x, res_y, res;
    while (cin >> x >> y) {
        res = 0;
        for (int i = 0; i < x; i++) { // 遍历行
            for (int j = 0; j < y; j++) { // 遍历列
                cin >> temp;
                if (abs(temp) > abs(res)) {
                    res = temp;
                    res_x = i + 1;
                    res_y = j + 1;
                }
            }
        }
        cout << res_x << SPACE << res_y << SPACE << res << endl;
    }
    return 0;
}