//请创建一个一维整型数组用来存储待排序关键码，关键码从数组下标为1的位置开始存储，
//下标为0的位置不存储关键码。输入关键码的个数，以及各个关键码，
//采用简单选择排序的方法对关键码数组进行排序，输出每轮比较的过程。

#include<iostream>
using namespace std;
int main()
{
	int n,t,j;
	cin >> n;
	int *m = new int[n];
	for (int i = 1; i <= n; i++) {
		cin >> m[i];
	}
	int index,k;
	for (int i = 1; i < n; i++) {
		index = i;
		k = 0;
		for ( j = i + 1; j <= n; j++)
			if (m[j] < m[index]) { index = j; cout << m[index] << " "; k = 1; }
		if (index != j) {
			t = m[i];
			m[i] = m[index];
			m[index] = t;
		}
		if(k)
		cout << endl;
	}
	for (int i = 1; i <= n; i++) {
		cout << m[i] << " ";
	}
    return 0;
}

