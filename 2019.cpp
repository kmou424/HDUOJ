//
// Created by kmou424 on 2021/9/11.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    while (cin >> n >> x && n != 0 && x != 0) {
        // 题目给的n <= 100，但由于要插入一个数字，所以给数组长度为101
        int arr[101] = {0};
        // 拿数据
        for (int i = 0; i < n; i++) cin >> arr[i];
        // 在之前的数据末尾追加这个新插入的数字x
        arr[n] = x;
        // 投机取巧一手，用快排重新排序
        sort(arr, arr + n + 1);
        // 输出n + 1个元素
        for (int i = 0; i < n + 1; i++) cout << arr[i] << (i == n ? "\n" : " "); // 老换行特判了
    }
    return 0;
}