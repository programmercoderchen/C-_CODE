//实验六解法一
#include<fstream>
#include<iostream>
#include<string>
using namespace std;
class employee
{
public:
	employee(int a = 0, string b = "zs", int c = 0, int d = 0) :num(a), name(b), age(c), salary(d) {}
	int getnum() { return num; }
	friend istream& operator>>(istream&, employee&);
	friend ostream& operator<<(ostream&, employee&);
	friend ofstream& operator<<(ofstream&, employee&);
	friend ifstream& operator>>(ifstream&, employee&);
	friend int savetofile();
	friend int insertfile(int);
	friend void outfromfile(int);
	friend void findfile(int);
private:
	int    num;
	string name;
	int    age;
	int    salary;
};
istream& operator>> (istream& input, employee& b)
{
	input >> b.num >> b.name >> b.age >> b.salary;
	return input;
}
ostream& operator<< (ostream& output, employee& b)
{
	output << b.num << "\t" << b.name << "\t" << b.age << "\t" << b.salary << endl;
	return output;
}
ofstream& operator<<(ofstream& a, employee& b)
{
	a << b.num << "\t" << b.name << "\t" << b.age << "\t" << b.salary << endl;
	return a;
}
ifstream& operator>>(ifstream& a, employee& b)
{
	a >> b.num >> b.name >> b.age >> b.salary;
	return a;
}
int insertfile(int n)
{
	employee w;
	ofstream outfile("filel.txt", ios::app);
	cout << "请输入要添加的职工信息：" << endl;
	cout << "NUM\tNAME\tAGE\tSALARY" << endl;
	cin >> w;
	outfile << w;
	return (n + 1);
}
int savetofile()
{
	int n = 0;
	employee w;
	while (n < 1 || n>100)
	{
		cout << "请输入职工的个数(1-100):";
		cin >> n;
	}
	ofstream outfile("filel.txt", ios::out);
	cout << "NUM\tNAME\tAGE\tSALARY" << endl;
	for (int i = n; i > 0; i--)
	{
		cin >> w;
		outfile << w;
	}
	return n;
}
void outfromfile(int n)
{
	employee w[101];
	ifstream infile("filel.txt", ios::in);
	cout << "NUM\tNAME\tAGE\tSALARY" << endl;
	for (int i = 0; i < n; i++)
	{
		infile >> w[i];
		cout << w[i];
	}
}
void findfile(int n)
{
	cout << "请输入要查找的职工号：";
	int i = 0, v = 0, num = 0;
	cin >> num;
	employee w[100];
	ifstream infile("filel.txt", ios::in);
	for (i = 1; i <= n; i++)
	{
		infile >> w[i];
		if (w[i].num == num)
		{
			v = 1; break;
		}
	}
	if (v)
	{
		cout << "查找成功！" << endl;
		cout << "第" << i << "个职工 该职工的信息如下：" << endl;
		cout << "NUM\tNAME\tAGE\tSALARY" << endl;
		cout << w[i];
	}
	else
		cout << "查无此人！" << endl;
}
int main()
{
	int n;
	n = savetofile();
	outfromfile(n);
	findfile(n);
	n = insertfile(n);
	findfile(n);
	return 0;
}

