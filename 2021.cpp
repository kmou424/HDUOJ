//
// Created by kmou424 on 2021/9/17.
//

#include <iostream>

using namespace std;

int main() {
    // n: 人数
    // list[100]: 存储每人对应工资的数组
    // pieces: 钱的张数
    int n, list[100], pieces;
    // money[6]: 钱的面值（常量）
    const int money[6] = {100, 50, 10, 5, 2, 1};
    while (cin >> n && n != 0) {
        pieces = 0;
        // 数组归零
        for (int & i : list) i = 0;
        // 读取传入数据
        for (int i = 0; i < n; i++) cin >> list[i];
        // for循环处理每个数据
        for (int i = 0; i < n; i++) {
            // 遍历钱的面值
            for (int m : money) {
                // 每次遍历至少增加一张（元素为0时不做处理）
                if (list[i]/m >= 1 && list[i] != 0) {
                    pieces += list[i]/m;
                    // 若已除到尽头，元素归零
                    list[i] = list[i] - (list[i]/m)*m;
                }
            }
        }
        cout << pieces << endl;
    }
    return 0;
}