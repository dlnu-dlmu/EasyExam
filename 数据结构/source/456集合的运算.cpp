//已知A和B均是由整型数据组成的集合，使用线性表表示集合，
//设计算法求集合A、B的交集和并集，功能包括输入集合A，输入集合B，
//求A和B的并集，求A和B的交集。
//本题中, 线性表的第一个元素位置为1，线性表的最大长度为20

#include<iostream>
using namespace std;
int const MAX_NUM = 20;
class MyClass
{
public:
	MyClass() { length = 0;count = 0; }
	void insert_A(int n);
	void insert_B(int m);
	void display_U();
	void display_n();
private:
	int length, count;
	int a[MAX_NUM];
	int b[MAX_NUM];
};
void MyClass::insert_A(int n) {
	int puta;
	for (int i = 0; i < n; i++)
	{
		cin>>puta;
		length++;
		if (length>MAX_NUM)
		{
			cout<<"上溢";
			break;
		}
		a[i] = puta;
	}
}
void MyClass::insert_B(int m) {
	int putb;
	for (int i = 0; i < m; i++)
	{
		cin>>putb;
		count++;
		if (count>MAX_NUM)
		{
			cout<<"上溢";
			break;
		}
		b[i] = putb;
	}
}
void MyClass::display_U() {
	for (int i = 0; i < length; i++)
	{
		cout<<a[i]<<endl;
	}
	for (int p = 0; p < count; p++)
	{
		for (int y = 0; y < length; y++)
		{
			if (b[p] == a[y])
			{
				break;
			}
			else if (y==length-1)
			{
				cout<<b[p]<<endl;
			}
		}
	}
}
void MyClass::display_n() {
	for (int i = 0; i < length; i++)
	{
		for (int p = 0; p < count; p++)
		{
			if (a[i]==b[p])
			{
				cout<<a[i]<<endl;
			}
		}
	}
}
int main() {
	MyClass py;
	int n, m;
	char choose;
	do
	{
		cin>>choose;
		switch (choose)
		{
		case'A':
			cin>>n;
			py.insert_A(n);
			break;
		case'B':
			cin>>m;
			py.insert_B(m);
			break;
		case'U':
			py.display_U();
			break;
		case'I':
			py.display_n();
			break;
		default:
			break;
		}
	} while (choose!='E');
	return 0;
}