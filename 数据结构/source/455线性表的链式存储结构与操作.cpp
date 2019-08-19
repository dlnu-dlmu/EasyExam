//请你定义一个链表，可以对链表进行“在某个元素之前插入一些元素”、
//“删除某个位置的元素”、“查找某元素”、“获取某个位置的元素”、“遍历输出所有元素”、“求链表的长度”等操作。
//键盘输入一些命令，可以执行上述操作。本题中，链表元素为整数，
//链表的第一个元素位置为1，链表的最大长度为20

#include<iostream>
using namespace std;
const int Max = 20;
struct Node {
	int data;
	Node *next;
};
class Linklist
{
public:
	Linklist();
	~Linklist();
	int length();
	int get(int i);
	int Locate(int x);
	int Delete(int i);
	void print();
	void Insert(int i, int x);
private:
	Node *first;
};
int Linklist::get(int i)
{
	Node *p;
	p = first;
	int count = 0;
	while (count != i)
	{
		count++;
		p = p->next;
	}
	if (p == NULL)
	{
		cout << "位置不正确" << endl;
	}
	else
	{
		return p->data;
	}
}
int Linklist::Locate(int x)
{
	Node* p = first; int count = 0;
	while (p!=NULL)
	{
		if (p->data == x)
			return count;
		p = p->next;
		count++;
	}
	return 0;
}
int Linklist::Delete(int i)
{
	Node *p,*q;
	int m,count = 0;
	p = first;
	if (p->next == NULL)
	{
		cout << "下溢" << endl;
		return 0;
	}
	while (count!=i-1)
	{
		p = p->next;
		count++;
	}
	if (p==NULL || p->next==NULL)
	{
		cout << "位置不正确" << endl;
		return 0;
	}
	else {
		q = p->next;
		m = q->data;
		p->next = q->next;
		delete q;
		return m;
	}
}
void Linklist::Insert(int i, int x)
{
	Node *p,*s;
	p = first; 
	int count = 0;
	while (p!=NULL && count<i-1)
	{
		p = p->next;
		count++;
	}
	if (p == NULL)
		cout << "位置不正确" << endl;
	else {
		s = new Node;
		s->data = x;
		s->next = p->next;
		p->next = s;
	}
}
void Linklist::print()
{
	Node *p;
	p = first->next;
	while (p!=NULL)
	{
		cout << p->data << endl;
		p = p->next;
	}
}
int Linklist::length()
{
	Node *p;
	p = first->next;
	int count = 0;
	while (p!=NULL)
	{
		p = p->next;
		count++;
	}
	return count;
}
Linklist::Linklist()
{
	first = new Node;
	first->next = NULL;
}
Linklist::~Linklist()
{
	Node *q, *p;
	p = first;
	while (p != NULL)
	{
		q = p;
		p = p->next;
		delete q;
	}
}
int main()
{
	int i, x, n;
	Linklist lk;
	char ch;
	do
	{
		cin >> ch;
		switch (ch)
		{
		case'I':
			cin >> n;
			for (int j = 0; j < n; j++)
			{
				cin >> i >> x;
				lk.Insert(i, x);
			}
			break;
		case'G':
			cin >> i;
			cout<<lk.get(i)<<endl;
			break;
		case'S':
			cin >> i;
			if (lk.Locate(i) >= 1)
				cout << lk.Locate(i) << endl;
			else
				cout << "None" << endl;
			break;
		case'D':
			cin >> i;
			cout<<lk.Delete(i)<<endl;
			break;
		case'V':
			lk.print();
			break;
		case'L':
			cout<<lk.length()<<endl;
			break;
		}
	} while (ch != 'E');
	return 0;
}