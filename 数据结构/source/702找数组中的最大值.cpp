//表中数据元素的数据类型为整型，假设数组中没有重复元素
//找出数组中的最大值，并输出其下标和最大值
#include<iostream>
using namespace std;
int main(){
    int i,x,n,m;cin>>n;int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    m=a[0];
    for(i=0;i<n;i++)
        if(m<a[i]){
            m=a[i];x=i;
        }
    cout<<x<<" "<<m;
    return 0;
}