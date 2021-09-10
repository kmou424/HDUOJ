//
// Created by kmou424 on 2021/9/11.
//

#include <iostream>

using namespace std;

void swapFirstAndMin(int * arr, int len) {
    // 默认给定数组第一个元素为min，最小值对应的index为0
    int min = arr[0], min_idx = 0;
    for (int i = 1; i < len; i++) {
        // 判断第i个值是否小于min，若小于则更新min和min_idx
        if (arr[i] < min) {
            min = arr[i];
            min_idx = i;
        }
    }
    // 如果min就是第一个元素就没必要swap啦(～￣▽￣)～
    if (min_idx != 0) swap(arr[0], arr[min_idx]);
}

int main() {
    int n;
    while (cin >> n) {
        if (n != 0) {
            int arr[100] = {0};
            // for存元素
            for (int i = 0; i < n; i++) cin >> arr[i];
            // 开始交换
            swapFirstAndMin(arr, n);
            for (int i = 0; i < n; i++) cout << arr[i] << (i == n - 1 ? "\n" : " "); // 老样子，最后一个元素特判，不能多输出一个空格
        }
    }
    return 0;
}