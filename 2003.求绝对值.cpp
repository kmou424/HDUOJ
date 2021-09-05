//
// Created by kmou424 on 2021/9/5.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double input;
    while(cin >> input) {
        cout << setprecision(2) << fixed << (input < 0 ? -input : input) << endl;
    }
    return 0;
}