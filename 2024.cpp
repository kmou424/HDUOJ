//
// Created by kmou424 on 2021/9/24.
//

// 就nm懒得写注释，我爬了

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string str;
    while (cin >> n) {
        cin.ignore();
        for (int i = 0; i < n; i++) {
            getline(cin, str);
            bool isOK, notOK = false;
            if (str.length() <= 0 || str.length() >= 50) {
                cout << "no" << endl;
                continue;
            }
            for (int j : str) {
                if (j == 32 || j == 20) {
                    notOK = true;
                } else if (j >= 48 && j <= 57) {
                    isOK = true;
                } else if (j >= 65 && j <= 90) {
                    isOK = true;
                } else if (j >= 97 && j <= 122) {
                    isOK = true;
                } else if (j == 95) {
                    isOK = true;
                } else {
                    notOK = true;
                }
            }
            if ((int)str[0] >= 48 && (int)str[0] <= 57) {
                notOK = true;
            }
            if (notOK) {
                cout << "no" << endl;
            } else {
                cout << (isOK ? "yes" : "no") << endl;
            }
        }
    }
    return 0;
}