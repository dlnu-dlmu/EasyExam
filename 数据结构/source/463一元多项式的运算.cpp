//已知一元多项式：A(x)=a0+a1x+a2x2+a3x3+….anxn, 
//B(x)= b0+b1x+b2x2+b3x3+….bmxm设计算法实现C(x)=A(x)+B(x)。
//功能包括输入多项式A，输入多项式B，求A和B的和，显示求和后的结果等操作

#include<iostream>
using namespace std;

struct Date{
	int coef;
	int exp;
	Date *next;
};

class Linklist{
public:
	Linklist();
	~Linklist();
	void insert_A();
	void insert_B();
	void sum_AB();
	void display();
private:
	Date* A_first,* B_first;
};

Linklist::Linklist(){
	A_first=new Date;
	A_first->next=NULL;
	B_first=new Date;
	B_first->next=NULL;
}

Linklist::~Linklist(){
	while(A_first!=NULL){
		Date* p=A_first;
		A_first=A_first->next;
		delete p;
	}
	while(B_first!=NULL){
		Date* q=B_first;
		B_first=B_first->next;
		delete q;
	}
}

void Linklist::insert_A(){
	int a,b;
	Date* p=A_first;
	cin>>a>>b;
	while(a!=0){
		Date* s=new Date;
		s->coef=a;s->exp=b;
		s->next=NULL;
		p->next=s;
		p=s;
		cin>>a>>b;
	}
}

void Linklist::insert_B(){
	int a,b;
	Date* p=B_first;
	cin>>a>>b;
	while(a!=0){
		Date* s=new Date;
		s->coef=a;s->exp=b;
		s->next=NULL;
		p->next=s;
		p=s;
		cin>>a>>b;
	}
}

void Linklist::display(){
	Date* p=A_first->next;
	while(p!=NULL){
		cout<<p->coef<<" "<<p->exp<<endl;
		p=p->next;
	}
}

void Linklist::sum_AB(){
	Date* P=A_first;Date*Q=B_first;
	Date* p=P->next;Date* q=Q->next;
	while(p!=NULL&&q!=NULL){
		if(p->exp<q->exp){
			P=p;
			p=p->next;
		}
		else if(p->exp>q->exp){
				Date* temp=q->next;
				Date* s=new Date;
				s->coef=q->coef;s->exp=q->exp;s->next=NULL;
				P->next=s;
				s->next=p;
				P=s;
				q=temp;
			}
		else{
			p->coef=p->coef+q->coef;
			if(p->coef==0){
				P->next=p->next;
				delete p;
				p=P->next;
			}
			else{
				P=p;
				p=p->next;
			}
			Q->next=q->next;
			delete q;
			q=Q->next;
		}
	}
	if(q!=NULL)
		P->next=q;
}

int main() {
	Linklist L;
	char choose;
	while(choose!='E'){
		cin>>choose;
		switch(choose){
		case'A':
			L.insert_A();
			break;
		case'B':
			L.insert_B();
			break;
		case'C':
			L.sum_AB();
			L.display();
			break;
		default:
			break;
		}
	}
	return 0;
}