//请设计一个整型开散列表，散列函数为除留余数法，
//其中散列表的长度、除留余数法的模和关键码的个数由键盘输入，再根据输入由键盘输入所有的关键码。
//分别对三个待查值在散列表中进行查找，输出查找结果采用头插法

#include<iostream>
using namespace std;
const int Max_Size = 30;
struct date{
	int data;
	date* next;
};

struct Node{
	date* first;
};

class hashsearch{
public:
	hashsearch(int n, int m, int num);
	~hashsearch() {};
	void hash(int adrs);
private:
	Node* arr[Max_Size];
	int lenth;
	int model;
	int numbers;
};

hashsearch::hashsearch(int n, int m, int num){
	int input;
	int extra;
	lenth = n;model = m;numbers = num;
	for (int i = 0; i < Max_Size; i++)	{
		arr[i] = new Node;
		arr[i]->first = NULL;
	}
	for (int i = 0; i < numbers; i++)	{
		date *p = new date;
		cin >> input;
		p->data = input;
		p->next = NULL;
		extra = (input % model);
		p->next = arr[extra]->first;
		arr[extra]->first = p;
	}
}

void hashsearch::hash(int adrs) {
	int extra;
	int count = 1;
	extra = (adrs % model);
	if (arr[extra]->first==NULL){
		cout << "none" << endl;
		date *p = new date;
		p->data = adrs;p->next = NULL;
		p->next = arr[extra]->first;
		arr[extra]->first = p;
	}
	else{
		date*q = new date;
		q = arr[extra]->first;
		while (q->data!=adrs&&q->next!=NULL)		{
			q = q->next;
			count = count + 1;
		}
		if (q->data==adrs)
			cout << extra << " " << count << endl;
		else if (q->data!=adrs&&q->next==NULL){
			cout << "none" << endl;
			date *rs = new date;
			rs->data = adrs;rs->next = NULL;
			rs->next = arr[extra]->first;
			arr[extra]->first = rs;
		}
	}
}

int main() {
	int n, m, num, x;
	cin >> n >> m >> num;
	hashsearch hashsh(n,m,num);
	for (int i = 0; i < 3; i++){
		cin >> x;
		hashsh.hash(x);
	}
	return 0;
}