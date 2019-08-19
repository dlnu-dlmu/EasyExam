//求二叉树节点个数 递归
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
	int nodes() { return nodes(root); }
private:
	BiNode<DataType> *root;
	BiNode<DataType> *Creat(BiNode<DataType> *bt);
	void Release(BiNode<DataType> *bt);
	int nodes(BiNode<DataType> *bt);
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
int BiTree<DataType>::nodes(BiNode<DataType> * bt) {
	if (bt == NULL) return 0;
	int lnodes = nodes(bt->lchild);
	int rnodes = nodes(bt->rchild);
	int count = lnodes + rnodes + 1;
	return count;
}

int main() {
	BiTree<char> tree;
	tree.nodes() == 0 ? cout << "NULL" : cout << tree.nodes();
	return 0;
}