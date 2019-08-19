//定义一个整型数组r，用于存储关键码集合，其中r[1]~r[n]用于存储有效的关键码，r[0]留作它用。
//按照哨兵设置在下标为0处的顺序查找方法，
//查找在关键码集合中是否有符合给定值的记录，如果有，返回该记录所在数组的下标，如果没有，返回0。
//要求输出查找过程，即查找过程中需要比较的关键码值都输出

#include <iostream>
using namespace std;
int secrch (int a[], int n) {
	while (a[n] != a[0])
		cout << a[n--] << " ";	
	cout << endl;	
	return n;
}
int main() {
	int x = 0, a[100], i = 0, j = 0;
	cin >> x;
	for(i=1; i<=x; i++)
		cin >> a[i];
	for (j=3; j>0; j--)	{
		cin >> a[0];
		cout << secrch (a, x) << endl;
	}
	return 0;
}