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
#include <iostream>
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
	Student(char nam[],char s,float sco)
	{
		strcpy(namel,nam);
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
}

