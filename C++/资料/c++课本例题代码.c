C++面向对象程序设计例题代码
 /*#include <iostream>
using namespace std;
int main(){
cout<<"this is a c++ program.\n";
return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
int a,b,sum;
cin >>a >>b;
sum= a+b;
cout<<"a+b="<<sum<<endl;
return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
int max(int x,int y);
int a,b,c;
cin>>a >>b;
c=max(a,b);
cout<<"max="<<c<<endl;
return 0;
}
int max(int x,int y)
{
int z;
if(x>y)
z=x;
else
z=y;
return z;

}*/
/*#include <iostream>
using namespace std;
class Student
{
private:
	int num;
	int score;
public:
	void setdata()
	{
		cin>>num;
		cin>>score;
	}
	void display()
	{
		cout<<"num="<<num<<endl;
		cout<<"score="<<score<<endl;
	};
	
};
Student stud1,stud2;//定义stud1,stud2为student类的变量，称为对象
int main()
{
	stud1.setdata();
	stud2.setdata();
	stud1.display();
	stud2.display();
	return 0;
}
*/
/*#include <iostream>          //例1.6
using namespace std;
int max(int a,int b,int c)
{
	if(b>a)a=b;
	if(c>a)a=c;
	return a;
}
float max(float a,float b,float c)
{
	if(b>a)a=b;
	if(c>a)a=c;
	return a;
}
long max(long a,long b,long c)
{
	if(b>a)a=b;
	if(c>a)a=c;
	return a;
}
int main()
{
	int a,b,c;
	float d,e,f;
	long g,h,i;
	cin>>a>>b>>c;
	cin>>d>>e>>f;
	cin>>g>>h>>i;
	int m;
	m=max(a,b,c);
	cout<<"max_i="<<m<<endl;
	
	float n;
	n=max(d,e,f);
	cout<<"max_f="<<n<<endl;
	
	long p;
	p=max(g,h,i);
	cout<<"max_l="<<p<<endl;
	return 0;
}*/
/*#include  <iostream>          //例1.7
using namespace std;
int max(int a,int b,int c)
{
	if(b>a)a=b;
	if(c>a)a=c;
	return a;
}
int max(int a,int b)
{
	if(a>b)return a;
	else return b;
}
int main()
{
	int a=7,b=-4,c=9;
	cout<<max(a,b,c)<<endl;
	cout<<max(a,b)<<endl;
	return 0;
}*/
/*#include <iostream>     //例1.8
using namespace std;
template<typename T>    //此处不能有分号，课本有误
T max(T a,T b,T c)
{
	if(b>a)a=b;
	if(c>a)a=c;
	return a;
}
int main()
{
	int i1=8,i2=5,i3=6,i;
	double d1=56.9,d2=90.765,d3=43.1,d;
	long g1=67843,g2=-456,g3=78123,g;
	i=max(i1,i2,i3);
	d=max(d1,d2,d3);
	g=max(g1,g2,g3);
	cout<<"i_max="<<i<<endl;
	cout<<"d_max="<<d<<endl;
	cout<<"g_max="<<g<<endl;
	return 0;
}*/
/*#include <iostream>        //例1.12
using namespace std;
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;

}
int main()
{
	int i=3,j=5;
	swap(i,j);
	cout<<"i="<<i<<" "<<"j="<<j<<endl;
	return 0;

}*/
/*#include <iostream>     //1.13
using namespace std;
inline int max(int a,int b,int c)
{
	if(b>a)a=b;
	if(c>a)a=c;
	return a;
}

int main()
{
	int i=7,j=10,k=25,m;
	m=max(i,j,k);
	cout<<"max="<<m<<endl;
	return 0;
}*/
/*#include <iostream>       //1.14
using namespace std;
#define power(x) x*x       //简单的文本替换
int main()
{
	cout<<power(2)<<endl;
	cout<<power(1+1)<<endl;
	return 0;
}*/
/*#include <iostream>       //1.15
using namespace std;
inline int power (int x)
{
	return x*x;
}
int main()
{
	cout<<power(2)<<endl;
	cout<<power(1+1)<<endl;
	return 0;
}*/
/*#include <iostream>
using namespace std;
float a=13.5;
int main()
{
	int a=5;
	cout<<a<<endl;
	cout<<::a<<endl;
	return 0;
}*/
/*#include <iostream>   //1.17
#include <string>
using namespace std;
int main()
{
	string string1,string2,string3,temp;
	cout<<"please input three strings:";
	cin>>string1>>string2>>string3;
	if(string2>string3)
	{
		temp=string2;string2=string3;string3=temp;
	}      //交换
	if(string1<=string2)
		cout<<string1<<" "<<string2<<" "<<string3<<endl;
	else  if(string1<=string3)
		cout<<string2<<" "<<string1<<" "<<string3<<endl;
	else 
		cout<<string2<<" "<<string3<<" "<<string1<<endl;
	return 0;
}*/ 
/*#include <iostream> //1.18
#include <string.h>
using namespace std;
struct Student
{
	char name[10];
	int num;
	char sex;
};
int main()
{
	Student *p;
	p=new Student;
	strcpy(p->name,"Wang Fun");
	p->num=10123;
	p->sex='M';
	cout<<p->name<<" "<<p->num<<" "<<p->sex<<endl;
	delete p;
	return 0;
}*/
/*#include <iostream>      //2.1
using namespace std;
class Time
{
public:
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time tl;    //此处tl和书本上的表示更像t1，所以这里用字母表示，没有用数字，后面貌似应该都应该用数字 ，但是我还是用的字母，这里做个说明
	cin>>tl.hour;
	cin>>tl.minute;
	cin>>tl.sec;
	cout<<tl.hour<<":"<<tl.minute<<":"<<tl.sec<<endl;
	return 0;
}*/
/*#include <iostream>     //2.2 (a)
using namespace std;
class Time
{
public:
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time tl;
	cin>>tl.hour;
	cin>>tl.minute;
	cin>>tl.sec;
	cout<<tl.hour<<":"<<tl.minute<<":"<<tl.sec<<endl;
	Time t2;
	cin>>t2.hour;
	cin>>t2.minute;
	cin>>t2.sec;
	cout<<t2.hour<<":"<<t2.minute<<":"<<t2.sec<<endl;
	return 0;
}*/
/*#include <iostream>          //2.2 (b)
using namespace std;
class Time
{
	public:
		int hour;
		int minute;
		int sec;			
};
int main()
{
	void set_time(Time&);
	void show_time(Time&);
	Time tl;
	set_time(tl);
	show_time(tl);
	Time t2;
	set_time(t2);
	show_time(t2);
	return 0;
}
void set_time(Time&t)
{
	cin>>t.hour;
	cin>>t.minute;
	cin>>t.sec;
}
void show_time(Time&t)
{
	cout<<t.hour<<":"<<t.minute<<":"<<t.sec<<endl;
}*/
/*#include <iostream>      //2.3
using namespace std;
class Time
{
public:
	void set_time();
	void show_time();
private:
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time tl;
	tl.set_time();
	tl.show_time();
	Time t2;
	t2.set_time();
	t2.show_time();
	return 0;
}
void Time ::set_time()
{
	cin>>hour;
	cin>>minute;
	cin>>sec;
}
void Time::show_time()
{
	cout<<hour<<":"<<minute<<":"<<sec<<endl;
}*/
/*#include <iostream>       //2.4
using namespace std;
class Array_max
{
public:
	void set_value();
	void max_value();
	void show_value();
private:
	int array[10];
	int max;
};
void Array_max::set_value()
{
	int i;
	for(i=0;i<10;i++)
		cin>>array[i];
}
void Array_max::max_value() 
{
	int i;
	max=array[0];
	for(i=1;i<10;i++)
	{
		if(array[i]>max)
			max=array[i];
	}
}
void Array_max ::show_value()
{
	cout<<"max="<<max;
}
int main()
{
	Array_max arrmax;
	arrmax.set_value();
	arrmax.max_value();
	arrmax.show_value();
	return 0;
}*/
/*#include <iostream>        //3.1
using namespace std;
class Time
{
public:
	Time()
	{
		 hour=0;
		 minute=0;
		 sec=0;
	}

	void set_time();
	void show_time();
private:
	int hour;
	int minute;
	int sec;
};
void Time::set_time()
{
	cin>>hour;
	cin>>minute;
	cin>>sec;
}
void Time::show_time()
{
	cout<<hour<<":"<<minute<<":"<<sec<<endl;
}
int main()
{
	Time tl;
	tl.set_time();
	tl.show_time();
	Time t2;
	t2.show_time();
	return 0;
}*/
/*#include <iostream>       //3.2
using namespace std;
class Box
{
public:
	Box (int,int,int);
	int volume();
private:
	int height;
	int width;
	int length;
};
Box::Box(int h,int w,int l)
{
	height=h;
	width=w;
	length=l;
}
int Box::volume()
{
	return(height*width*length);
}
int main()
{
	Box box1(12,25,30);
	cout<<"The volume of box1 is "<<box1.volume()<<endl;
	Box box2(15,30,21);
	cout<<"The volume of box2 is "<<box2.volume()<<endl;
	return 0;
}*/
/*#include <iostream>    //3.3
using namespace std;
class Box
{
public:
	Box();
 	Box(int h,int w,int len):height(h),width(w),length(len){}
	int volume();
private:
	int height;
	int width;
	int length;
};
Box::Box()
{
	height=10;
	width=10;
	length=10;
}
int Box::volume()
{
	return (height*width*length);
}
int main()
{
	Box boxl;
	cout<<"The volume of boxl is "<<boxl.volume()<<endl;
	Box box2(15,30,25);
	cout<<"The volume of box2 is "<<box2.volume()<<endl;
}*/
/*#include <iostream>      //3.4
using namespace std;
class Box
{
public:
	Box(int h=10,int w=10,int len=10);
	int volume();
private:
	int height;
	int width;
	int length;
};
Box::Box(int h,int w,int len)
{
	height=h;
	width=w;
	length=len;
}
int Box::volume()
{
	return(height*width*length);
}
int main()
{
	Box boxl;
	cout<<"The volume of boxl is "<<boxl.volume()<<endl;
	Box box2(15);
	cout<<"The volume of box2 is "<<box2.volume()<<endl;
	Box box3(15,30);
	cout<<"The volume of box3 is "<<box3.volume()<<endl;
	Box box4(15,30,20);
	cout<<"The volume of box4 is "<<box4.volume()<<endl;
	return 0;
}*/
/*#include <iostream>      //3.5
#include <string>
using namespace std;
class Student
{
public:
	Student(int n,string nam,char s)          //此处课本有误，student首字母要大写，构造函数~！~！
	{
		num=n;
		name=nam;
		sex=s;
		cout<<"Constructor called."<<endl;
	}
	~Student()
	{
		cout <<"Destructor called."<<endl;
	}
	void dispaly()
	{
		cout<<"num: "<<num<<endl;
		cout<<"name: "<<name<<endl;
		cout<<"sex: "<<sex<<endl;
	}
private:
	int num;
	string name;
	char sex;
};
int main()
{
	Student studl(10010,"Wang_li",'f');
	studl.dispaly();
	Student stud2(10011,"Zhang_fun",'m');
	stud2.dispaly();
	return 0;
}*/
/*#include <iostream>      //3.6
using namespace std;
class Box
{
public:
	Box(int h=10,int w=12,int len=15):height(h),width(w),length(len){}
	int volume();
private:
	int height;
	int width;
	int length;
};
int Box::volume()
{
	return(height*width*length);
}
int main()
{
	Box a[3]={
	Box(10,12,15),
	Box(15,18,20),
	Box(16,20,26)};
	cout<<"volume of a[0] is "<<a[0].volume()<<endl;
	cout<<"volume of a[1] is "<<a[1].volume()<<endl;
	cout
	<"volume of a[2] is "<<a[2].volume()<<endl;
	return 0;     //课本上少了return 0;建议加上，养成好习惯
}*/
/*#include <iostream>       //3.7
using namespace std;
class Time
{
public:
	Time(int ,int ,int);
	int hour;
	int minute;
	int sec;
	void get_time();
};
Time::Time(int h,int m,int s)
{
	hour=h;
	minute=m;
	sec=s;
}
void Time::get_time()
{
	cout<<hour<<";"<<minute<<":"<<sec<<endl;
}
int main()
{
	Time tl(10,13,56);
	int *pl=&tl.hour;
	cout<<*pl<<endl;
	tl.get_time();
	Time *p2=&tl;
	p2->get_time();
	void (Time::*p3)();
	p3=&Time::get_time;
	(tl.*p3)();
	return 0;             //自行添加
}*/
/*#include <iostream>       //3.8
using namespace std;
class Time
{
public:
	Time(int,int,int);
	int hour;
	int minute;
	int sec;
};
Time::Time(int h,int m,int s)
{
	hour=h;
	minute=m;
	sec=s;
}
void fun(Time &t)     //形参t是Time类对象的引用
{
	t.hour=18;
}
int main()
{
	Time tl(10,13,56);
	fun(tl);
	cout<<tl.hour<<endl;
	return 0;
}*/
/*#include <iostream>         //3.9
using namespace std;
class Box
{
public:
	Box(int=10,int=10,int=10);
	int volume();
private:
	int height;
	int width;
	int length;
};
Box::Box(int h,int w,int len)
{
	height=h;
	width=w;
	length=len;
}
int Box::volume()
{
	return(height*width*length);
}
int main()
{
	Box boxl(15,30,25),box2;
	cout<<"The volume of boxl is "<<boxl.volume()<<endl;
	box2=boxl;
	cout<<"The volume of box2 is "<<box2.volume()<<endl;
	return 0;

}*/
/*#include <iostream>           //3.10
using namespace std;
class Box
{
public:
	Box(int,int);
	int volume();
	static int height;
	int width;
	int length;
};
Box::Box(int w,int len)
{
	width=w;
	length=len;
}
int Box::volume()
{
	return(height*width*length);
}
int Box::height=10;
int main()
{ 
	Box a(15,20),b(20,30);
	cout<<a.height<<endl;
	cout<<b.height<<endl;
	cout<<Box::height<<endl;
	cout<<a.volume()<<endl;
	return 0;

}*/
/*#include <iostream>    //3.11                            
using namespace std;
class Student
{
public:
	Student(int n,int a,float s):num(n),age(a),score(s){}
	void total();
	static float average();
private:
	int num;
	int age;
	float score;
	static float sum;
	static int count;
};
void Student::total()
{
	sum+=score;
	count++;
}
float Student::average()
{
	return (sum/count);
}
float Student::sum=0;
int Student::count=0;
int main()
{
	Student stud[3]={
	Student(1001,18,70),
	Student(1002,19,78),
	Student(1005,20,98)
	};
	int n;
	cout<<"please input the number of students:";
	cin>>n;
	for(int i=0;i<n;i++)
		stud[i].total();
	cout<<"the average score of "<<n <<"students is"<<Student::average()<<endl;        //输出结果应该为82，书本上结果错误
	return 0;
}*/
/*#include <iostream>           //3.12
using namespace std;
class Time
{
public:
	Time(int,int,int);
	friend void display(Time &);
private:
	int hour;
	int minute;
	int sec;
};
Time::Time(int h,int m,int s)
{
	hour=h;
	minute=m;
	sec=s;
}
void display(Time &t)
{
	cout<<t.hour<<":"<<t.minute<<":"<<t.sec<<endl;
}
int main()
{
	Time tl(10,13,56);
	display(tl);
	return 0;
}*/
/*#include <iostream>           //3.13
using namespace std;
class Date;
class Time
{
public:
	Time(int,int,int);
	void display(Date &);
private:
	int hour;
	int minute;
	int sec;
};
class Date
{
public:
	Date(int,int,int);
	friend void Time::display(Date &);
private:
	int month;
	int day;
	int year;
};
Time::Time(int h,int m,int s)
{
	hour=h;
	minute=m;
	sec=s;
}
void Time::display(Date &d)
{
	cout<<d.month<<"/"<<d.day<<"/"<<d.year<<endl;
	cout<<hour<<":"<<minute<<":"<<sec<<endl;
}
Date::Date(int m,int d,int y)
{
	month=m;
	day=d;
	year=y;
}
int main()
{
	Time tl(10,13,56);
	Date dl(12,25,2004);
	tl.display(dl);
	return 0;
}*/
/*#include <iostream>       //3.14
using namespace std;
template <class numtype>
class Compare
{
	public:
		Compare(numtype a,numtype b)
		{
			x=a;y=b;
		}
		numtype max()
		{
			return (x>y)?x:y;
		}
		numtype min()
		{
			return (x<y)?x:y;
		}
	private:
		numtype x,y;
};
int main()
{
	Compare <int> cmpl(3,7);
	cout<<cmpl.max()<<"is the Maximum of two integer numbers."<<endl;
	cout<<cmpl.min()<<"is the Minimum of two integer numbers."<<endl<<endl;
	Compare <float> cmp2(45.78,93.6);
	cout<<cmp2.max()<<"is the Maximum of two integer numbers."<<endl;
	cout<<cmp2.min()<<"is the Minimum of two integer numbers."<<endl<<endl;
	Compare <char> cmp3('a','A');
	cout<<cmp3.max()<<"is the Maximum of two integer numbers."<<endl;
	cout<<cmp3.min()<<"is the Minimum of two integer numbers."<<endl<<endl;
	return 0;
}*/
/*#include <iostream>         //4.1
using namespace std;
class Complex
{
public:
	Complex()
	{
		real=0;imag=0;
	}
	Complex(double r,double i)
	{
		real=r;imag=i;
	}
	Complex  complex_add(Complex &c2);    //声明一个函数，返回值是一个类，形参也是一个类
	void display();
private:  
	double real;
	double imag;
};
Complex Complex::complex_add(Complex &c2)
{ 
	Complex c;
	c.real=real+c2.real;
	c.imag=imag+c2.imag;
	return c;
}
void Complex::display()
{
	cout<<"("<<real<<","<<imag<<"i)"<<endl;
}
int main()
{
	Complex cl(3,4),c2(5,-10),c3;
	c3=cl.complex_add(c2);
	cout<<"cl=";cl.display();
	cout<<"c2=";c2.display();
	cout<<"cl+c2=";c3.display();   
	return 0;

}*/
/*#include <iostream>     //4.2
using namespace std;
class Complex
{
public:
	Complex()
	{
		real=0;
		imag=0;
	}
	Complex(double r,double i)
	{
		real=r;
		               imag=i;
	}
	Complex operator + (Complex &c2);
	void display();
private:
	double real;
	double imag;
};
Complex Complex::operator +(Complex &c2)
{
	Complex c;
	c.real=real+c2.real;
	c.imag=imag+c2.imag;
	return c;
}
void Complex::display()
{
	cout<<"("<<real<<","<<imag<<"i)"<<endl;
}
int main()
{
	Complex cl(3,4),c2(5,-10),c3;
	c3=cl+c2;
	cout<<"cl=";cl.display();
	cout<<"c2=";c2.display();
	cout<<"c3=";c3.display();
	return 0;
}*/
/*#include <iostream.h>     //4.3
//#include <iostream>      //此处必须修改，不然无法运行，用.h代替后面这2行，课本129有说明
//using namespace std;
class Complex
{
public:
	Complex()
	{
		real=0;
		imag=0;
	}
	Complex(double r,double i)
	{
		real=r;imag=i;
	}
	friend Complex operator+(Complex &cl,Complex &c2);
	void dispaly();
private:
	double real;
	double imag;
};
Complex operator+(Complex &cl,Complex &c2)
{
	return Complex(cl.real+c2.real,cl.imag+c2.imag);
}
void Complex::dispaly()
{
	cout<<"("<<real<<","<<imag<<"i)"<<endl;
}
int main()
{
	Complex cl(3,4),c2(5,-10),c3;
	c3=cl+c2;
	cout<<"cl=";cl.dispaly();
	cout<<"c2=";c2.dispaly();
	cout<<"cl+c2=";c3.dispaly();
	return 0;
}*/
/*#include <iostream.h>              //4.4
#include <string>
//using namespace std;
class String
{
public:
	String()
	{
		p=NULL;
	}
	String(char *str);
	friend bool operator > (String &stringl,String &string2);
	friend bool operator < (String &stringl,String &string2);
	friend bool operator== (String &stringl,String &string2);
	void display();
private:	
	char*p;
};
String::String(char *str)
{
	p=str;
}
void String::display()
{
	cout<<p;
}
bool operator >(String &stringl,String &string2)
{
	if(strcmp(stringl.p,string2.p)>0)
		return true;
	else 
		return false;
}
bool operator <(String &stringl,String &string2)
{
	if(strcmp(stringl.p,string2.p)<0)
		return true;
	else 
		return false;
}
bool operator==(String &stringl,String &string2)
{
	if(strcmp(stringl.p,string2.p)==0)
		return true;
	else 
		return false;

}
void compare(String &stringl,String &string2)
{
	if((stringl>string2)==1)   //此行和课本上不一样，课本上是调用函数，我直接是重载运算符，其实都是调用重载函数，但是这样写简单点，后面2个也可以改成类似的
	{
		stringl.display();cout<<">";string2.display();
	}
	else
		if(operator<(stringl,string2)==1)
		{
			stringl.display();cout<<"<";string2.display();
		}
	else
		if(operator==(stringl,string2)==1)
		{
		stringl.display();cout<<"=";string2.display();
		}
		cout<<endl;
}
int main()
{
	String stringl("Hello"),string2("Book"),string3("Computer"),string4("Hello");
	compare(stringl,string2);
	compare(string2,string3);
	compare(stringl,string4);
	//cout<<(stringl>string2)<<endl;
	//cout<<(stringl<string3)<<endl;
	//cout<<(stringl==string2)<<endl;
	//stringl.display();
	//cout<<endl;
	//string2.display();
	return 0;
}*/
/*#include <iostream>      //4.5
using namespace std;
class Time
{
public:
	Time()
	{
		minute=0;
		sec=0;
	}
	Time(int m,int s):minute(m),sec(s){}
	Time operator ++();
	void display()
	{
		cout<<minute<<":"<<sec<<endl;
	}
private:
	int minute;
	int sec;
};
Time Time::operator ++()
{
	if(++sec>=60)
	{
		sec-=60;
		++minute;
		return *this;
	}
}
int main()
{
	Time timel(34,0);
	for(int i=0;i<61;i++)
	{
		++timel;
		timel.display();

	}
	return 0;
}*/
/*#include <iostream>        //4.6
using namespace std;
class Time
{
public:
	Time()
	{
		minute=0;sec=0;
	}	
	Time(int m,int s):minute(m),sec(s){}
	Time operator ++();
	Time operator ++(int);
	void display()
	{
		cout<<minute<<":"<<sec<<endl;
	}
private:
	int minute;
	int sec;
};
Time Time::operator ++()
{
	if(++sec>=60)
	{
		sec-=60;
		++minute;
		return *this;
	}
}
Time Time::operator ++(int)
{
	Time temp(*this);//fuzhi?
	sec++;
	if(sec>=60)
	{
		sec-=60;
		++minute;
	}
	return temp;
}
int main()
{
	Time timel(34,59),time2;
	cout<<"timel:";
	timel.display();
	++timel;
	cout<<"++timel:";
	timel.display();
	time2=timel++;
	cout<<"timel++:";
	timel.display();
	cout<<"time2:";
	time2.display();
}*/
/*#include <iostream.h>       //4.7
//using namespace std;    //上一行加.h，去掉这一行
class Complex
{
public:
	Complex()
	{
		real=0;imag=0;
	}
	Complex(double r,double i)
	{
		real=r;imag=i;
	}
	Complex operator +(Complex &c2);
	friend ostream & operator <<(ostream &,Complex &);
private:
	double real;
	double imag;
};
Complex Complex::operator +(Complex &c2)
{
	return Complex (real +c2.real,imag+c2.imag);
}
ostream& operator<<(ostream& output,Complex &c)
{
	output<<"("<<c.real<<"+"<<c.imag<<"i)"<<endl;
	return output;
}
int main()
{
	Complex cl(2,4),c2(6,10),c3;
	c3=cl+c2;
	cout<<c3;
	return 0;
}*/
/*#include <iostream.h>     //4.8
//using namespace std;
class Complex
{
public:
	friend ostream& operator <<(ostream&,Complex &c);
	friend istream& operator >>(istream&,Complex &c);
private:
	double real;
	double imag;
};
ostream &operator<<(ostream &output,Complex &c)
{
	output<<"("<<c.real;
	if(c.imag>=0)                  //修改，如果虚部有负数，则不输出“+”号
		output<<"+";
	output<<c.imag<<"i)";
	return output;
}
istream &operator >>(istream &input,Complex &c)
{
	cout<<"input real part and imaginary part of complex number:";
	input>>c.real>>c.imag;
	return input;
}
int main()
{
	Complex cl,c2;
	cin>>cl>>c2;
	cout<<"cl="<<cl<<endl;
	cout<<"c2="<<c2<<endl;
	return 0;
}*/
/*#include <iostream>   //4.9
using namespace std;
class Complex
{
public:
	Complex()
	{
		real=0;imag=0;
	}
	Complex(double r,double i)
	{
		real=r;imag=i;
	}
	operator double()
	{
		return real;
	}
private:
	double real;
	double imag;
};
int main()
{
	Complex cl(3,4),c2(5,-10),c3;
	double d;
	d=2.5+cl;
	cout<<d<<endl;
	return 0;
} */
/*#include <iostream.h>     //4.10
//using namespace std;        //用有缘函数的时候，必须不能有这一行，而且要用.h，就是VC++6.0的问题~！~！~！
class Complex
{
public:
	Complex()
	{
		real=0;imag=0;
	}
	Complex(double r)
	{
		real=r;imag=0;
	}
	Complex(double r,double i)
	{
		real=r;imag=i;
	}
	friend Complex operator +(Complex cl,Complex c2);
	void display();
private:
	double real;
	double imag;
};
Complex operator +(Complex cl,Complex c2)
{
	return Complex(cl.real+c2.real,cl.imag+c2.imag);
}
void Complex::display()
{
	cout<<"("<<real<<","<<imag<<"i)"<<endl;
}
int main()
{
	Complex cl(3,4),c2(5,-10),c3;
	c3=cl+2.5;
	c3.display();
	return 0;
}*/
/*#include <iostream>               //5.1
#include <string>
using namespace std;
class Student
{
public:
	void get_value()
	{
		cin>>num>>name>>sex;
	}
	void display()
	{
		cout<<"num:"<<num<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"sex:"<<sex<<endl;
	}
	private:
		int num;
		string name;
		char sex;
};
class Student1:public Student
{
public:
	void display_1()
	{
		//cout<<"num:"<<num<<endl;
		//cout<<"name:"<<name<<endl;
		//cout<<"sex:"<<sex<<endl;
		cout<<"age:"<<age<<endl;
		cout<<"address:"<<addr<<endl;
	}
private:
	int age=20;
	string addr=湖北天门;
};
int main()
{
	Student1 stud;
	stud.get_value();
	stud.display();
	stud.display_1();
	return 0;
}*/
/*#include <string>               //5.3
#include <iostream>
using namespace std;
class Student
{
public:
	void display();
protected:
	int num;
	string name;
	char sex;
};
void Student::display()
{
	cout<<"num:"<<num<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl;
}
class Studentl:protected Student
{
public:
	void display();
private:
	int age;
	string addr;
};
void Studentl::display()
{
	cout<<"num:"<<num<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl;
	cout<<"age:"<<age<<endl;
	cout<<"address:"<<addr<<endl;
}
int main()
{
	Studentl studl;
	studl.display();
//	studl.num=10023;
	return 0;
}*/
/*#include <iostream>      //5.5
#include <string>
using namespace std;
class Student
{
public:
	Student(int n,string nam,char s)
	{
		num=n;
		name=nam;
		sex=s;
	}
	~Student(){}
protected:
	int num;
	string name;
	char sex;
};
class Student1: public Student
{
public:
	Student1(int n,string nam,char s,int a,string  ad):Student(n,nam,s)
	{
		age=a;
		addr=ad;
		//num=n;
		//name=nam;
		//sex=s;
	}
	void show()
	{
		cout<<"num:"<<num<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"sex:"<<sex<<endl;
		cout<<"age:"<<age<<endl;
		cout<<"address:"<<addr<<endl<<endl;
	}
	~Student1(){}
private:
	int age;
	string addr;
};
int main()
{
	Student1 studl(10010,"Wang-li",'f',19,"115 Beijing Road,Shanghai");
	Student1 stud2(10011,"Zhang-fun",'m',21,"213 Shanghai Road,Beijing");
	studl.show();
	stud2.show();
	return 0;
}*/
/*#include <iostream>  //5.6
#include <string>
using namespace std;
class Student
{
public:
	Student(int n,string nam)
	{
		num=n;
		name=nam;
	}
	void display()
	{
		cout<<"num:"<<num<<endl<<"name:"<<name<<endl;
	}
protected:
	int num;
	string name;
};
class Studentl:public Student
{
public:
	Studentl(int n,string nam,int nl,string naml,int a,string ad):
	  Student(n,nam),monitor(nl,naml)
	  {
		  age=a;
		  addr=ad;
	  }
	  void show()
	  {
		  cout<<"This student is:"<<endl;
		  display();
		  cout<<"age:"<<age<<endl;
		  cout<<"address:"<<addr<<endl<<endl;
	  }
	  void show_monitor()
	  {
		  cout<<endl<<"Class monitor is:"<<endl;
		  monitor.display();
	  }
private:
	Student monitor;
	int age;
	string addr;
};
int main()
{
	Studentl studl(10010,"Wang-li",10001,"li-sun",19,"115 Beijing Road,Shanghai");
	studl.show();
	studl.show_monitor();
	return 0;
}*/
/*#include <iostream>            //5.7
#include <string>
using namespace std;
class Student
{
public:
	Student(int n,string nam)
	{
		num=n;
		name=nam;
	}
	void display()
	{
		cout<<"num:"<<num<<endl;
		cout<<"name:"<<name<<endl;
	}
protected:
	int num;
	string name;
};
class Studentl:public Student
{
public:
	Studentl(int n,string nam,int a):Student(n,nam)
	{
		age=a;
	}
	void show()
	{
		display();
		cout<<"age:"<<age<<endl;
	}
private:
	int age;
};
class Student2:public Studentl
{
public:
	Student2(int n,string nam,int a,int s):Studentl(n,nam,a)
	{
		score=s;
	}
	void show_all()
	{
		show();
		cout<<"score:"<<score<<endl;
	}
private:
	int score;
};
int main()
{
	Student2 stud(10010,"li",17,89);
	stud.show_all();
	return 0;                          
}*/
/*#include <iostream>               //5.8,此题课本有误哦~~我也不知道错哪里了，但是我给它改正对了
#include <string>
using namespace std;
class Teacher
{
public:
	Teacher(string nam,int a,string t)
	{
		name=nam;
		age=a;
		title=t;
	}
	void display()
	{
		cout<<"name:"<<name<<endl;
		cout<<"age"<<age<<endl;
		cout<<"title:"<<title<<endl;
	}
protected:
	string name;
	int age;
	string title;
};
class Student
{
public:
	Student(string nam,char s,float sco)          //此处将char nam[]改为string nam
	{
		namel=nam;                                //此处 将strcpy(namel,nam);改为namel=nam;       //只有这样改完之后，才正确~！课本貌似有误~
		sex=s;
		score=sco;
	}
	void displayl()
	{
		cout<<"name:"<<namel<<endl;
		cout<<"sex:"<<sex<<endl;
		cout<<"score:"<<score<<endl;
	}
protected:
	string namel;
	char sex;
	float score;
};
class Graduate:public Teacher,public Student
{
public:
	Graduate(string nam,int a,char s,string t,float sco,float w):
	  Teacher(nam,a,t),Student(nam,s,sco),wage(w){}
	  void show()
	  {
		  cout<<"name:"<<name<<endl;
		  cout<<"age:"<<age<<endl;
		  cout<<"sex:"<<sex<<endl;
		  cout<<"score:"<<score<<endl;
		  cout<<"title:"<<title<<endl;
		  cout<<"wages:"<<wage<<endl;
	  }
private:
	float wage;
};
int main()
{
	Graduate gradl("Wang-li",24,'f',"assistant",89.5,1234.5);
	gradl.show();
	return 0;
}*/
/*#include<iostream>            //5.9
#include<string>
using namespace std;
class Person
{
public :
	Person (string nam,char s,int a)
	{
		name=nam;sex=s;age=a;
	}
protected:
	string name;
	char sex;
	int age;
};
class Teacher:virtual public Person
{
public:
	Teacher(string nam,char s,int a,string t):Person(nam,s,a)
	{
		title=t;
	}
protected:
	string title;
};
class Student:virtual public Person
{
public:
	Student(string nam,char s,int a,float sco):
	  Person(nam,s,a),score(sco){}
protected:
	float score;
};
class Graduate:public Teacher,public Student
{public:
	Graduate(string nam,char s,int a,string t,float sco,float w):
	Person(nam,s,a),Teacher(nam,s,a,t),Student(nam,s,a,sco),wage(w){}
	void show()
	{
		cout<<"name:"<<name<<endl;
		cout<<"age:"<<age<<endl;
		cout<<"sex:"<<sex<<endl;
		cout<<"score:"<<score<<endl;
		cout<<"title:"<<title<<endl;
		cout<<"wages:"<<wage<<endl;
	}
private:
	float wage;
};
int main()
{
	Graduate gradl("Wang-li",'f',24,"assistant",89.5,1234.5);
	gradl.show();
	return 0;
}*/
/*#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
	Student(int,string,float);
	void display();
private:
	int num;
	string name;
	float score;
};
Student::Student(int n,string nam,float s)
{
	num=n;
	name=nam;
	score=s;
}
void Student::display()
{
	cout<<endl<<"num:"<<num<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"score:"<<score<<endl;
}
class Graduate:public Student
{
public:
	Graduate(int,string,float,float);
	void display();
private:
	float pay;
};
Graduate::Graduate(int n,string nam,float s,float p):Student(n,nam,s),pay(p){}
void Graduate::display()
{
	Student::display();
	cout<<"pay="<<pay<<endl;
}
int main()
{
	Student studl(1001,"Li",87.5);
	Graduate gradl(2001,"Wang",98.5,563.5);
	Student *pt=&studl;
	pt->display();
	pt=&gradl;
	pt->display();
}*/
/*#include <iostream.h>             //6.1
class Point
{
public:
	Point(float x=0,float y=0);
	void setPoint(float,float);
	float getX() const{return x;}
	float getY() const{return y;}
	friend ostream & operator<< (ostream &,const Point &);
protected:
	float x,y;
};
Point::Point(float a,float b)
{
	x=a;y=b;
}
void Point::setPoint(float a,float b)
{
	x=a;y=b;
}
ostream &operator << (ostream & output,const Point &p)
{
	output<<"["<<p.x<<","<<p.y<<"]"<<endl;
	return output;
}
class Circle:public Point
{
public:
	Circle(float x=0,float y=0,float r=0);
	void setRadius(float);
	float getRadius() const;
	float area() const;
	friend ostream & operator <<(ostream &,const Circle &);
protected://       课本上用 private:封装，但是后面要调用属性，所以编译的时候错误了，我改成了，protected:输出结果和课本一样。
	float radius;
};
Circle::Circle (float a,float b,float r):Point(a,b),radius(r){}
void Circle::setRadius(float r)
{
	radius=r;
}
float Circle::getRadius()const{return radius;}
float Circle::area()const
{
	return 3.14159*radius*radius;
}
ostream & operator <<(ostream &output,const Circle &c)
{
	output<<"Center=["<<c.x<<","<<c.y<<"],r="<<c.radius<<",area="<<c.area()<<endl;
	return output;
}
class Cylinder:public Circle
{
public:
	Cylinder(float x=0,float y=0,float r=0,float h=0);
	void setHeight(float);
	float getHeight()const;
	float area()const;
	float volume()const;
	friend ostream & operator <<(ostream&,const Cylinder&);
protected:
	float height;
};
Cylinder::Cylinder(float a,float b,float r,float h):Circle(a,b,r),height(h){}
void Cylinder::setHeight(float h){height=h;}
float Cylinder::getHeight()const{return height;}
float Cylinder::area()const
{
	return 2*Circle::area()+2*3.14159*radius*height;
}
float Cylinder::volume()const
{
	return Circle::area()*height;
}
ostream &operator <<(ostream &output ,const Cylinder &cy)
{
	output<<"Center=["<<cy.x<<","<<cy.y<<"],r="<<cy.radius<<",h="<<cy.height
		<<"\narea="<<cy.area()<<",volume="<<cy.volume()<<endl;
	return output;
}*/
/*int main()            //最终的主函数~！
{
	Cylinder cyl(3.5,6.4,5.2,10);
	cout<<"\noriginal cylinder:\nx="<<cyl.getX()<<",y="<<cyl.getY()<<",r="
		<<cyl.getRadius()<<",h="<<cyl.getHeight()<<"\narea="<<cyl.area()
		<<",volume="<<cyl.volume()<<endl;
	cyl.setHeight(15);
	cyl.setRadius(7.5);
	cyl.setPoint(5,5);
	cout<<"\nnew cylinder:\n"<<cyl;
	Point & pRef=cyl;
	cout<<"\npRef as a Point:"<<pRef;
	Circle & cRef=cyl;
	cout<<"\ncRef as a Circle:"<<cRef;
	return 0;
}*/
/*int main()  //第2个测试主函数 
{
	Circle c(3.5,6.4,5.2);
	cout<<"original circle:\nx="<<c.getX()<<",y="<<c.getY()<<",r="<<c.getRadius()<<",area="<<c.area()<<endl;
	c.setRadius(7.5);
	c.setPoint(5,5);
	cout<<"new circle:\n"<<c;
	Point & pRef=c;
	cout<<"pRef:"<<pRef;
	return 0;
}*/
/*int main()        //第一个测试主函数
{
	Point p(3.5,6.4);
	cout<<"x="<<p.getX()<<",y="<<p.getY()<<endl;
	p.setPoint(8.5,6.8);
	cout<<"p(new):"<<p<<endl;
	return 0;
}*/
/*#include <iostream>                //6.2
#include <string>
using namespace std;
class Student
{
public:
	Student(int ,string, float);
	virtual void display();             //修改之后
protected:
	int num;
	string name;
	float score;
};
Student::Student(int n,string nam,float s)
{
	num=n;name=nam;score=s;
}
void Student::display()
{
	cout<<"num:"<<num<<"\nname:"<<name<<"\nscore:"<<score<<"\n\n";
}
class Graduate:public Student
{
public:
	Graduate(int,string,float,float);
	void display();
private:
	float pay;
};
void Graduate::display()
{
	cout<<"num:"<<num<<"\nname:"<<name<<"\nscore:"<<score<<"\npay="<<pay<<endl;
}
Graduate::Graduate(int n,string nam,float s,float p):Student(n,nam,s),pay(p){}
int main()
{
	Student studl(1001,"Li",87.5);
	Graduate gradl(2001,"Wang",98.5,563.5);
	Student *pt=&studl;
	pt->display();
	pt=&gradl;
	pt->display();
	return 0;
}*/
/*#include <iostream>      //6.3
using namespace std;
class Point
{
public:
	Point(){}
	virtual ~Point(){cout<<"executing Point destructor"<<endl;} //修改后
};
class Circle:public Point
{
public:
	Circle(){}
	~Circle(){cout<<"executing Circle destructor"<<endl;}
private:
	int radius;
};
int main()
{
	Point *p=new Circle;
	delete p;
	return 0; 

}*/
/*#include <iostream.h>
//using namespace std;
class Shape
{
public:
	virtual float area()const {return 0.0;}       //虚函数
	virtual float volume()const{return 0.0;}      //虚函数
	virtual void shapeName()const =0;             //纯虚函数
};
class Point:public Shape
{
public:
	Point (float =0,float=0);
	void setPoint(float,float);
	float getX()const{return x;}
	float getY()const{return y;}
	virtual void shapeName()const {cout<<"Point:";}
	friend ostream & operator<<(ostream &,const Point &);
protected:
	float x,y;
};
Point::Point(float a,float b)
{
	x=a;y=b;
}
void Point::setPoint(float a,float b)
{
	x=a;y=b;
}
ostream &operator <<(ostream & output,const Point &p)
{
	output<<"["<<p.x<<","<<p.y<<"]";
	return output;
}
class Circle:public Point
{
public:
	Circle (float x=0,float y=0,float r=0);
	void setRadius(float);
	float getRadius()const;
	virtual float area()const;
	virtual void shapeName()const{cout<<"Circle:";}
	friend ostream &operator <<(ostream &,const Circle &);
protected:
	float radius;
};
Circle::Circle(float x,float y,float r):Point(x,y),radius(r){}
void Circle::setRadius(float r)         // : radius(r){} 貌似这种赋值必须要有//using namespace std;这句，但是友元函数又必须用.h的头文件
{radius=r;}
float Circle::getRadius()const{return radius;}
float Circle::area()const {return 3.14159*radius*radius;}
ostream &operator <<(ostream &output,const Circle &c)
{
	output<<"["<<c.x<<","<<c.y<<"],r="<<c.radius;
	return output;
}
class Cylinder:public Circle
{
public:
	Cylinder(float x=0,float y=0,float r=0,float h=0);
	void setHeight(float);
	virtual float area()const;
	virtual float volume()const;
	virtual void shapeName()const {cout<<"Cylinder:";}
	friend ostream &operator <<(ostream &,const Cylinder&);
protected:
	float height;
};
Cylinder::Cylinder(float a,float b,float r,float h):Circle(a,b,r),height(h){}
void Cylinder ::setHeight(float h){height=h;}
float Cylinder ::area()const
{
	return 2*Circle::area()+2*3.14159*radius*height;
}
float Cylinder::volume()const
{
	return Circle::area()*height;
}
ostream&operator <<(ostream &output,const Cylinder &cy)
{
	output<<"["<<cy.x<<","<<cy.y<<"],r="<<cy.radius<<",h="<<cy.height;
	return output;
}
int main()
{
	Point point(3.2,4.5);
	Circle circle(2.4,1.2,5.6);
	Cylinder cylinder(3.5,6.4,5.2,10.5);
	point.shapeName();
	cout<<point<<endl;
	
	circle.shapeName();
	cout<<circle<<endl;

	cylinder.shapeName();
	cout<<cylinder<<endl<<endl;

	Shape*pt;
	pt=&point;
	pt->shapeName();
	cout<<"x="<<point.getX()<<",y="<<point.getY()<<"\narea="<<pt->area()
		<<"\nvolume="<<pt->volume()<<"\n\n";

	pt=&circle;
	pt->shapeName();
	cout<<"x="<<circle.getX()<<",y="<<circle.getY()<<"\narea="<<pt->area()
		<<"\nvolume="<<pt->volume()<<"\n\n";

	pt=&cylinder;
	pt->shapeName();
	cout<<"x="<<cylinder.getX()<<",y="<<cylinder.getY()<<"\narea="<<pt->area()
		<<"\nvolume="<<pt->volume()<<"\n\n";
	return 0;
}*/
/*#include <cmath>
#include <iostream>        //7.1
using namespace std;
int main()
{
	float a,b,c,disc;
	cout<<"please input a,b,c:";
	cin>>a>>b>>c;
	if(a==0)
		cerr<<"a is equal to zero,error!"<<endl;
	else
	{           //次括号加不加都可以
		if((disc=b*b-4*a*c)<0)
			cerr<<"disc=b*b-4*a*c<0"<<endl;
		else
		{
			cout<<"x1="<<(-b+sqrt(disc))/(2*a)<<endl;
			cout<<"x2="<<(-b-sqrt(disc))/(2*a)<<endl;
		}
	}
	return 0;
}*/
/*#include <iostream>     //7.2
#include <iomanip>
using namespace std;
int main()
{
	int a;
	cout<<"input a:";
	cin>>a;
	cout<<"dec:"<<dec<<a<<endl;
	cout<<"hex:"<<hex<<a<<endl;
	cout<<"oct:"<<setbase(8)<<a<<endl;
	char *pt="China";
	cout<<setw(10)<<pt<<endl;
	cout<<setfill('*')<<setw(10)<<pt<<endl;
	double pi=22.0/7.0;
	cout<<setiosflags(ios::scientific)<<setprecision(8);
	cout<<"pi="<<pi<<endl;
	cout<<"pi="<<setprecision(4)<<pi<<endl;
	cout<<"pi="<<setiosflags(ios::fixed)<<pi<<endl;
	return 0;
}*/
/*#include <iostream>          //7.3
using namespace std;
int main()
{
	int a=21;
	cout.setf(ios::showbase);
	cout<<"dec:"<<a<<endl;
	cout.unsetf(ios::dec);
	cout.setf(ios::hex);
	cout<<"hex:"<<a<<endl;
	cout.unsetf(ios::hex);
	cout.setf(ios::oct);
	cout<<"oct:"<<a<<endl;
	cout.unsetf(ios::oct);
	char *pt="China";
	cout.width(10);
	cout<<pt<<endl;
	cout.width(10);
	cout.fill('*');
	cout<<pt<<endl;
	double pi=22.0/7.0;
	cout.setf(ios::scientific);
	cout<<"pi=";
	cout.width(14);
	cout<<pi<<endl;
	cout.unsetf(ios::scientific);
	cout.setf(ios::fixed);
	cout.width(12);
	cout.setf(ios::showpos);
	cout.setf(ios::internal);
	cout.precision(6);
	cout<<pi<<endl;
	return 0;
}*/
/*#include <iostream>   //7.4
using namespace std;
int main()
{
	char *a="BASIC";
	for(int i=4;i>=0;i--)
		cout.put(*(a+i));       //putchar(*(a+i));
	cout.put('\n');				//putchar('\n');
	return 0;
}*/
/*#include <iostream>       //7.5
using namespace std;
int main()
{
	float grade;
	cout<<"enter grade:";
	while(cin>>grade)
	{
		if(grade>=85)cout<<grade<<"GOOD!"<<endl;
		if(grade<60)cout<<grade<<"fail!"<<endl;
		cout<<"enter grade:";
	}
	cout<<"The end."<<endl;
	return 0;
}*/
/*#include <iostream>       //7.6
using namespace std;       //课本上漏了这一句
/*int main()
{
	int c;
	cout<<"enter a sentence:"<<endl;
	while((c=cin.get())!=EOF)      //while(cin.get(c))
		cout.put(c);          
	//cout<<"end"<<endl;
	return 0;
}*/
/*int main()      //修改后
{
	char ch[20];
	cout<<"enter a sentence:"<<endl;
	cin.get(ch,10,'\n');
	cout<<ch<<endl;
	return 0;
}*/
/*#include <iostream>    //7.7
using namespace std;
int main()
{
	char ch[20];
	cout<<"enter a sentence:"<<endl;
	//cin>>ch;
//	cout<<"The string read with cin is:"<<ch<<endl;
	cin.getline(ch,20,'/');
	cout<<"The second part is:"<<ch<<endl;
//	cin.getline(ch,20);
//cout<<"The third part is:"<<ch<<endl;
	return 0;
}*/
/*#include <iostream>      //7.8
using namespace std;
int main()
{
	char c;
	while(!cin.eof())
		if((c=cin.get())!=' ')
			cout.put(c);
		return 0;
}*/
/*#include <iostream>  //7.9
using namespace std;
int main()
{
	char c[20];
	int ch;
	cout<<"please enter a sentence:"<<endl;
	cin.getline(c,15,'/');
	cout<<"The first part is:"<<c<<endl;
	ch=cin.peek();
	cout<<"The next character(ASCII code) is:"<<ch<<endl;
	cin.putback(c[0]);
	cin.getline(c,15,'/');
	cout<<"The second part is:"<<c<<endl;
	return 0;
}*/
/*#include <iostream>   //7.10
using namespace std;
int main()
{
	char ch[20];
	cin.get(ch,20,'/');
	cout<<"The first part is:"<<ch<<endl;
	cin.ignore();        //修改后
	cin.get(ch,20,'/');
	cout<<"The second part is:"<<ch<<endl;
	return 0;
}*/
/*#include <iostream>   //7.11
#include <fstream>
using namespace std;
int main()
{
	int a[10];
	ofstream outfile("fl.dat",ios::out);
	if(!outfile)
	{
		cerr<<"open error !"<<endl;
		exit(1);
	}
	cout<<"enter 10 integer numbers:"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
		outfile<<a[i]<<" ";
	}
	outfile.close();
	return 0;
}*/
/*#include <iostream>            //7.12
#include <fstream>
//#include <ifstream>
using namespace std;    //课本漏了这句
int main()
{
	int a[10],max,i,order;
	ifstream infile("fl.dat",ios::in);     //|ios::nocreate);    这个 新版C++系统类库不提供
	if(!infile)
	{
		cerr<<"open error!"<<endl;
		exit(1);
	}
	for(i=0;i<10;i++)
	{
		infile>>a[i];
		cout<<a[i]<<" ";
	}
	cout<<endl;
	max=a[0];
	order=0;
	for(i=1;i<10;i++)
		if(a[i]>max)
		{
			max=a[i];
			order=i;
		}
	cout<<"max="<<max<<endl<<"order="<<order<<endl;
	infile.close();
	return 0;
}*/
/*#include <iostream>       //7.13
#include <fstream>
using namespace std;
void save_to_file()
{
	ofstream outfile("f2.dat");
	if(!outfile)
	{
		cerr<<"open f2.dat error!"<<endl;
		exit(1);
	}
	char c[80];
	cin.getline(c,80);
	for(int i=0;c[i]!=0;i++)
		if(c[i]>=65&&c[i]<=90||c[i]>=97&&c[i]<=122)
		{
			outfile.put(c[i]);
			cout<<c[i];
		}
		cout<<endl;
		outfile.close();
}
void get_from_file()
{
	char ch;
	ifstream infile("f2.dat",ios::in);            //|ios::nocreate);
	if(!infile)
	{
		cerr<<"open f2.dat error!"<<endl;
		exit(1);
	}
	ofstream outfile("f3.dat");
	if(!outfile)
	{
		cerr<<"open f3.dat error!"<<endl;
		exit(1);
	}
	while(infile.get(ch))
	{
		if(ch>=97&&ch<=122)
			ch=ch-32;
		outfile.put(ch);
		cout<<ch;
	}
	cout<<endl;
	infile.close();
	outfile.close();
}
int main()
{
	save_to_file();
	get_from_file();
	return 0;
}*/
/*#include <iostream>           //(2)        
#include <fstream>
using namespace std;
void display_file(char *filename)
{
	ifstream infile(filename,ios::in);//|ios::nocreate);
	if(!infile)
	{
		cerr<<"open error!"<<endl;
		exit(1);
	}
	char ch;
	while (infile.get(ch))
		cout.put(ch);
	cout<<endl;
	infile.close();
}
int main()
{
	display_file("f3.dat");
	return 0;
}*/
/*#include <iostream>   //7.14
#include <fstream>
using namespace std;
struct student
{
	char name[20];
	int num;
	int age;
	char sex;
};
int main()
{
	student stud[3]={"Li",1001,18,'f',"Fun",1002,19,'m',"Wang",1004,17,'f'};
	ofstream outfile("stud.dat",ios::binary);
	if(!outfile)
	{
		cerr<<"open error!"<<endl;
		abort();       //退出程序~！~！~！~
	}
	for(int i=0;i<3;i++)
		outfile.write((char *)&stud[i],sizeof(stud[i]));
	outfile.close();
	return 0;
}*/
/*#include <iostream>   //7.15
#include <fstream>
//#include <string>      //课本漏了这句，因为，下面结构体用string name定义，所以用此头文件。。。
using namespace std;
struct student
{
	char name[20];     //就算加上上面的头文件，还是不能用string name,运行过程中错误了，所以只好改为和上一题一样的定义char name[20];
	int num;
	int age;
	char sex;
};
int main()
{
	student stud[3];
	int i;
	ifstream infile("stud.dat",ios::binary);
	if(!infile)
	{
		cerr<<"open error!"<<endl;
		abort();
	}
	for(i=0;i<3;i++)
		infile.read((char*)&stud[i],sizeof(stud[i]));
	infile.close();
	for(i=0;i<3;i++)
	{
		cout<<"NO."<<i+1<<endl;
		cout<<"name:"<<stud[i].name<<endl;
		cout<<"num:"<<stud[i].num<<endl;
		cout<<"age:"<<stud[i].age<<endl;
		cout<<"sex:"<<stud[i].sex<<endl;
	}
	return 0;
}*/
/*#include <iostream>              //7.16
#include <fstream>
using namespace std;
struct student
{
	int num;
	char name[20];
	float score;
};
int main()
{
	student stud[5]={1001,"Li",85,1002,"Fun",97.5,1004,"Wang",54,
	1006,"Tan",76.5,1010,"ling",96};
	fstream iofile("stud.dat",ios::in|ios::out|ios::binary);
	if(!iofile)
	{
		cerr<<"open error!"<<endl;
		abort();
	}
	for(int i=0;i<5;i++)
	iofile.write((char *)&stud[i],sizeof(stud[i]));
	student studl[5];
	for( i=0;i<5;i=i+2)        //此处不能写int i=0;否则编译器报错
	{
		iofile.seekg(i*sizeof(stud[i]),ios::beg);
		iofile.read((char*)&studl[i/2],sizeof(studl[0]));
		cout<<studl[i/2].num<<" "<<studl[i/2].name<<" "<<studl[i/2].score<<endl;
	}
	cout<<endl;
	stud[2].num=1012;
	strcpy(stud[2].name,"Wu");
	stud[2].score=60;
	iofile.seekp(2*sizeof(stud[0]),ios::beg);
	iofile.write((char*)&stud[2],sizeof(stud[2]));
	iofile.seekg(0,ios::beg);
	for(i=0;i<5;i++)
	{
		iofile.read((char*)&stud[i],sizeof(stud[i]));
		cout<<stud[i].num<<" "<<stud[i].name<<" "<<stud[i].score<<endl;
	}
	iofile.close();
	return 0;

}*/
/*#include <iostream>    //7.17
#include <strstream>
using namespace std;
struct student
{
	int num;
	char name[20];
	float score;
};         //课本漏了分号
int main()
{
	student stud[3]={1001,"Li",78,1002,"Wang",89.5,1004,"Fun",90};
	char c[50];
	ostrstream strout(c,30);
	for(int i=0;i<3;i++)
	strout<<stud[i].num<<stud[i].name<<stud[i].score;
	strout<<ends;
	cout<<"array c:"<<c<<endl;
	return 0;   //课本漏了这句
}*/
/*#include <iostream>              //7.18
#include <strstream>
using namespace std;
int main()
{
	char c[50]="12 34 65 -23 -32 33 61 99 321 32";
	int a[10],i,j,t;
	cout<<"array c:"<<c<<endl;
	istrstream strin(c,sizeof(c));
	for(i=0;i<10;i++)
		strin>>a[i];
	cout<<"array a:";
	for(i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
			if(a[j]>a[j+1])
			{t=a[j];a[j]=a[j+1];a[j+1]=t;}
	ostrstream strout(c,sizeof(c));
	for(i=0;i<10;i++)
		strout<<a[i]<<" ";
	strout<<ends;
	cout<<"array c:"<<c<<endl;
	return 0;
}*/
/*#include <iostream>   //8.1
#include <cmath>
using namespace std;
int main()
{
	double triangle(double,double,double);
	double a,b,c;
	cin>>a>>b>>c;
	while(a>0&&b>0&&c>0)
	{
		cout<<triangle(a,b,c)<<endl;
		cin>>a>>b>>c;
	}
	return 0;
}
double triangle(double a,double b,double c)
{
	double area;
	double s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	return area; 
}*/
/*#include <iostream>      //修改版
#include <cmath>
using namespace std;
void main()
{
	double triangle(double,double,double);
	double a,b,c;
	cin>>a>>b>>c;
	try
	{
		while(a>0&&b>0&&c>0)
		{
			cout<<triangle(a,b,c)<<endl;
			cin>>a>>b>>c;
		}
	}
	catch(double)
	{cout<<"a="<<a<<",b="<<b<<",c="<<c<<",that is not a triangle!"<<endl;}
	cout<<"end"<<endl;
}
double triangle(double a,double b,double c)
{
	double s=(a+b+c)/2;
	if(a+b<=c||b+c<=a||c+a<=b)throw a;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}*/
