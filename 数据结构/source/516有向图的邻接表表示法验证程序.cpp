//用邻接表表示有向图，完成图的创建、图的深度优先遍历、图的广度优先遍历操作。
//其中图的顶点信息是字符型，图中顶点序号按字符顺序排列，
//边的输入按照边的顶点序号从小到大的顺序排列，
//如下图的边的输入顺序为0 1，0 2，0 3，1 2，1 3，2 4，3 4共七条边，
//邻接表的边结点采用头插法

#include<iostream>
using namespace std;
const int MaxSize = 10;
struct ArcNode{
	int adjvex;
	ArcNode *next;
}; 
struct VertexNode{
	char vertex;
	ArcNode *firstedge;
};
class ALGraph{
	public:
		ALGraph(char a[], int n, int e);
		~ALGraph() {};
		void display();
		void DFSTraverse(int v);
		void BFSTraverse(int v);
	private:
		VertexNode adjlist[MaxSize];
		int vertexNum, arcNum;
		int visited0[MaxSize], visited1[MaxSize];
};
ALGraph::ALGraph(char a[], int n, int e){
	int b,c;
	vertexNum = n;
	arcNum = e;
	for(int i = 0;i < vertexNum;i++){
		visited0[i] = 0;
		visited1[i] = 0;
	}
	for(int i = 0;i < vertexNum;i++){
		adjlist[i].vertex = a[i];
		adjlist[i].firstedge = NULL;
	}
	for(int i = 0;i < arcNum;i++){
		cin>>b>>c;
		ArcNode *s = new ArcNode();
		s->next = NULL;
		s->adjvex = c;
		s->next = adjlist[b].firstedge;
		adjlist[b].firstedge = s;
	}
}
void ALGraph::DFSTraverse(int v){
	int j;
	if(!visited0[v]){
		cout<<adjlist[v].vertex<<" ";
		visited0[v] = 1;
	}
	
	ArcNode *p;
	p = adjlist[v].firstedge;
	while(p != NULL){
		j = p->adjvex;
		if(visited0[j] == 0){
			DFSTraverse(j);
		}
		p = p->next;
	}
}
void ALGraph::BFSTraverse(int v){
	int Q[vertexNum],front,rear,j;
	ArcNode *p;
	front = rear = -1;
	if(!visited1[v]){
		cout<<adjlist[v].vertex<<" ";
		visited1[v] = 1;
	}
	Q[++rear] = v;
	while(front != rear){
		v = Q[++front];
		p = adjlist[v].firstedge;
		while(p != NULL){
			j = p->adjvex;
			if(visited1[j] == 0){
				cout<<adjlist[j].vertex<<" ";
				visited1[j] = 1;
				Q[++rear] = j;
			}
			p = p->next;
		}
	}
}
void ALGraph::display(){
	for(int i = 0;i < vertexNum;i++)
		cout<<adjlist[i].vertex<<" ";
	ArcNode *p;
	cout<<endl;
	for(int i = 0;i < vertexNum;i++){
		cout<<adjlist[i].vertex<<" ";
		p = adjlist[i].firstedge;
		while(p != NULL){
			cout<<p->adjvex<<" ";
			p = p->next;
		}
		cout<<endl;
	}
	
}
int main(){	
	char a[MaxSize];
	int n,e; cin>>n>>e;
	for(int i = 0;i < n;i++)
		cin>>a[i];
	ALGraph m(a, n, e);
	m.display();
	for(int i = 0;i < n;i++)
		m.DFSTraverse(i);
	cout<<endl;
	for(int i = 0;i < n;i++)
		m.BFSTraverse(i);
	cout<<endl;
	return 0;
}
