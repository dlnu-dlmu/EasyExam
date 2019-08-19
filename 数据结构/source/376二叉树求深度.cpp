//二叉树求深度 递归
//采用先序法建立一棵二叉树，设计求该二叉树的深度，
//二叉树的数据域类型为字符型，扩展二叉树的叶子结点用‘#’表示，
//要求可以求多棵二叉树的深度，当二叉树的深度为0时程序结束
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
	int deep() { return deep(root); }
private:
	BiNode<DataType> *root;
	BiNode<DataType> *Creat(BiNode<DataType> *bt);
	void Release(BiNode<DataType> *bt);
	int deep(BiNode<DataType> *bt);
};

template<class DataType>
BiNode<DataType> * BiTree<DataType>::Creat(BiNode<DataType> * bt) {
	DataType ch; cin >> ch;
	if (ch == '#') bt = NULL;
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

template<class DataType>
int BiTree<DataType>::deep(BiNode<DataType> * bt) {
	if (bt == NULL) return 0;
	int ldeep = deep(bt->lchild);
	int rdeep = deep(bt->rchild);
	int count = ldeep >= rdeep ? ldeep + 1 : rdeep + 1;
	return count;
}

int main() {
	BiTree<char> tree0, tree1, tree2;
	cout << tree0.deep() << endl;
	cout << tree1.deep() << endl;
	cout << tree2.deep() << endl;
	return 0;
}