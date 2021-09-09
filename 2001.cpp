#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
	double in[4];
	while(cin >> in[0] >> in[1] >> in[2] >> in[3]){
		cout << fixed << setprecision(2) << (double)(sqrt((pow((in[2] - in[0]), 2) + pow((in[3] - in[1]), 2)))) << endl;
	}
	return 0;
}
