//
// Created by kmou424 on 2021/9/24.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x, y, members;
    while (cin >> x >> y) {
        int arr[50][5];
        members = 0;
        // 输入数据
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                cin >> arr[i][j];
            }
        }
        // 计算每个学生平均分
        for (int i = 0; i < x; i++) {
            int temp_score = 0;
            for (int j = 0; j < y; j++) {
                temp_score += arr[i][j];
            }
            cout << fixed << setprecision(2) << (double)temp_score/(double)y << (i == x - 1 ? "\n" : " ");
        }
        // 计算每科平均分
        double avg[5];
        for (int i = 0; i < y; i++) {
            int temp_score = 0;
            for (int j = 0; j < x; j++) {
                temp_score += arr[j][i];
            }
            avg[i] = (double)temp_score/(double)x;
        }
        // 输出每科平均分
        for (int i = 0; i < y; i++) cout << fixed << setprecision(2) << avg[i] << (i == y - 1 ? "\n" : " ");
        // 计算合格者
        for (int i = 0; i < x; i++) {
            bool isOK = true;
            for (int j = 0; j < y; j++) {
                if (arr[i][j] < avg[j]) isOK = false;
            }
            if (isOK) members++;
        }
        // 输出合格者数量
        cout << members << endl << endl;
    }
    return 0;
}