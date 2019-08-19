//二叉树递归基本操作
//设计二叉树类，能够对二叉树进行先序、中序、后序和层序遍历，
//遍历的操作为输出结点的值，设计主函数，输入一棵二叉树，
//按先序、中序、后序、层序的遍历顺序输出结点的值。
//二叉树的结点数不超过20

#include<iostream>
using namespace std;

template<class DataType>
struct BiNode {
	DataType data;
	BiNode<DataType> *lchild, *rchild;
};

template<class DataType>
class BiTree {
public:
	BiTree() { root = Creat(root); }
	~BiTree() { Release(root); }
	void PreOrder() { PreOrder(root); }
	void InOrder() { InOrder(root); }
	void PostOrder() { PostOrder(root); }
	void LeverOrder();
private:
	BiNode<DataType> *root;
	BiNode<DataType> *Creat(BiNode<DataType> *bt);
	void Release(BiNode<DataType> *bt);
	void PreOrder(BiNode<DataType> *bt);
	void InOrder(BiNode<DataType> *bt);
	void PostOrder(BiNode<DataType> *bt);
};

template<class DataType>
void BiTree<DataType>::PreOrder(BiNode<DataType> * bt) {
	if (bt == NULL) return;
	else {
		cout << bt->data << " ";
		PreOrder(bt->lchild);
		PreOrder(bt->rchild);
	}
}

template<class DataType>
void BiTree<DataType>::InOrder(BiNode<DataType> * bt) {
	if (bt == NULL) return;
	else {
		InOrder(bt->lchild);
		cout << bt->data << " ";
		InOrder(bt->rchild);
	}
}

template<class DataType>
void BiTree<DataType>::PostOrder(BiNode<DataType> * bt) {
	if (bt == NULL) return;
	else {
		PostOrder(bt->lchild);
		PostOrder(bt->rchild);
		cout << bt->data << " ";
	}
}

template<class DataType>
void BiTree<DataType>::LeverOrder() {
	int front, rear;
	front = rear = -1;
	BiNode<DataType> *Q[20], *q;
	if (root == NULL) return;
	Q[++rear] = root;
	while (front != rear) {
		q = Q[++front];
		cout << q->data << " ";
		if (q->lchild != NULL) Q[++rear] = q->lchild;
		if (q->rchild != NULL) Q[++rear] = q->rchild;
	}
}

template<class DataType>
BiNode<DataType> * BiTree<DataType>::Creat(BiNode<DataType> * bt) {
	DataType ch; cin >> ch;
	if (ch == 0) bt = NULL;
	else {
		bt = new BiNode<DataType>;
		bt->data = ch;
		bt->lchild = Creat(bt->lchild);
		bt->rchild = Creat(bt->rchild);
	}
	return bt;
}

template<class DataType>
void BiTree<DataType>::Release(BiNode<DataType> * bt) {
	if (bt != NULL) {
		Release(bt->lchild);
		Release(bt->rchild);
		delete bt;
	}
}

int main() {
	BiTree<int> tree;
	tree.PreOrder(); cout << endl;
	tree.InOrder(); cout << endl;
	tree.PostOrder(); cout << endl;
	tree.LeverOrder();
	return 0;
}