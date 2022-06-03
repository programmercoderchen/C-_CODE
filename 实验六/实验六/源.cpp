#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//编程实现以下功能：
//1、定义职工类employee：字段成员：职工号num，姓名name，年龄age，工资salary；
//成员函数：返回职工号getnum()；友元函数：重载运算符 >> ， << 。
//2、编写函数按职工号从小到大的顺序将 5 个职工的数据输出到磁盘文件 file1.txt中保存，int savetofile()；该函数返回输入数据的个数。
//3、编写函数从键盘输入一个员工的数据，增加到文件file1.txt 的末尾，int  insertfile(int n)；插入完成后将新的员工的数量返回。
//4、编写函数从文件中输出全部员工的数据，void outfromfile(int n)。
//5、编写函数从键盘输入一个号码，从文件中查找有无此职工号，如有则显示此职工是第几个职工以及此职工的全部数据，如没有，输出“无此人”，void findfile(int n)。
class employee
{
public:
	employee(int n=0,string N="sz", int a=0, double s=0) :num(n), name(N), age(a), salary(s) {}
	int getnum()
	{
		return num;
	}
	friend int savetofile();
	friend int insertfile(int n);
	friend void outfromfile(int n);
	friend void findfile(int n);
	friend ostream& operator <<(ostream&output, employee&e);
	friend istream& operator >>(istream&input, employee&e);
	friend ofstream& operator<<(ofstream&, employee&);
	friend ifstream& operator>>(ifstream&, employee&);
private:
	int num;
	string name;
	int age;
	double salary;
};
//class employee
//{
//public:
//	employee(int a = 0, string b = "zs", int c = 0, int d = 0) :num(a), name(b), age(c), salary(d) {}
//	int getnum() { return num; }
//	friend istream& operator>>(istream&, employee&);
//	friend ostream& operator<<(ostream&, employee&);
//	friend ofstream& operator<<(ofstream&, employee&);
//	friend ifstream& operator>>(ifstream&, employee&);
//	friend int savetofile();
//	friend int insertfile(int);
//	friend void outfromfile(int);
//	friend void findfile(int);
//private:
//	int    num;
//	string name;
//	int    age;
//	int    salary;
//};
ostream& operator <<(ostream& output, employee& e)
{
	output << e.num << "\t" << e.name << "\t" << e.age << "\t" << e.salary << endl;
	return output;
}
istream& operator >>(istream& input, employee& e)
{
	input >> e.num >> e.name >> e.age >> e.salary;
	return input;
}
ofstream& operator<<(ofstream& a, employee& e)
{
	a << e.num << "\t" << e.name << "\t" << e.age << "\t" << e.salary << endl;
	return a;
}
ifstream& operator>>(ifstream& a, employee& e)
{
	a >> e.num >> e.name >> e.age >> e.salary;
	return a;
}
//istream& operator>> (istream &input,employee &b)
//{
//	input >> b.num >> b.name >> b.age >> b.salary;
//	return input;
//}
//ostream& operator<< (ostream& output, employee& b)
//{
//	output << b.num << "\t" << b.name << "\t" << b.age << "\t" << b.salary << endl;
//	return output;
//}
//ofstream& operator<<(ofstream& a, employee& b)
//{
//	a << b.num << "\t" << b.name << "\t" << b.age << "\t" << b.salary << endl;
//	return a;
//}
//ifstream& operator>>(ifstream& a, employee& b)
//{
//	a >> b.num >> b.name >> b.age >> b.salary;
//	return a;
//}
int savetofile()
{
	int i = 0;
	int j = 0;
	employee w;
	while (i < 1 || i>100)
	{
		cout << "请输入职工的个数(1-100):";
		cin >> i;
	}
	ofstream outfile("data.txt", ios::out);
	cout << "NUM\tNAME\tAGE\tSALARY" << endl;
	for (j = 0; j < i; j++)
	{
		cin >> w;
		outfile << w;
	}
	return i;
}
//int savetofile()
//{
//	int n = 0;
//	employee w;
//	while (n < 1 || n>100)
//	{
//		cout << "请输入职工的个数(1-100):";
//		cin >> n;
//	}
//	ofstream outfile("filel.txt", ios::out);
//	cout << "NUM\tNAME\tAGE\tSALARY" << endl;
//	for (int i = n; i > 0; i--)
//	{
//		cin >> w;
//		outfile << w;
//	}
//	return n;
//}
int insertfile(int n)//新增职工数据
{
	employee w;
	ofstream outfile("data.txt", ios::app);
	cout << "请输入要添加的职工信息：" << endl;
	cout << "NUM\tNAME\tAGE\tSALARY" << endl;
	cin >> w;
	outfile << w;
	return (n + 1);
}
void outfromfile(int n)
{
	int j = 0;
	employee w[100];
	ifstream infile("data.txt", ios::in);
	cout << "NUM\tNAME\tAGE\tSALARY" << endl;
	for (j = 0; j < n; j++)
	{
		infile >> w[j];
		cout << w[j];
	}
}
//void outfromfile(int n)
//{
//	employee w[101];
//	ifstream infile("filel.txt", ios::in);
//	cout << "NUM\tNAME\tAGE\tSALARY" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		infile >> w[i];
//		cout << w[i];
//	}
//}
void findfile(int n)//查找职工信息
{
	int i = 0, j = 0, num = 0;
	employee w[100];
	cout << "请输入要查找的职工号：";
	cin >> num;
	ifstream infile("data.txt", ios::in);
	for (i = 1; i <= n; i++)
	{
		infile >> w[i];
		if (w[i].num == num)
		{
			j = 1;
			break;
		}
	}
		if (j)
		{
			cout << "查找成功！" << endl;
			cout << "第" << i << "个职工 该职工的信息如下：" << endl;
			cout << "NUM\tNAME\tAGE\tSALARY" << endl;
			cout << w[i];
		}
		else
		{
			cout << "查无此人" << endl;
		}
}
//void findfile(int n)
//{
//	cout << "请输入要查找的职工号：";
//	int i = 0, v = 0, num = 0;
//	cin >> num;
//	employee w[100];
//	ifstream infile("filel.txt", ios::in);
//	for (i = 1; i <= n; i++)
//	{
//		infile >> w[i];
//		if (w[i].num == num)
//		{
//			v = 1; break;
//		}
//	}
//	if (v)
//	{
//		cout << "查找成功！" << endl;
//		cout << "第" << i << "个职工 该职工的信息如下：" << endl;
//		cout << "NUM\tNAME\tAGE\tSALARY" << endl;
//		cout << w[i];
//	}
//	else
//		cout << "查无此人！" << endl;
//}
int main()
{
	int n; //n表示要输入的职工信息的个数
	n = savetofile();//假设输入五个职工信息(职工号从小到大)
	outfromfile(n);//从文件输出职工信息
	findfile(n);//查找职工号为6的职工信息
	n = insertfile(n);//插入新的职工信息，职工号为6
	findfile(n);//重新查找职工号为6的职工信息
	return 0;
}
//#include<fstream>
//#include<iostream>
//#include<string>
//using namespace std;
//class employee
//{
//public:
//	employee(int a = 0, string b = "zs", int c = 0, int d = 0) :num(a), name(b), age(c), salary(d) {}
//	int getnum() { return num; }
//	friend istream& operator>>(istream&, employee&);
//	friend ostream& operator<<(ostream&, employee&);
//	friend ofstream& operator<<(ofstream&, employee&);
//	friend ifstream& operator>>(ifstream&, employee&);
//	friend int savetofile();
//	friend int insertfile(int);
//	friend void outfromfile(int);
//	friend void findfile(int);
//private:
//	int    num;
//	string name;
//	int    age;
//	int    salary;
//};
//istream& operator>> (istream& input, employee& b)
//{
//	input >> b.num >> b.name >> b.age >> b.salary;
//	return input;
//}
//ostream& operator<< (ostream& output, employee& b)
//{
//	output << b.num << "\t" << b.name << "\t" << b.age << "\t" << b.salary << endl;
//	return output;
//}
//ofstream& operator<<(ofstream& a, employee& b)
//{
//	a << b.num << "\t" << b.name << "\t" << b.age << "\t" << b.salary << endl;
//	return a;
//}
//ifstream& operator>>(ifstream& a, employee& b)
//{
//	a >> b.num >> b.name >> b.age >> b.salary;
//	return a;
//}
//int insertfile(int n)
//{
//	employee w;
//	ofstream outfile("filel.txt", ios::app);
//	cout << "请输入要添加的职工信息：" << endl;
//	cout << "NUM\tNAME\tAGE\tSALARY" << endl;
//	cin >> w;
//	outfile << w;
//	return (n + 1);
//}
//int savetofile()
//{
//	int n = 0;
//	employee w;
//	while (n < 1 || n>100)
//	{
//		cout << "请输入职工的个数(1-100):";
//		cin >> n;
//	}
//	ofstream outfile("filel.txt", ios::out);
//	cout << "NUM\tNAME\tAGE\tSALARY" << endl;
//	for (int i = n; i > 0; i--)
//	{
//		cin >> w;
//		outfile << w;
//	}
//	return n;
//}
//void outfromfile(int n)
//{
//	employee w[101];
//	ifstream infile("filel.txt", ios::in);
//	cout << "NUM\tNAME\tAGE\tSALARY" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		infile >> w[i];
//		cout << w[i];
//	}
//}
//void findfile(int n)
//{
//	cout << "请输入要查找的职工号：";
//	int i = 0, v = 0, num = 0;
//	cin >> num;
//	employee w[100];
//	ifstream infile("filel.txt", ios::in);
//	for (i = 1; i <= n; i++)
//	{
//		infile >> w[i];
//		if (w[i].num == num)
//		{
//			v = 1; break;
//		}
//	}
//	if (v)
//	{
//		cout << "查找成功！" << endl;
//		cout << "第" << i << "个职工 该职工的信息如下：" << endl;
//		cout << "NUM\tNAME\tAGE\tSALARY" << endl;
//		cout << w[i];
//	}
//	else
//		cout << "查无此人！" << endl;
//}
//int main()
//{
//	int n;
//	n = savetofile();
//	outfromfile(n);
//	findfile(n);
//	n = insertfile(n);
//	findfile(n);
//	return 0;
//}

