//
// Created by kmou424 on 2021/9/10.
//

#include <iostream>

using namespace std;

int main() {
    int n, m;
    // p: 用于记录数列的第p个偶数，该偶数值为p*2
    // r: 用于记录每次循环的m个偶数的和
    // t: 用于记录(int)n/m，计算前t*m个元素每m个元素之和平均数的总循环次数
    int p, r, t;
    while (cin >> n >> m) {
        t = n/m;
        p = 0, r = 0;
        for (int i = 0; i < t; i++) {
            for (int j = 0; j < m; j++) {
                p++;
                r += p * 2;
            }
            // 因为HDUOJ对输出格式的严格检查，我们必须把最后一位输出的空格换成换行符
            cout << r/m << (i == t - 1 && t * m >= n ? "\n" : " ");
            r = 0;
        }
        // 若t*m<n，即为题目所描述的"如果最后不足m个，则以实际数量求平均值"
        if (t * m < n) {
            r = 0;
            for (int i = m * t; i < n; i++) {
                r += (i + 1) * 2;
            }
            cout << r / (n - m * t) << endl;
        }
    }
    return 0;
}