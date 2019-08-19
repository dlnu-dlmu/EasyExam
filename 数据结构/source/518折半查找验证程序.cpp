//定义一个整型数组r，用于存储关键码集合，其中r[1]~r[n]用于存储有效的关键码，r[0]留作它用，注意该数组按关键码有序。
//按照折半查找方法，查找在关键码集合中是否有符合给定值的记录，如果有，
//返回该记录所在数组下标，如果没有，返回0。要求输出查找过程，
//即输出每一轮的low，mid，high值，查找过程中需要比较的关键码值都输出

#include <iostream>
using namespace std;

int main() {
	int a1[100], a2[5], Num = 0, Low = 0, Mid = 0, High = 0, i = 0, j = 0;
	cin >> Num;
	for (i=1; i<=Num; i++)
		cin >> a1[i];
	for (j=0; j<3; j++)
		cin >> a2[j];
	for (j=0; j<3; j++)	{
		Low = 1;
		High = Num;
		while (Low <= High)	{
			Mid = (Low + High) / 2;
			if (a2[j] < a1[Mid]) {
				cout << Low << " " << Mid << " " << High << " " << a1[Mid] << endl;
				High = Mid - 1;
			}
			else if (a2[j] > a1[Mid]) {
				cout << Low << " " << Mid << " " << High << " " << a1[Mid] << endl;
				Low = Mid + 1;
			}
			else break;
		}
		if (a2[j] != a1[Mid])
			cout << 0 << endl;
		if (a2[j] == a1[Mid])	{
			cout << Low << " " << Mid << " " << High << " " << a1[Mid] << endl;
			cout << Mid << endl;
		}
	}
	return 0;
}