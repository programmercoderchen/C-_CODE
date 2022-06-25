#include<iostream>
#include<fstream>
#include<windows.h>
using namespace std;
struct student
{
	char sno[20];
	char sname[20];
	float chinese;
	float math;
	float english;

};

void mmenu(student s[], int n);
int  readData(student s[])
{
	int i = 0;
	ifstream infile("student.txt", ios::in);

	while (!infile.eof())
	{

		infile >> s[i].sno >> s[i].sname >> s[i].chinese >> s[i].math >> s[i].english;
		i++;
	}

	infile.close();
	return i;

}

void addData(student s[], int& n)
{
	char flag = 'y';
	while (flag == 'y' || flag == 'Y')
	{
		cout << "学号\t姓名\t语文\t数学\t英语" << endl;
		cin >> s[n].sno >> s[n].sname >> s[n].chinese >> s[n].math >> s[n].english;
		n++;
		cout << "是否继续新增数据（y或Y或n或N）:";
		cin >> flag;

	}


}
void saveData(student s[], int n)
{
	int i = 0;
	ofstream outfile("student.txt", ios::out);

	for (i = 0; i < n; i++)
		outfile << endl << s[i].sno << " " << s[i].sname << " " << s[i].chinese << " " << s[i].math << " " << s[i].english;

	outfile.close();

}
void showData(student s[], int n)
{
	for (int i = 0; i < n; i++)
		cout << s[i].sno << "\t" << s[i].sname << "\t" << s[i].chinese << "\t" << s[i].math << "\t" << s[i].english << endl;
}
void weihuMenu(student s[], int count)
{
	int n;
	while (1)
	{
		system("cls");
		cout << "\t\t\t信息维护菜单\n";
		cout << "\t1.显示学生信息" << endl;
		cout << "\t2.增加学生信息" << endl;
		cout << "\t3.修改学生信息" << endl;
		cout << "\t4.删除学生信息" << endl;
		cout << "\t5.返回上一级菜单" << endl;
		cout << "========================================" << endl;
		cout << "请输入你的操作命令：" << endl;
		cin >> n;
		if (n > 5 || n < 1)
		{
			cout << "输入错误，请重新输入！" << endl;
			Sleep(3000);
			continue;
		}
		switch (n)
		{
		case 1:showData(s, count);	Sleep(3000); break;
		case 2:addData(s, count); break;
		case 3:break;
		case 4:break;
		case 5:	cout << "正在返回上一级的菜单……" << endl;
			Sleep(3000);
			system("cls");
			mmenu(s, count); return;
		}

	}
}
void mmenu(student s[], int count)
{
	int n;
	cout << "\t\t\t学生成绩管理系统\n";
	cout << "\t1.信息维护" << endl;
	cout << "\t2.信息查询" << endl;
	cout << "\t3.成绩统计" << endl;
	cout << "\t4.排序" << endl;
	cout << "\t5.退出" << endl;
	cout << "========================================" << endl;
	cout << "请输入你的操作命令：" << endl;
	cin >> n;
	while (n > 5 || n < 1)
	{
		cout << "输入错误，请重新输入！" << endl;
		cout << "请输入你的操作命令：" << endl;
		cin >> n;
	}
	switch (n)
	{
	case 1:weihuMenu(s, count); break;
	case 2: break;
	case 3: break;
	case 4: break;
	case 5:saveData(s, count);
		cout << "正在保存数据，退出系统……" << endl; break;

	}
	Sleep(3000);
	exit(0);

}

void main()
{
	student s[100];
	int n;

	n = readData(s);
	mmenu(s, n);


}