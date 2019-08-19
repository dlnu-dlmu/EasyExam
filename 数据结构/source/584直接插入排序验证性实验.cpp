//请创建一个一维整型数组用来存储待排序关键码，关键码从数组下标为1的位置开始存储，
//下标为0的位置不存储关键码。输入关键码的个数，以及各个关键码，
//采用直接插入排序的方法并采用哨兵法对关键码数组进行排序，输出每轮比较的过程。

#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int *m = new int[n];
	for (int i = 1; i <= n; i++) {
		cin >> m[i];
	}
	int j,k;
	for (int i = 2; i <= n; i++) {
		m[0] = m[i];
		k = 0;
		for (j = i - 1; m[0] < m[j]; j--){
			m[j + 1] = m[j];
			k = 1;
			cout << m[j] << " ";
		}
		if(k)
			cout << endl;
		m[j + 1] = m[0];
	}
	for (int i = 1; i <= n; i++) {
		cout << m[i] << " ";
	}
    return 0;
}