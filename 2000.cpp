#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	char in[3];
	while(cin >> in) {
		sort(in, in + 3);
		cout << in[0] << " " << in[1] << " " << in[2] << endl;
	}
	return 0;
}
