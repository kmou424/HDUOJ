//
// Created by kmou424 on 2021/9/5.
//

#include <iostream>

using namespace std;

int main() {
    int input;
    while (cin >> input) {
        if (input >= 90 && input <= 100) printf("A\n");
        else if (input >= 80 && input <= 89) printf("B\n");
        else if (input >= 70 && input <= 79) printf("C\n");
        else if (input >= 60 && input <= 69) printf("D\n");
        else if (input >= 0 && input <= 59) printf("E\n");
        else printf("Score is error!\n");
    }
    return 0;
}