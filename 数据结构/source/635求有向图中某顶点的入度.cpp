//创建一个有向图结构，求某顶点的入度。要求有向图的顶点个数，边的条数，
//顶点的数据，各条边都由键盘读入，顶点的数据类型为字符型

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
		void display(int v); 
	private:
		VertexNode adjlist[MaxSize];
		int vertexNum, arcNum;
		int visited0[MaxSize], visited1[MaxSize];
};
ALGraph::ALGraph(char a[], int n, int e){
	int x,y;
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
		cin>>x>>y;
		ArcNode *s = new ArcNode();
		s->next = NULL;
		s->adjvex = y;
		s->next = adjlist[x].firstedge;
		adjlist[x].firstedge = s;
	}
}
void ALGraph::display(int v){
	int count = 0;
	ArcNode *p;
	for(int i = 0;i < vertexNum;i++){
		p = adjlist[i].firstedge;
		while(p != NULL){
			if(p->adjvex == v)
				count++;
			p = p->next;
		}
	}
	cout<<count<<endl;
}
int main(){	
	char a[MaxSize];
	int n,e,v;
	cin>>n>>e;
	for(int i = 0;i < n;i++)
		cin>>a[i];
	ALGraph graph(a, n, e);
	cin>>v;
	graph.display(v);
	return 0;
}

