//请设计一个整型开散列表，散列函数为除留余数法，
//其中散列表的长度、除留余数法的模和关键码的个数由键盘输入，再根据输入由键盘输入所有的关键码。
//分别对三个待查值在散列表中进行查找，输出查找结果采用头插法

#include <iostream>
#include <string>

using namespace std;

const int Maxsize  = 10000;

class Mumber_Data
{
	public:
		Mumber_Data ();
		~Mumber_Data ();
		int GetMumber_Data ();
		void SetMumber_Data (int Data);
		void SetNext (Mumber_Data *Next);
		Mumber_Data *GetNext ()
		{
			return Next;
		}
	
	private:
		int Data;
		Mumber_Data *Next;
};

class Mumber_Hash
{
	public:
		Mumber_Hash () {}
		~Mumber_Hash () {}
		void SetLength (int Length);
		void SetMod (int Mod);
		int Get (int Data);
		void Insert (int Data);
	
	private:
		int GetIndex (int Data);
		int Length;
		int Mod;
		Mumber_Data Data[Maxsize];
};

Mumber_Data::Mumber_Data ()
{
	Next = NULL;
}

Mumber_Data::~Mumber_Data ()
{
	
}

int Mumber_Data::GetMumber_Data ()
{
	return Data;
}

void Mumber_Data::SetMumber_Data (int Data)
{
	this->Data = Data;
}

void Mumber_Data::SetNext (Mumber_Data *Next)
{
	this->Next = Next;
}

void Mumber_Hash::SetLength (int Length)
{
	this->Length = Length;
}

void Mumber_Hash::SetMod (int Mod)
{
	this->Mod = Mod;
}

int Mumber_Hash::GetIndex (int Data)
{
	return Data % Length;
}

void Mumber_Hash::Insert (int Data)
{
	int i = 0;
	
	i = GetIndex (Data);
	
	Mumber_Data *p = new Mumber_Data ();
	
	p->SetMumber_Data (Data);
	
	p->SetNext (this->Data[i].GetNext());
	
	this->Data[i].SetNext (p);
}

int Mumber_Hash::Get (int Data)
{
	int i = 0;
	int count = 1;
	
	i = GetIndex (Data);
	
	Mumber_Data *p = this->Data[i].GetNext();
	
	while (p != NULL)
	{
		if (p->GetMumber_Data() == Data)
		{
			cout << i << " ";
			
			return count;
		}
		
		count++;
		p = p->GetNext();
	}
	
	Insert (Data);
	
	throw string("none");
}

int main()
{
	Mumber_Hash Hash;
	
	int Length = 0;
	int Mod = 0;
	int Num = 0;
	int Temp = 0;
	int i = 0;
	int j = 0;
	
	cin >> Length;
	
	Hash.SetLength (Length);
	
	cin >> Mod;
	
	Hash.SetMod (Mod);
	
	cin >> Num;
	
	for (i=0; i<Num; i++)
	{
		cin >> Temp;
		
		Hash.Insert(Temp);
	}
	
	for (j=0; j<3; j++)
	{
		try
		{
			cin >> Temp;
			
			cout << Hash.Get (Temp) << endl;
		}
		catch (string &str)
		{
			cout << str << endl;
		}
	}

	return 0;
} 
