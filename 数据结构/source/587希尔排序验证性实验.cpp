//请创建一个一维整型数组用来存储待排序关键码，关键码从数组下标为1的位置开始存储，
//下标为0的位置不存储关键码。输入关键码的个数，以及各个关键码，
//采用希尔排序的方法对关键码数组进行排序，输出每轮比较的过程。

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *m = new int[n];
	for (int i = 1; i <= n; i++) {
		cin >> m[i];
	}
	int j,k;
	for (int d = n / 2; d >= 1; d = d / 2) {
		k = 0;
		for (int i = d + 1; i <= n; i++) {
			m[0] = m[i];
			for (j = i - d; j > 0 && m[0] < m[j]; j = j - d) {
				cout << m[j] << " ";
				m[j + d] = m[j];
				k = 1;
			}
			m[j + d] = m[0];
		}
		if(k)
			cout << endl;
	}
	for (int i = 1; i <= n; i++) {
		cout << m[i] << " ";
	}
  return 0;
}