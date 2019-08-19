//中序线索二叉树的建立  中序输出
#include<iostream>
using namespace std;

struct ThrNode {
	char data;
	ThrNode * lchild, * rchild;
	int ltag, rtag;
};

template <class DataType>
class InThrBiTree {
public:
	InThrBiTree();
	~InThrBiTree() {};
	ThrNode * Next(ThrNode* p);
	void InOrder() { Private_InOrder(); }
private:
	ThrNode * root;
	ThrNode * Creat(ThrNode * bt);
	void ThrBiTree(ThrNode * bt);
	void Private_InOrder();
};

ThrNode * pre = NULL;

template<class DataType>
InThrBiTree<DataType>::InThrBiTree() {
	root = Creat(root);
	ThrBiTree(root);
}

template<class DataType>
ThrNode * InThrBiTree<DataType>::Creat(ThrNode * bt) {
	char ch; cin >> ch;
	if (ch == '#') bt = NULL;
	else {
		bt = new ThrNode;
		bt->data = ch;
		bt->ltag = 0; bt->rtag = 0;
		bt->lchild = Creat(bt->lchild);
		bt->rchild = Creat(bt->rchild);
	}
	return bt;
}

template<class DataType>
void InThrBiTree<DataType>::ThrBiTree(ThrNode * bt) {
	if (bt != NULL)	{
		if (bt->ltag == 0)
			ThrBiTree(bt->lchild);
		if (bt->lchild == NULL) {
			bt->ltag = 1;
			bt->lchild = pre;
		}
		if (bt->rchild == NULL)
			bt->rtag = 1;
		if (pre != NULL && pre->rtag == 1)
			pre->rchild = bt;
		pre = bt;
		if (bt->rtag == 0)
			ThrBiTree(bt->rchild);
	}
}

template<class DataType>
ThrNode * InThrBiTree<DataType>::Next(ThrNode * p) {
	ThrNode * q = new ThrNode;
	if (p->rtag == 1)
		q = p->rchild;
	else {
		q = p->rchild;
		while (q->ltag == 0)
			q = q->lchild;
	}
	return q;
}

template<class DataType>
void InThrBiTree<DataType>::Private_InOrder() {
	ThrNode * p = new ThrNode;
	p = root;
	while (p->ltag == 0)
		p = p->lchild;
	cout << p->ltag << " ";
	cout << p->data << " ";
	cout << p->rtag << endl;
	while (p->rchild != NULL) {
		p = Next(p);
		cout << p->ltag << " ";
		cout << p->data << " ";
		cout << p->rtag << endl;
	}
}

int main() {
	InThrBiTree<char> tree;
	tree.InOrder();
	return 0;
}