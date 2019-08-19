//采用邻接矩阵表示无向图，完成图的创建、图的深度优先遍历、图的广度优先遍历操作。
//其中图的顶点信息是字符型，图中顶点序号按字符顺序排列

#include<iostream>
using namespace std;
const int MaxSize=10;
class MGraph{
public:
    MGraph(char a[],int n,int e);
    ~MGraph();
    void DFSTraverse(int v);
    void BFSTraverse(int v);
    void display();
private:
    char vertex[MaxSize];
    int visited[MaxSize];
    int arc[MaxSize][MaxSize];
    int vertexNum,arcNum;
};
MGraph::MGraph(char a[],int n,int e){
    vertexNum=n; arcNum=e;
    for(int i=0;i<vertexNum;i++)
        vertex[i]=a[i];
    for(int i=0;i<vertexNum;i++){
    	visited[i]=0;
        for(int j=0;j<vertexNum;j++)
            arc[i][j]=0;}
    for(int k=0;k<arcNum;k++){
        int i,j; cin>>i>>j;
        arc[i][j]=1;
        arc[j][i]=1;
    }
}
MGraph::~MGraph() {}
void MGraph::DFSTraverse(int v){
    if(!visited[v])
        cout<<vertex[v]<<" ";visited[v]=1;
    for(int i=0;i<vertexNum;i++)
        if(arc[v][i]==1&&visited[i]==0)
			DFSTraverse(i);
}
void  MGraph::BFSTraverse(int v){
    int front,rear;front=rear=-1;int Q[MaxSize];
    if(!visited[v])
        cout<<vertex[v]<<" "; visited[v]=1; Q[++rear]=v;
    while(front!=rear){
        v=Q[++front];
        for(int j=0;j<vertexNum;j++)
            if(arc[v][j]==1&&visited[j]==0){
                cout<<vertex[j]<<" ";
                visited[j]=1;
                Q[++rear]=j;
        }
    }
}
void MGraph::display(){
    for(int i=0;i<vertexNum;i++){
        for(int j=0;j<vertexNum;j++)
            cout<<arc[i][j]<<" ";
        cout<<endl;
    }
}
int main(){
    char a[MaxSize];int n,e;
    cin>>n>>e;
    for(int i=0;i<n;i++)
        cin>>a[i];
	MGraph graph0(a,n,e),graph1 = graph0;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    graph0.display();
    for(int i=0;i<n;i++)
        graph0.DFSTraverse(i);
    cout<<endl;
    for(int i=0;i<n;i++)
        graph1.BFSTraverse(i);
    return 0;
}