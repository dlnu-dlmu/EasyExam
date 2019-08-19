//请创建一个一维整型数组用来存储待排序关键码，关键码从数组下标为1的位置开始存储，下标为0的位置不存储关键码。
//输入关键码的个数，以及各个关键码，采用归并排序的方法对关键码数组进行排序，输出每轮的中间过程

#include <iostream>
using namespace std;
void ME(int r[],int r1[],int s,int m,int t)
{
	int i,j,k;
	i=s;j=m+1;k=s;
	while(i<=m&&j<=t)
	{
		if(r[i]<=r[j])
			r1[k++]=r[i++];
		else
			r1[k++]=r[j++];
	}
	if(i<=m)
		while(i<=m)
			r1[k++]=r[i++];
		else
			while(j<=t)
				r1[k++]=r[j++];
}
void pass(int r[],int r1[],int n,int h)
{
	int i,k;
	i=1;
	while(i<=n-2*h+1)
	{
		ME(r,r1,i,i+h-1,i+2*h-1);
		i+=2*h;
	}
	if(i<n-h+1)
		ME(r,r1,i,i+h-1,n);
	else
		for(k=i;k<=n;k++)
			r1[k]=r[k];
		for(i=1;i<=n;i++)
			cout<<r1[i]<<" ";
}
void MERG(int r[],int r1[],int n)
{
	int h,i;
	h=1;
	while(h<n)
	{
		pass(r,r1,n,h);
		h=2*h;
		cout<<endl;
		pass(r1,r,n,h);
		h=2*h;
	cout<<endl;
	}
}
int main()
{
	int n,i,j,r[100],r1[100];
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>r[i];
	MERG(r,r1,n);
}
