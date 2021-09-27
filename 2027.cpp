//
// Created by kmou424 on 2021/9/26.
//

#include <iostream>
#include <cstring>

using namespace std;

typedef struct {
    int num_a;
    int num_e;
    int num_i;
    int num_o;
    int num_u;
} strInfo;

int main() {
    int n;
    char str[101];
    strInfo si;
    while (cin >> n) {
        cin.ignore();
        for (int i = 0; i < n; i++) {
            si.num_a = 0;
            si.num_e = 0;
            si.num_i = 0;
            si.num_o = 0;
            si.num_u = 0;
            gets(str);
            // 逐字遍历，检测到元音就为对应元音数目+1
            for (int j = 0; j < strlen(str); j++) {
                switch (str[j]) {
                    case 'a':
                        si.num_a++;
                        break;
                    case 'e':
                        si.num_e++;
                        break;
                    case 'i':
                        si.num_i++;
                        break;
                    case 'o':
                        si.num_o++;
                        break;
                    case 'u':
                        si.num_u++;
                        break;
                }
            }
            cout << "a:" << si.num_a << endl
            << "e:" << si.num_e << endl
            << "i:" << si.num_i << endl
            << "o:" << si.num_o << endl
            << "u:" << si.num_u << endl
            << (i == n - 1 ? "" : "\n");
        }
    }
    return 0;
}