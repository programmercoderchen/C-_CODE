//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//
//class Employee
//{
//public:
//	Employee(string n,int m):name(n),month(m){}
//	string getname()
//	{
//		return name;
//	}
//	virtual float getSalary(int month) = 0;
//protected:
//	string name;
//	int month;
//};
//class SalariedEmployee:public Employee
//{
//public:
//	SalariedEmployee(string n, int m, float M):Employee(n,m), monthlypay(M){}
//	virtual float getSalary(int a)
//	{
//		if (a == month)
//		{
//			monthlypay += 100;
//		}
//		return monthlypay;
//	}
//protected:
//	float monthlypay;
//};
//class HourlyEmployee:public Employee
//{
//public:
//	HourlyEmployee(string n, int m, float h, float w):Employee(n, m),hourpay(h),workhour(w){}
//	virtual float getSalary(int a)
//	{
//		float w;
//		if (workhour > 160)
//		{
//			w = hourpay * 160 + (workhour - 160)*1.5*hourpay;
//		}
//		else
//		{
//			w = hourpay * workhour;
//		}
//		if (a == month)
//			w += 100;
//		return w;
//	}
//protected:
//	float hourpay;
//	float workhour;
//};
//class SalesEmployee:public Employee
//{
//public:
//	SalesEmployee(string n, int m, float mon, float r):Employee(n, m), monthlysales(mon), royaltyrate(r){}
//	virtual float getSalary(int a)
//	{
//		float w;
//		w = monthlysales * royaltyrate;
//		if (a == month)
//		{
//			w += 100;
//		}
//		return w;
//	}
//protected:
//	float monthlysales;
//	float royaltyrate;
//};
//int main()
//{
//	int month, i;
//	SalariedEmployee a("Mike", 3, 2789), e("Liu", 12, 3122);
//	HourlyEmployee   b("Jack", 7, 30, 100), d("Lin", 12, 235, 100);
//	SalesEmployee    c("Rotus", 2, 1.5e7, 0.12);
//	Employee* e[5] = { &a,&b,&c,&d,&e};
//	//定义指向各个对象的指针数组
//	cout << "Please input the month:";
//	cin >> month;
//	cout << setiosflags(ios::fixed) << setprecision(2);
//	//控制输出格式保留2位
//	for (i = 0; i < 5; i++)
//	{
//		cout << (*e[i]).getname() << ":" << (*e[i]).getSalary(month) << endl;
//	}
//	return 0;
//}
//int main()
//{
//	int month, i;
//	SalariedEmployee a("Mike", 3, 2789), f("Liu", 12, 3122);
//	HourlyEmployee   b("Jack", 7, 30, 100), d("Lin", 12, 235, 100);
//	SalesEmployee    c("Rotus", 2, 1.5e7, 0.12);
//	Employee* e[5] = { &a,&b,&c,&d,&f };
//	cout << "Please input the month:";
//	cin >> month;
//	cout << setiosflags(ios::fixed) << setprecision(2);
//	for (i = 0; i < 5; i++)
//	{
//		cout << (*e[i]).getname() << ":" << (*e[i]).getSalary(month) << endl;
//	}
//	return 0;
//}

//#include <iostream> 
//#include <iomanip>
//#include<string>
//using namespace std;
//class Employee
//{
//public:
//	Employee(string n, int m) :name(n), month(m) {}
//	string getname()
//	{
//		return name;
//	}
//	virtual float getSalary(int a) = 0;
//protected:
//	string name;
//	int month;
//};
//class SalariedEmployee :public Employee
//{
//public:
//	SalariedEmployee(string n, int m, int w) :Employee(n, m), wages(w) {}
//	float getSalary(int a)
//	{
//		if (a == month)
//			wages = wages + 100;
//		return wages;
//	}
//private:
//	int wages;
//};
//class HourlyEmployee :public Employee
//{
//public:
//	HourlyEmployee(string n, int m, float w, int t) :Employee(n, m), time(t), wages(w) {}
//	float getSalary(int a)
//	{
//		if (time > 160)
//			wages = wages * 160 + wages * (time - 160) * 3 / 2;
//		else wages = time * wages;
//		if (a == month)
//			wages = wages + 100;
//		return wages;
//	}
//private:
//	int time;
//	float wages;
//};
//class SalesEmployee :public Employee
//{
//public:
//	SalesEmployee(string n, int m, long s, double c) :Employee(n, m), sales(s), commission(c) {}
//	float getSalary(int a)
//	{
//		wages = sales * commission;
//		if (a == month)
//			wages = wages + 100;
//		return wages;
//	}
//private:
//	double wages;
//	double sales;
//	double commission;
//};
//int main()
//{
//	int month, i;
//	SalariedEmployee a("Mike", 3, 2789), f("Liu", 12, 3122);
//	HourlyEmployee   b("Jack", 7, 30, 100), d("Lin", 12, 235, 100);
//	SalesEmployee    c("Rotus", 2, 1.5e7, 0.12);
//	Employee* e[5] = { &a,&b,&c,&d,&f };
//	cout << "Please input the month:";
//	cin >> month;
//	cout << setiosflags(ios::fixed) << setprecision(2);
//	for (i = 0; i < 5; i++)
//	{
//		cout << (*e[i]).getname() << ":" << (*e[i]).getSalary(month) << endl;
//	}
//	return 0;
//}
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class employee
{
public:
	string getnum()
	{
		return num;
	}
	int savetofile();
	int insertfile(int n);
	void outformfile(int n);
	void findfile(int n);
	friend ostream& operator <<(ostream& output, employee& e);
	friend istream& operator >>(istream& input, employee& e);
private:
	string num;
	string name;
	int age;
	double salary;
};
int employee::savetofile()
{
	ifstream infile("filel.txt", ios::in);
	if (!infile)
	{
		cout << "open error\n";
		exit(1);
	}
	while (!infile.eof())
	{
		infile >> s[n].name >> s[n].num >> s[n].chinese >> s[n].english >> s[n].math >> s[n].title;
		n++;
	}
	return n;
}
int employee::insertfile(int n)
{
	ifstream infile("file1.txt", ios::in);
	if (!infile)
	{
		cout << "open error\n";
		exit(1);
	}
	while (!infile.eof())
	{
		infile >> s[n].name >> s[n].num >> s[n].chinese >> s[n].english >> s[n].math >> s[n].title;
		n++;
	}
	return n;
}
void employee::outformfile(int n)
{
	ofstream outfile("file1.txt", ios::out);
}
void employee::findfile(int n)
{
	int i;
	cin >> i;
}
ostream& operator <<(ostream& output, employee& e)
{
	output << e.num << "	" << e.name << "	" << e.age << "		" << e.salary << endl;
	return output;
}
istream& operator >>(istream& input, employee& e)
{
	input >> e.num >> e.name >> e.age >> e.salary;
	return input;
}
int main()
{
	int n;
	n = savetofile();
	outformfile(n);
	findfile(n);
	n = insertfile(n);
	findfile(n);
	return 0;
}