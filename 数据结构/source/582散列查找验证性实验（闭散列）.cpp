//请设计一个整型闭散列表，散列函数为除留余数法，处理冲突时的探查方法为线性探查法，
//其中散列表的长度、除留余数法的模和关键码的个数由键盘输入，
//再根据输入由键盘输入所有的关键码。分别对三个待查值在散列表中进行查找，
//如果找到了输出位置，如果没找到，输出“none”并把该待查值插入到散列表中，如果散列表满输出“full”

#include<iostream>
using namespace std;
const int Max_Size = 30;
class hashSearch{
public:
	hashSearch(int n, int m, int num);
	~hashSearch() {};
	void hash(int ppp);
private:
	int arr[Max_Size];
	int lenth;
	int model;
	int numbers;
	int full;
};

hashSearch::hashSearch(int n, int m, int num) {
	int ipt;
	int extra;
	lenth = n;model = m;numbers = num;full = num;
	for (int i = 0; i < Max_Size; i++)
		arr[i] = -1;
	for (int i = 0; i < numbers; i++){
		cin >> ipt;
		extra = (ipt % model);
		while (arr[extra] != -1)
			extra = (extra + 1) % lenth;
		arr[extra] = ipt;
	}
}

void hashSearch::hash(int ppp) {
	int extra;
	int count;
	count = 0;
	extra = (ppp%model);
	while (count<10)	{
		if (arr[extra] == ppp)		{
			cout << extra << endl;
			break;
		}
		extra = (extra + 1) % lenth;
		count += 1;
	}
	if (count == 10 && full != lenth)	{
		cout << "none" << endl;
		while (arr[extra] != -1)
			extra = (extra + 1) % lenth;
		arr[extra] = ppp;
		full = full + 1;
	}
	else if (count == 10 & full == lenth)
		cout << "full" << endl;
}

int main() {
	int n, m, num, x;
	cin >> n;
	cin >> m;
	cin >> num;
	hashSearch hashsh(n, m, num);
	for (int i = 0; i < 3; i++)	{
		cin >> x;
		hashsh.hash(x);
	}
	return 0;
}