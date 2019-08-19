//请创建一个一维整型数组用来存储待排序关键码，关键码从数组下标为1的位置开始存储，
//下标为0的位置不存储关键码。输入关键码的个数，以及各个关键码，
//采用堆排序的方法对关键码数组进行排序，输出初始堆序列，以及每轮调整堆的关键码比较过程。

#include<iostream>
using namespace std;
void sf(int r[], int k, int m) {
	int i = k;
	int t;
	int flag = 0;
	int j = i * 2;
	while (j <= m) {
		if (j < m&&r[j] < r[j + 1])j++;
		if (r[i] > r[j])break;
		else {
			t = r[j];
			r[j] = r[i];
			r[i] = t;
			cout << r[ i] << " ";
			flag = 1;
			i = j;
			j = 2 * i;
		}
	}
	if(flag)
		cout << endl;
}

int main()
{
	int n,t;
	cin >> n;
	int *m = new int[n];
	for (int i = 1; i <= n; i++) {
		cin >> m[i];
	}
	for (int i = n / 2; i >= 1; i--) {
		sf(m, i, n);
	}
	for (int i = 1; i <= n; i++) {
		cout << m[i] << " ";
	}
	cout << endl;
	for (int i = 1; i < n; i++) {
		t = m[1];
		m[1] = m[n - i + 1];
		m[n - i + 1] = t;
		sf(m, 1, n - i);
	}
	for (int i = 1; i <= n; i++) {
		cout<< m[i]<<" ";
	}
    return 0;
}