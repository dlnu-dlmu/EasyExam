#include<iostream>
using namespace std;

const int MaxSize = 100;
template<class DataType>
class SeqList{
public:
	SeqList() { length = 0; }
	SeqList(DataType a[], int n);
	~SeqList() {}
	int Length() { return length; }
	DataType Get(int i);
	int Locate(DataType x);
	void Insert(int i, DataType x);
	DataType Delete(int i);
	void PrintList();
private:
	DataType data[MaxSize];
	int length;
};

template<class DataType>
SeqList<DataType>::SeqList(DataType a[], int n) {
	if (n > 100) throw "参数非法";
	for (int i = 0; i < n; i++)
		data[i] = a[i];
	length = n;
}

template<class DataType>
DataType SeqList<DataType>::Get(int i) {
	if (i<1 && i>length)throw "查找位置非法";
	return data[i - 1];
}

template<class DataType>
int SeqList<DataType>::Locate(DataType x) {
	for (int i = 0; i < length; i++)
		if (data[i] == x)
			return i + 1;
	return 0;
}

template<class DataType>
void SeqList<DataType>::Insert(int i, DataType x) {
	if (i > MaxSize)throw "上溢";
	if (i<1 || i>length + 1)throw "位置异常";
	for (int j = length; j >= i; j--)					//将第i个元素向后挪一个位置
		data[j] = data[j--];
	data[i - 1] = x;
	length++;
}

template<class DataType>
DataType SeqList<DataType>::Delete(int i) {
	DataType x;
	if (length == 0)throw "下溢";
	if (i<1 || i>length)throw "位置异常";
	x = data[i];
	for (int j = i; j < length; j++)
		data[j - 1] = data[j];
	length--;
	return x;
}

template<class DataType>
void SeqList<DataType>::PrintList() {
	for (int i = 0; i < length; i++)
		cout << data[i] << " ";
	cout << "\n";
}

int main() {
	SeqList<char> list;
	char ch, x; int i;
	cin >> ch;
	while (ch != 'E') {
		cin >> ch;
		switch (ch) {
		case'I': cin >> i >> x; list.Insert(i, x); break;
		case'S': cout << "Length:" << list.Length(); break;
		case'G': cin >> i; cout << "data[i]:" << list.Get(i); break;
		case'L': cin >> x; cout << "i:" << list.Locate(x); break;
		case'D': cin >> i; cout << "Delete:" << list.Delete(i); break;
		case'P': list.PrintList(); break;
		default: break;
		}
	}
	return 0;
}