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
//		cout << "对象在构造时自动调用";
//	}
//	~Person()
//	{
//		cout << "函数在析构时调用";
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
//		cout << "构造" << endl;
//	}
//	person(int a)
//	{
//		cout << "有参构造" << endl;;
//		age = a;
//	}
//	person(const person& p)
//	{
//		cout << "拷贝构造" << endl;;
//		age = p.age;
//	}
//
//
//
//	~person()
//	{
//		cout << "析构" << endl;;
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
//		cout << "构造";
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
//		cout << "析构";
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
//		cout << "Phone默认构建";
//	}
//	Phone(string name) :p_name(name)
//	{
//		cout << "Phone带参构建";
//		/*p_name = name;*/
//	}
//	~Phone()
//	{
//		cout << "Phone析构";
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
//		cout << "person的析构";
//	}
//
//};
//
//int main()
//{
//	Person p1("zhangsan", "iphone");
//	/*Phone p2;*/
//	cout << p1.p_name << "拿着" << p1.p.p_name<<"手机";
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
//		cout << "静态函数";
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


//class Person
//{
//public:
//	int m_age;
//	Person(int age)
//	{
//		m_age = age;
//	}
//	Person& PersonAgeAdd(Person p)
//	{
//		m_age = m_age + p.m_age;
//		return *this;
//	}
//
//};
//void test01()
//{
//	Person p1(20);
//	cout << p1.m_age;
//
//}
//void test02()
//{
//	Person p1(10);
//	Person p2(20);
//	/*p2.PersonAgeAdd(p2).PersonAgeAdd(p1).PersonAgeAdd(p1);*/
//	p2.PersonAgeAdd(p2);
//	cout << p2.m_age;
//}
//
//int main()
//{
//
//	/*test01();*/
//	test02();
//}

#include<math.h>
//int main() 
//{
//    for (int i = 153; i<= 999; i++)
//    {
//        int sum = 0;
//        int tmp = i;
//        while (tmp)
//        {
//            sum = sum + pow(tmp % 10, 3);
//            tmp = tmp / 10;
//        }
//        if (i == sum)
//        {
//            cout << i<<" ";
//        }
//    }
//
//    return 0;
//}
//
//int main() {
//    long long sum = 0;
//    long long i = 9999999999;
//    while (i)
//    {
//        sum = sum + i;
//        i = i / 10;
//    }
//    cout << sum;
//}
#include<string>
//int main()
//{
//	string name;
//	//getline(cin, name);
//	cin >> name;
//	cout << name;
//}

//int main() {
//
//    char str[100] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    // write your code here......
//
//
//    return 0;
//}


//int mystrcmp(const char* src, const char* dst);
//
//int main() {
//
//    char s1[100] = { 0 };
//    char s2[100] = { 0 };
//
//    cin.getline(s1, sizeof(s1));
//    cin.getline(s2, sizeof(s2));
//
//    int ret = strcmp(s1, s2);
//
//    cout << ret << endl;
//
//    return 0;
//}
//
////int mystrcmp(const char* src, const char* dst) {
////
////    // write your code here......
////    while (*dst == *src)
////    {
////        if (*dst == '\0')
////        {
////            return 0;
////        }
////        dst++;
////        src++;
////    }
////    if (*src > *dst)
////    {
////        return 1;
////    }
////    else if (*src < *dst)
////    {
////        return -1;
////    }
//}


//class Student
//{
//public:
//	int age;
//	mutable int ClassNum;
//
//	void SetClassNum()const//const this指针(Person* const this)
//	{
//		ClassNum = 10;
//	}
//};
//
//void test1()
//{
//	const Student S1;
//	S1.ClassNum = 101;
//	cout << S1.ClassNum;
//	S1.SetClassNum();
//	cout << S1.ClassNum;
//}
//
//
//int main()
//{
//	test1();
//	return 0;
//}
//class House;
//class GoodGay;
//
// 
//
//
//class House
//{
//	friend class GoodGay;
//	//friend void GoodFriend(House& house);//定义友元函数
//public:
//	string LivingRoom;
//	string Kitchen;
//	House(string name1, string name2) :LivingRoom(name1), Bedroom(name2)
//	{
//
//	}
//	void getGoodGayNme(GoodGay& goodgay)
//	{
//		cout << goodgay.name;
//	}
//private:
//	string Bedroom;
//};
//
//
////void GoodFriend(House& house)//通过友元函数访问隐私成员；
////{
////	cout << "你的朋友正在访问" << house.Bedroom;
////}
//class GoodGay
//{
//	friend class House;
//public:
//	void visit(House& your_house)
//	{
//		cout << "你的好朋友正在访问" << your_house.Bedroom;
//	}
//	GoodGay(string name)
//	{
//		this->name = name;
//	}
//private:
//	string name;
//
//};
//
//
//
////void test1()
////{
////	House house1("客厅","卧室");
////	cout << "你的朋友正在访问" << house1.LivingRoom;
////	GoodFriend(house1);
////}
//
//
//void test2()
//{
//	House my_house("客厅", "卧室");
//	cout << my_house.LivingRoom;
//	GoodGay Gay1("zhangsan");
//	Gay1.visit(my_house);
//
//}
//
//
//int main()
//{
//	/*test1();*/
//	test2();
//}
















