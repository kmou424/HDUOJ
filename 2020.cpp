//
// Created by kmou424 on 2021/9/11.
//

#include <iostream>

using namespace std;

// 抄点自己写过的代码应该没什么错吧，欸嘿
void bubble_sort(int * list, int len, bool isUper) {
    for (int i = 0; i < len; i++) {
        int s = len - i - 1;
        for (int m = 0; m < s; m++) {
            int first = list[m];
            int second = list[m + 1];
            if (isUper ? abs(first) > abs(second) : abs(first) < abs(second)) { // 这里进行了修改，int大小比较改为了int绝对值比较
                list[m] = second;
                list[m + 1] = first;
            }
        }
    }
}

int main() {
    int n;
    while (cin >> n && n != 0) {
        // 题目给的n最大值为100，直接给100
        int arr[100] = {0};
        // 拿数据
        for (int i = 0; i < n; i++) cin >> arr[i];
        // 冒泡排序应该够用（？
        bubble_sort(arr, n, false);
        // 输出结果
        for (int i = 0; i < n; i++) cout << arr[i] << (i == n - 1 ? "\n" : " "); // 循环结束，换行特判
    }
    return 0;
}