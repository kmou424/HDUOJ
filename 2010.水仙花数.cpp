//
// Created by kmou424 on 2021/9/6.
//

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int start, end;
    bool flag = false;
    while (cin >> start >> end) {
        for (int i = start; i <= end; i++){
            int a = i%10;
            int b = i/10%10;
            int c = i/100;
            if ((pow(a,3) + pow(b,3) + pow(c,3)) == i) {
                if (flag) cout << " " << i;
                else cout << i;
                flag = true;
            }
        }
        flag ? cout << endl : cout << "no" << endl;
        flag = false;
    }

    return 0;
}