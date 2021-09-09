#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

#define PI 3.1415927

int main() {
    double len;
    while (cin >> len)
    {
        cout << setprecision(3) << fixed << pow(len, 3)*PI*4/3 << endl;
    }
    
    return 0;
}