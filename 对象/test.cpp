#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//class Person
//{
//private:
//	string name;
//	int age;
//	char sex[8];
//public:
//	Person()
//	{
//		cout << "�����ڹ���ʱ�Զ�����";
//	}
//	~Person()
//	{
//		cout << "����������ʱ����";
//	}
//
//};
//void test()
//{
//	Person p2;
//}
//
//int main()
//{
//	/*Person p1;*/
//	test();
//	return 0;
//}


//class person
//{
//public:
//	person()
//	{
//		age = 18;
//		cout << "����" << endl;
//	}
//	person(int a)
//	{
//		cout << "�вι���" << endl;;
//		age = a;
//	}
//	person(const person& p)
//	{
//		cout << "��������" << endl;;
//		age = p.age;
//	}
//
//
//
//	~person()
//	{
//		cout << "����" << endl;;
//	}
//	int getAge()
//	{
//		return age;
//	}
//	void setAge(int a)
//	{
//		age = a;
//	}
//
//private:
//	int age;
//};


//int main()
//{
//	/*person p1;*/
//	person p2(10);
//	//cout << p2.getAge() << endl;
//	//person p3(p2);
//	//cout<<p3.getAge();
//	return 0;
//}


//void test01()
//{
//	person p1;
//	person p2(p1);
//	cout << p2.getAge();
//}
//
//void doWork(person &p)
//{
//	p.setAge(10);
//	//person p2 = p;
//	//cout << p2.getAge();
//}
//
//void test02()
//{
//	person p;
//	doWork(p);
//	cout << p.getAge();
//
//}
//
//person DoWork()
//{
//	person p;
//	cout << &p;
//	return p;
//}
//
//
//void test03()
//{
//	person p = DoWork();
//	cout << &p;
//}
//
//int main()
//{
//	/*test01();*/
//	/*test02();*/
//	test03();
//
//	return 0;
//}


//class Person
//{
//public:
//	void SetAge(int a)
//	{
//		age = a;
//	}
//	int GetAge()
//	{
//		return age;
//	}
//
////	Person()
//	{
//		cout << "����";
//	}
//	Person(int a,int height)
//	{
//		age = a;
//		Height = new int(height);
//	}
//
//	Person(const Person& p)
//	{
//		age = p.age;
//		int* a = new int(*p.Height);
//		if (a != NULL)
//		{
//			Height = a;
//		}
//	}
//	
//
//	~Person()
//	{
//		if (Height != NULL)
//		{
//			delete Height;
//			Height = NULL;
//		}
//		cout << "����";
//	}
//
//	int age;
//	int* Height;
//	
//
//};	
//
////void test01()
////{
////	Person p1;
////	p1.SetAge(10);
////	Person p2(p1);
////	cout<<p2.GetAge();
////
////}
//
////void test02()
////{
////	Person p1;
////	Person p2(12);
////	p1 = p2;
////	cout << p1.GetAge();
////}
//
//void test03()
//{
//	Person p1(18, 160);
//	Person p2(p1);
//	cout << *p2.Height;
//}
//
//int main()
//{
//	/*test01();*/
//	/*test02();*/
//	test03();
//	return 0;
//}
#include<string>
//class Phone
//{
//public:
//	string p_name;
//	Phone()
//	{
//		cout << "PhoneĬ�Ϲ���";
//	}
//	Phone(string name) :p_name(name)
//	{
//		cout << "Phone���ι���";
//		/*p_name = name;*/
//	}
//	~Phone()
//	{
//		cout << "Phone����";
//	}
//};



//class Person
//{
//public:
//	string p_name;
//	Phone p;
//	Person(string a, string b) :p_name(a), p(b)
//	{
//		cout << "person";
//	}
//	~Person()
//	{
//		cout << "person������";
//	}
//
//};
//
//int main()
//{
//	Person p1("zhangsan", "iphone");
//	/*Phone p2;*/
//	cout << p1.p_name << "����" << p1.p.p_name<<"�ֻ�";
//
//
//}

//class Person
//{
//public:
//	static int age;
//	int m;
//	static int func()
//	{
//		cout << "��̬����";
//		return age;
//	}
//
//};
//
//int Person::age = 10;
//
//void test01()
//{
//	
//	Person p;
//	p.age = 10;
//	cout << p.age<<endl;
//
//	Person p2;
//	p2.age = 200;
//	cout << p.age;
//}
//
//void test02()
//{
//	//Person p;
//	//p.func();
//	Person::func();
//	cout<<Person::age;
//}
//
//
//int main()
//{
//	//test01();
//	/*cout << Person::age;*/
//	test02();
//}

//class Person
//{
//public:
//	int m_A;
//	/*char a;
//	int m_b;*/
//	static int m_b;
//	void func()
//	{
//		cout << "test";
//	}
//	
//
//};
//int Person::m_b = 10;
//
//
//int main()
//{
//	Person p;
//	cout << sizeof(p);
//
//}


class Person
{
public:
	int m_age;
	Person(int age)
	{
		m_age = age;
	}
	Person& PersonAgeAdd(Person p)
	{
		m_age = m_age + p.m_age;
		return *this;
	}

};
void test01()
{
	Person p1(20);
	cout << p1.m_age;

}
void test02()
{
	Person p1(10);
	Person p2(20);
	/*p2.PersonAgeAdd(p2).PersonAgeAdd(p1).PersonAgeAdd(p1);*/
	p2.PersonAgeAdd(p2);
	cout << p2.m_age;
}

int main()
{

	/*test01();*/
	test02();
}