/*#include <iostream>          //8.2
using namespace std;
int main()
{
	void fl();
	try
	{fl();}
	catch(double)
	{
		cout<<"OK0!"<<endl;
	}
	cout<<"end0"<<endl;
	return 0;
}
void fl()
{
	void f2();
	try
	{
		f2();
	}
	catch (char)
	{
		cout<<"OK1!";
	}
	cout<<"end1"<<endl;
}
void f2()
{
	void f3();
	try
	{
		f3();
	}
	catch(int)
	{
		cout<<"OK2!"<<endl;
	}
	cout<<"end2"<<endl;
}
void f3()
{
	double a=0;
	try
	{
		throw a;
	}
	catch (float)
	{
		cout<<"OK3!"<<endl;
	}
	cout<<"end3"<<endl;
}*/
/*#include <iostream>   //8.3
#include <string>
using namespace std;
class Student
{
public:
	Student(int n,string nam)
	{
		cout<<"constructor-"<<n<<endl;
		num=n;
		name=nam;
	}
	~Student()
	{
		cout<<"destructor-"<<num<<endl;
	}
	void get_data();
private:
	int num;
	string name;
};
void Student::get_data()
{
	if(num==0)throw num;
	else cout<<num<<" "<<name<<endl;
	cout <<"in get_data()"<<endl;
}
void fun()
{
	Student studl(1101,"Tan");
	studl.get_data();
	Student stud2(0,"Li");
	stud2.get_data();
}
int main()
{
	cout<<"main begin"<<endl;
	cout<<"call fun()"<<endl;
	try
	{fun();}
	catch (int n)
	{
		cout<<"num="<<n<<",error!"<<endl;
	}
	cout<<"main end"<<endl;
	return 0;
}*/
/*                   //次段代码并未编译运行，如有需要，自行拆分后运行
#include <string>     //8.4
#include <cmath>
using namespace std;
class Student
{
public:
	Student(int n,string nam,char s)
	{num=n;name=nam;sex=s;}
	void get_data();
private:
	int num;
	string name;
	char sex;
};
void Student::get_data()
{
	cout<<num<<" "<<name<<" "<<sex<<endl;
}
double fun(double a,double b)
{return sqrt(a+b);}
#include <iostream>
#include "cc8-4-h1.h"
using namespace std;
int main()
{
	Student studl(101,"Wang",18);
	studl.get_data();
	cout<<fun(5,3)<<endl;
	return 0;
}
#include <string>
#include <cmath>
using namespace std;
class Student
{
public:
	Student(int n,string nam,char s)
	{num=n;name=nam;sex=s}
	void get_data();
private:
	int num;
	string name;
	char sex;
};
void Student::get_date()
{
	cout<<num<<" "<<name<<" "<<sex<<endl;
}
double fun(double a,double b)
{
	return sqrt(a-b);
}
#include <iostream>
#include "cc8-4-h1.h"
#include "cc8-4-h2.h"
using namespace std;
int main()
{
	Student studl(101,"Wang",18);
	studl.get_data();
	cout<<fun(5,3)<<endl;
	return 0;
}
*/
/*                          //次段代码并未编译运行，如有需要，自行拆分后运行
#include <string>     //8.5
#include <cmath>
using namespace std;
namespace ns1
{
	class Student
	{
	public:
		Stundent (int n,string nam,int a)
		{num=n;name=nam;age=a;}
		void get_data();
	private:
		int num;
		string name;
		int age;
	};
	void Student::get_data()
	{
		cout<<num<<" "<<name<<" "<<age<<endl;
	}
	double fun(double a,double b)
	{return sqrt(a+b);}
}
#include <string>
#include <cmath>
using namespace std;
{
	class Student
	{
	public:
		Student(int n,string nam,char s)
		{num=n;name=nam;sex=s}
		void get_data();
	private:
		int num;
		char name[20];
		char sex;
	};
	void Student::get_data()
	{
		cout<<num<<" "<<name<<" "<<sex<<endl;
	}
	double fun(double a,double b)
	{return sqrt(a-b);}
}
#include <iostream>
#include "cc8-5-h1.h"
#include "cc8-5-h2.h"
using namespace std;
int main()
{
	ns1::Student studl(101,"Wang",18);
	studl.get_data();
	cout<<ns1::fun(5,3)<<endl;
	ns2::Student stud2(102,"Li",'f');
	stud2.get_data();
	cout<<ns2::fun(5,3)<<endl;
	return 0;
}
*/