//表的数据元素的类型为整型，初始输入若干个数据元素，
//可以有相同值，删去值为x和y的数据元素
#include<iostream>
using namespace std;
int main(){
    int i,n,x,y,a[20];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>x>>y;
    for(i=0;i<n;i++)
        if(x!=a[i] && y!=a[i])
            cout<<a[i]<<" ";
    return 0;
}