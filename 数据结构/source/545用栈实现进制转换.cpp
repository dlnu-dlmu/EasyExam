#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int dec_oct(int dec) {
	int oct = 0, temp, n = 0; stack<int> stk;
	while (dec!=0) {
		temp = dec % 8;
		dec = dec / 8;
		stk.push(temp);
	}
	while (!stk.empty()) {
		oct = oct + stk.top() * pow(10, stk.size() - 1);
		stk.pop();
	}
	return oct;
}

int main() {
	int dec;
	for (int i = 0; i<3; i++) {
		cin >> dec;
		cout << dec_oct(dec) << endl;
	}
	return 0;
}