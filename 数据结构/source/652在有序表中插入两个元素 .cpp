//表中数据元素的数据类型为整型，按有序方式（从小到大）输入表中初始元素，
//再输入两个整数,以空格隔开，将两个整数插入到有序表中的正确位置
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,num,x,y;
    vector<int> V;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        V.push_back(num);
    }
    cin>>x>>y;
    V.push_back(x);V.push_back(y);
    sort(V.begin(), V.end());
    for(int i=0;i<(n+2);i++)
        cout<<V[i]<<" ";
    return 0;
}