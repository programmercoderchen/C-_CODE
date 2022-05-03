#include <iostream>
#include<fstream>
#include<string>
#include<windows.h>
#define N 100
using namespace std;

enum option//枚举
{
	x,//0
	ziliaoguanli,//1
	cunkuan,//2
	qukuan,//3
	check,//4
	sort,//5
	Exit//6
};
struct Personal
{
	string name;//名字
	string ID;//身份证
	string sex;//性别
	long int deposit;//存款
	long int overmoney;//透支额度
	string type;//类型
};
void menu(Personal s[], int& n);//声明一级菜单
int searchbyID(Personal s[], int& n, string num);//身份证查找
void guanli(Personal s[], int& n);//资料管理的菜单
void showsigledata(Personal t);//显示单一数据

int outfromfile(Personal s[])//从文件读取
{
	int n = 0;
	ifstream infile("data.txt", ios::in);
	if (!infile)
	{
		cout << "打开失败" << endl;
		exit(1);
	}
	while (!infile.eof())
	{
		infile >> s[n].name >> s[n].ID >> s[n].sex >> s[n].deposit >> s[n].overmoney >> s[n].type;
		n++;
	}
	n--;
	infile.close();
	return n;
}
void savefile(Personal s[], int& n)//保存文件
{
	int i;
	ofstream outfile("data.txt", ios::out);
	if (!outfile)
	{
		cout << "打开失败\n";
		exit(1);
	}
	for (i = 0; i < n; i++)
		outfile << s[i].name << "\t" << s[i].ID << "\t" << s[i].sex << "\t" << s[i].deposit << "\t" << s[i].overmoney << "\t" << s[i].type << endl;
	outfile.close();
}
void adddata(struct Personal s[], int& n)  //增加数据
{
	cout << "请输入用户信息：" << endl;
	cout << "名字\t身份证\t性别\t存款\t透支额度\t类型" << endl;
	cin >> s[n].name >> s[n].ID >> s[n].sex >> s[n].deposit >> s[n].overmoney >> s[n].type;
	if (searchbyID(s, n, s[n].ID) == -1)
	{
		n++;
		if (n <= N)
			cout << "信息添加成功……" << endl;
		else
		{
			cout << "信息添加失败，该系统的人数已满……" << endl;
		}
	}
	else
	{
		cout << "信息添加失败，该用户已存在……" << endl;
	}
	Sleep(2000);
}
void deletedata(Personal s[], int& n)
{
	string x;
	int search_result;//查询结果
	cout << "请输入需要删除的身份证号：";
	cin >> x;
	search_result = searchbyID(s, n, x);
	if (search_result == -1)
	{
		cout << "信息删除失败，该身份证不存在……" << endl;
		cout << "正在返回上一级菜单……" << endl;
	}
	else
	{
		char c;
		cout << "名字\t身份证\t性别\t存款\t透支额度\t类型" << endl;
		cout << s[search_result].name << "\t" << s[search_result].ID << "\t" << s[search_result].sex << "\t" << s[search_result].deposit  << "\t" << s[search_result].overmoney << "\t" << s[search_result].type << endl;
		cout << "是否确定要删除以上信息（Y/N）：";
		cin >> c;
		if (c == 'Y' || c == 'y')
		{
			for (int i = search_result; i < n; i++)
				s[i] = s[i + 1];//数据的覆盖
			n--;
			cout << "数据删除成功，正在返回上一级菜单……" << endl;
		}
		else
		{
			cout << "删除操作取消，正在返回上一级菜单……" << endl;
		}
	}
	Sleep(2000);
	guanli(s, n);
}
void modifydata(Personal s[], int& n)
{
	string x;
	int search_result;//原始查询结果
	cout << "请输入需要修改的用户身份证：";
	cin >> x;
	search_result = searchbyID(s, n, x);
	if (search_result == -1)
	{
		cout << "信息查询失败，该用户不存在……" << endl;
		cout << "正在返回上一级菜单……" << endl;
	}
	else
	{
		char c;
		cout << "名字\t身份证\t性别\t存款\t透支额度\t类型" << endl;
		showsigledata(s[search_result]);
		while (1)
		{
			cout << "是否确定要修改以上信息（Y/N）：";
			cin >> c;
			if (c == 'y' || c == 'Y' || c == 'n' || c == 'N')
				break;
			cout << "输入错误，请重新输入……" << endl;
		}
		if (c == 'n' || c == 'N')
			cout << "操作取消，正在返回上一级菜单" << endl;
		else
		{
			Personal temp;
			cout << "请输入新的数据：\n姓名:";
			cin >> temp.name;
			cout << "身份证号:";
			cin >> temp.ID;
			cout << "性别:";
			cin >> temp.sex;
			cout << "存款:";
			cin >> temp.deposit;
			cout << "透支额度:";
			cin >> temp.overmoney;
			cout << "类型：";
			cin >> temp.type;
			int j;//修改后的查询结果
			j = searchbyID(s, n, temp.ID);
			if (j == search_result || j == -1)
			{
				s[search_result] = temp;
				cout << "数据修改成功，正在返回上一级菜单……" << endl;
			}
			else
			{

				cout << "信息修改失败，该用户已存在……" << endl;
				cout << "正在返回上一级菜单……" << endl;
			}
		}
	}
}
void Cunkuan(Personal s[], int& n)//存款
{
	string x;
	int i,j;
	cout << "请输入要存款的用户ID：";
	cin >> x;
	i= searchbyID(s, n, x);
	if (i == -1)
	{
		cout << "该用户并不存在，存款失败\n";
		cout << "请重新输入\n";
		Sleep(2000);
	}
	else
	{
		cout << "请输入要存款的金额：" << endl;
		cin >> j;
		s[i].deposit += j;
		cout << "名字\t身份证\t性别\t存款\t透支额度\t类型" << endl;
		cout << s[i].name << "\t" << s[i].ID << s[i].sex << "\t" << s[i].deposit << "\t" << s[i].overmoney << "\t" << s[i].type << endl;
		cout << "恭喜你，存款成功" << endl;
		Sleep(2000);
	}
	menu(s, n);
}
void Qukuan(Personal s[], int& n)//取款
{
	string x;
	int i, j;
	cout << "请输入要取款的用户ID：";
	cin >> x;
	i = searchbyID(s, n, x);
	if (i == -1)
	{
		cout << "该用户并不存在，取款失败\n";
		cout << "请重新输入\n";
		Sleep(2000);
	}
	else
	{
		cout << "请输入要取款的金额：" << endl;
		cin >> j;
		s[i].deposit -= j;
		cout << "名字\t身份证\t性别\t存款\t透支额度\t类型" << endl;
		cout << s[i].name << "\t" << s[i].ID << s[i].sex << "\t" << s[i].deposit << "\t" << s[i].overmoney << "\t" << s[i].type << endl;
		cout << "恭喜你，取款成功" << endl;
		Sleep(2000);
	}
	menu(s, n);
}
void showsigledata(Personal t)
{
	cout << t.name << "\t" << t.ID << "\t" << t.sex << "\t" << t.deposit << "\t" << t.overmoney << "\t" << t.type << endl;
}
int searchbyname(Personal s[], int& n)//查询数组中是否存在某个身份证的用户信息，有的话直接输出结果
{
	int i;
	int temp = 0;//记录找到的元素的个数
	string name;
	cout << "请输入要查询的姓名：";
	cin >> name;
	for (i = 0; i < n; i++)
		if (s[i].name == name)
		{
			temp++;
			if (temp == 1)
				cout << "名字\t身份证\t性别\t存款\t透支额度\t类型" << endl;
			showsigledata(s[i]);
		}
	return temp;
}
int searchbyID(Personal s[], int& n, string num)//查询数组中是否存在学号为num的学生信息，有的话返回对应下标，没有返回-1
{
	int i;
	for (i = 0; i < n; i++)
		if (s[i].ID == num)
			return i;
	return -1;
}
void showdata(Personal s[], int& n)//显示所有数据
{
	int i;
	if (n > 0)
		cout << "名字\t身份证\t性别\t存款\t透支额度\t类型" << endl;
	for (i = 0; i < n; i++)
	{
			showsigledata(s[i]);
	}
}
void chaxun(Personal s[], int& n)//显示查询菜单
{
	int i;
	int t;
	while (1)
	{
		cout << "\t\t信息查询" << endl;
		cout << "1、按照姓名查询" << endl;
		cout << "2、按照身份证号查询" << endl;
		cout << "3、返回上一级菜单" << endl;
		cin >> i;
		if (i >= 1 && i <= 3)
			break;
		cout << "输入错误，请重新输入……" << endl;
		Sleep(2000);
		system("cls");
	}
	switch (i)
	{
	case 1:
	{
		t = searchbyname(s, n);
		if (t == 0)
			cout << "不存在该用户……" << endl;
		system("pause");
		break;
	}
	case 2:
	{
		string num;
		cout << "请输入要查询的身份证号：";
		cin >> num;
		t = searchbyID(s, n, num);
		if (t == -1)
			cout << "该用户信息不存在……" << endl;
		else
		{
			cout << "名字\t身份证\t性别\t存款\t透支额度\t类型" << endl;
			showsigledata(s[t]);
		}
		system("pause");
		break;
	}
	case 3:cout << "正在返回上一级菜单……" << endl;
		Sleep(2000);
	}
}
void sortup(Personal s[], int& n)
{
	int i, j, k;
	Personal t;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
			if (s[k].deposit > s[j].deposit)
				k = j;
		if (k != i)
		{
			t = s[k];
			s[k] = s[i];
			s[i] = t;
		}
	}
}
void sortdown(Personal s[], int& n)
{
	int i, j, k;
	Personal t;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
			if (s[k].deposit < s[j].deposit)
				k = j;
		if (k != i)
		{
			t = s[k];
			s[k] = s[i];
			s[i] = t;
		}
	}
}
void paixu(Personal s[], int& n)//显示排序菜单
{
	int  shunxu;//1表示升序，2表示降序
	while (1)
	{
		cout << "请选择顺序（1升序   2降序）：";
		cin >> shunxu;
		if (shunxu >= 1 && shunxu <= 2)
			break;
		cout << "输入错误，请重新输入" << endl;
	}
	switch (1)
	{
	case 1:if (shunxu == 1)
		sortup(s, n);
		  else
		sortdown(s, n);
		break;
	}
	showdata(s, n);
	system("pause");
}
void guanli(Personal s[], int& n)//显示二级菜单
{
	int i;
	while (1)
	{
		cout << "\t\t信息管理" << endl;
		cout << "1、添加用户信息" << endl;
		cout << "2、删除用户信息" << endl;
		cout << "3、修改信息" << endl;
		cout << "4、返回上一级菜单" << endl;
		cin >> i;
		if (i >= 1 && i <= 4)
			break;
		cout << "输入错误，请重新输入……" << endl;
		Sleep(2000);
		system("cls");
	}
	switch (i)
	{
	case 1:adddata(s, n); guanli(s, n); break;
	case 2:deletedata(s, n); break;
	case 3:modifydata(s, n); guanli(s, n); break;
	case 4:cout << "正在返回上一级菜单……" << endl;
		Sleep(2000);
		menu(s, n);
	}
}
void menu(Personal s[], int& n)//显示一级菜单
{
	int m;
	while (1)
	{
		system("cls");
		cout << "______________________________________" << endl;
		cout << "|--------欢迎来到银行管理系统--------|" << endl;
		cout << "|-----------请选择您的业务-----------|" << endl;
		cout << "|--------------1、资料管理-----------|" << endl;
		cout << "|--------------2、存款---------------|" << endl;
		cout << "|--------------3、取款---------------|" << endl;
		cout << "|--------------4、查询---------------|" << endl;
		cout << "|--------------5、排序---------------|" << endl;
		cout << "|______________6、退出_______________|" << endl;
		cin >> m;
		if (m >= 1 && m <= 6)
			break;
		cout << "输入错误，请重新输入……" << endl;
		Sleep(2000);
		system("cls");
	}
	switch (m)
	{
	case ziliaoguanli:
		guanli(s, n);
		break;
	case cunkuan:
		Cunkuan(s, n);
		menu(s, n);
		break;
	case qukuan:
		Qukuan(s, n);
		menu(s, n);
		break;
	case check:
		chaxun(s, n);
		menu(s, n);
		break;
	case sort:
		paixu(s, n);
		menu(s, n);
		break;
	case Exit:
		savefile(s, n);
		cout << "正在退出系统……" << endl;
		Sleep(2000); exit(0);
	}
}
int main()
{
	Personal s[N];
	int n;
	n = outfromfile(s);
	menu(s, n);
	return 0;
}