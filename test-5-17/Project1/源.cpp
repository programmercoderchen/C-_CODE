#include <iostream>
#include <string.h>
using namespace std;

static int i = 1;
static int j = 1;
class Custom
{
public:
	Custom(string zh,double y):zhanghuming(zh),yue(y){}
	void showbalance()
	{
		cout << "账户余额：" << yue << endl;
	}
	void Deposit()
	{
		double deposit = 0;
		cout << "请输入存款金额：";
		cin >> deposit;
		yue += deposit;
		cout << "账户余额为：" << yue << endl;
	}
protected:
	string zhanghuming;
	double yue;
};

class CheckingCustom:public Custom
{
public:
	CheckingCustom(string zh, double y) :Custom(zh, y) 
	{ 
		static int num = 10000;
		int zhanghao =0;
		zhanghao = num+i;
		i++;
		cout << "账号：" << zhanghao << "\t";
		cout << "户名：" << zhanghuming << "\t";
		cout << "余额：" << yue << "元" << endl;
	}
	void WithDraw()
	{
		int w = 0;
		cin >> w;
		yue =yue-w+yue*0.005;
		cout << "取款金额为：" << w << "\t";
		cout << "账户余额为：" << yue << endl;
	}
protected:
	static int num;
};
class FixedCustom :public Custom
{
public:
	FixedCustom(string zh, double y) :Custom(zh, y) 
	{ 
		static int num = 20000;
		int zhanghao = 0;
		zhanghao = num + j;
		j++;
		cout << "账号：" << zhanghao << "\t";
		cout << "户名：" << zhanghuming << "\t";
		cout << "余额：" << yue << "元" << endl;
	}
	void WithDraw()
	{
		int w = 0;
		cin >> w;
		cout << "取款金额为：" << w << "\t";
		if (yue > 500)
		{
			yue = yue - w + yue * 0.06;
			cout << "账户余额为：" << yue << endl;
		}
		else if (yue > 0 && yue < 500)
		{
			yue = yue - w + yue * 0.03;
			cout << "账户余额为：" << yue << endl;
			if (yue < 0)
			{
				cout << "余额不足!" << endl;
			}
		}
	}
protected:
	static int num;
};
int main()
{
	CheckingCustom cc1("aa", 200), cc2("ee", 139000);
	FixedCustom fc1("bb", 300), fc2("cc", 20), fc3("dd", 1300);
	cc1.showbalance();
	cc1.Deposit();
	cc2.WithDraw();
	fc1.Deposit();
	fc2.WithDraw();
	fc3.WithDraw();
	return 0;
}
 
//int outfromfile(Personal s[])//从文件读取
//{
//	int n = 0;
//	ifstream infile("data.txt", ios::in);
//	if (!infile)
//	{ 
//		cout << "打开失败" << endl;
//		exit(1);
//	}
//	while (!infile.eof())
//	{
//		infile >> s[n].name >> s[n].ID >> s[n].sex >> s[n].deposit >> s[n].overmoney >> s[n].type;
//		n++;
//	}
//	n--;
//	infile.close();
//	return n;
//}
//void savefile(Personal s[], int& n)//保存文件
//{
//	int i;
//	ofstream outfile("data.txt", ios::out);
//	if (!outfile)
//	{
//		cout << "打开失败\n";
//		exit(1);
//	}
//	for (i = 0; i < n; i++)
//		outfile << s[i].name << "\t" << s[i].ID << "\t" << s[i].sex << "\t" << s[i].deposit << "\t" << s[i].overmoney << "\t" << s[i].type << endl;
//	outfile.close();
//}

//class employee
//{
//public:
//	string getnum();
//	int savetofile()
//	{
//		ifstream infile("filel.txt", ios::in);
//	}
//	friend ostream& operator <<(ostream& output, employee& e);
//	friend istream& operator >>(istream& input, employee& e);
//private:
//	string num;
//	string name;
//	int age;
//	double salary;
//};
//ostream& operator <<(ostream& output, employee& e)
//{
//
//}
//istream& operator >>(istream& input, employee& e)
//{
//
//}
//int main()
//{
//	int n;
//	n = savetofile();
//	outformfile(n);
//	findfile(n);
//	n = insertfile(n);
//	findfile(n);
//	return 0;
//}