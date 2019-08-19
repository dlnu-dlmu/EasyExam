//请你定义一个顺序表，可以对顺序表进行如下操作：
//在某个元素之前插入一些元素
//删除某个位置的元素
//查找某元素
//获取某个位置的元素
//遍历输出所有元素
//键盘输入一些命令，可以执行上述操作。本题中，顺序表元素为整数，顺序表的第一个元素位置为1，顺序表的最大长度为20

#include<iostream>
using namespace std;
const int Max = 20;
template<class T>
class Seqlist
{
public:
	Seqlist() { length = 0; }
	Seqlist(T a[], int n);
	~Seqlist() {};
	int leng() { return length; };
	void get(int i);
	int Locate(T x);
	void Delete(int i);
	void print();
	void Insert(int i, T x);
private:
	T data[Max];
	int length;
};
template<class T>
Seqlist<T>::Seqlist(T a[], int n)
{
	if (n > Max)
	{
		cout << "位置超出上限"<<endl;
	}
	else
		for (int i = 0; i < n; i++)
			data[i] = a[i];
	length = n;
}
template<class T>
void Seqlist<T>::get(int i)
{
	if (i<1 || i>length)
	{
		cout << "位置不正确"<<endl;
	}
	else
		cout << data[i - 1]<<endl;
}
template<class T>
int Seqlist<T>::Locate(T x)
{
	for (int i = 0; i < length; i++)
	{
		if (data[i] == x)
			return (i + 1);
	}
	return -1;

}
template<class T>
void Seqlist<T>::Delete(int i)
{
	int x, j;
	if (length == 0)
	{
		cout << "下溢"<<endl;
	}
	else if (i<1 || i>length)
	{
		cout << "位置不正确"<<endl;
	}
	else {
		x = data[i - 1];
		cout << x<<endl;
		for (j = i; j < length; j++)
		{
			data[j - 1] = data[j];
		}
		length--;
	}
}
template<class T>
void Seqlist<T>::Insert(int i, T x)
{
	int j;
	if (length > Max)
	{
		cout << "上溢"<<endl;
	}
	else if (i<1 || i>length + 1)
	{
		cout << "位置不正确"<<endl;
	}
	else
	{
		for (j = length; j >= i; j--)
		{
			data[j] = data[j - 1];
		}
		data[i - 1] = x;
		length++;
	}
}
template<class T>
void Seqlist<T>::print()
{
	for (int i = 0; i < length; i++)
		cout << data[i] << endl;
}
int main()
{
	int i, x, n,q,m,z;
	Seqlist<int> L;
	char choose;
	do
	{
		cin >> choose;
		switch (choose)
		{
		case'I':
			cin >> n;
			for (int j = 0; j < n; j++)
			{
				cin >> i >> x;
				L.Insert(i,x);
			}
			break;
		case'G':
			cin >> q;
			L.get(q);
			break;
		case'S':
			cin >> m;
			if (L.Locate(m) == -1)
			{
				cout << "None"<<endl;
			}
			else
			{
				cout << L.Locate(m) << endl;
			}
			break;
		case'D':
			cin >> z;
			L.Delete(z);
			break;
		case'V':
			L.print();
			break;
		}
	} while (choose != 'E');
	return 0;
}