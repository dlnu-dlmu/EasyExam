//请创建一个一维整型数组用来存储待排序关键码，
//关键码从数组下标为1的位置开始存储，下标为0的位置不存储关键码。
//输入关键码的个数，以及各个关键码，采用快速排序的方法对关键码数组进行排序，
//输出每轮比较的过程

#include<iostream>
using namespace std;
int part(int r[], int f, int e) {
	int i = f;
	int j = e;
	int t;
	int flag=0;
	while (i < j) {
		while (i < j&&r[i] <= r[j])j--;
		if (i < j) {
			t = r[i];
			r[i] = r[j];
			r[j] = t;
			cout << r[i] << " ";
			flag = 1;
			i++;
		}
		while (i < j&&r[i] <= r[j])i++;
		if (i < j) {
			t = r[j];
			r[j] = r[i];
			r[i] = t;
			cout << r[j] << " ";
			flag = 1;
			j--;
		}
	}
	if(flag)
		cout << endl;
	return i;
}
void Qp(int r[], int f, int e) {
	int p;
	if (f < e) {
		p = part(r, f, e);
		Qp(r, f, p - 1);
		Qp(r, p + 1, e);
	}
}
int main()
{
	int n;
	cin >> n;
	int *m = new int[n];
	for (int i = 1; i <= n; i++)
		cin >> m[i];
	Qp(m, 1, n);
	for (int i = 1; i <= n; i++)
		cout << m[i] << " ";
    return 0;
}


