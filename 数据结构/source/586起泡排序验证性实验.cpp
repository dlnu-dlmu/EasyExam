//请创建一个一维整型数组用来存储待排序关键码，
//关键码从数组下标为1的位置开始存储，下标为0的位置不存储关键码。
//输入关键码的个数，以及各个关键码，采用起泡排序的方法对关键码数组进行排序，输出每轮比较的过程

#include<iostream>
using namespace std;
int main()
{
	int*arr,n;
	int temp;
	cin >> n;
	arr = new int[n];
	for (int i = 1; i <=n; i++)
		cin >> arr[i];
	int exchange = n;
	while (exchange != 0) {
		int bound = exchange;
		exchange = 0;
		for (int j = 1; j < bound; j++) {
			if (arr[j] > arr[j + 1])
			{
				cout << arr[j + 1] << " ";
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				exchange = j;
			}
		}if (exchange != 0)
			cout << endl;
	}
	for (int i = 1; i <= n; i++)
		cout << arr[i]<<" ";
	return 0;
}
