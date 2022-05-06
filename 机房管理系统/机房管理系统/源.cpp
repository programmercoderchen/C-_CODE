#include<iostream>
#include"windows.h"
#include "fstream"
using namespace std;
struct jifang//机房
{
	char name[20];   //机房编号
	int ren;		 //最大人数
	char fen[20];    //机房分类
	char zhuangtai[20]; //机房使用状态
};
void kai(struct jifang s[], int a);			//1级菜单 
void menu(struct jifang s[], int a);			//2级菜单 
int  readData(struct jifang s[]);  			//读取数据 
void addData(struct jifang s[], int& a);		//增加数据
void saveData(struct jifang s[], int a); 	//保留数据
void chaxun(struct jifang s[], int a);		//查询数据
void deleteDate(struct jifang s[], int& a);	//删除数据 
void xiugai(struct jifang s[], int& a); 		//修改数据 

int  readData(struct jifang s[])   //读取数据 
{
	int i = 0;
	ifstream infile("jifang.txt", ios::in);
	while (!infile.eof())
	{

		infile >> s[i].name >> s[i].ren >> s[i].fen >> s[i].zhuangtai;
		i++;
	}
	infile.close();
	return i;
}

void saveData(struct jifang s[], int a)  //保留数据
{
	int i = 0;
	ofstream outfile("jifang.txt", ios::out);
	for (i = 0; i < a; i++)
		outfile << endl << s[i].name << " " << s[i].ren << " " << s[i].fen << " " << s[i].zhuangtai;
	outfile.close();

}
void xiugai(struct jifang s[], int& a) //修改数据
{
	char name[20];
	int i;
	cout << "请输入要修改的机房：";
	cin >> name;
	for (i = 0; i < a; i++)
	{
		if (strcmp(name, s[i].name) == 0)
			break;
	}
	if (i == a)
	{
		cout << "该机房并不存在，修改失败\n";
		cout << "请重新输入\n";
		Sleep(2000);
		xiugai(s, a);
	}
	else
	{
		char tai[20] = "使用";
		if (strcmp(tai, s[i].zhuangtai) == 0)
		{
			cout << "该机房正在使用，修改失败\n";
			Sleep(3000);
			menu(s, a);
		}
		cout << "最大人数\t机房分类\t使用状态" << endl;
		cin >> s[i].ren >> s[i].fen >> s[i].zhuangtai;
		cout << "恭喜你，修改成功！！！！" << endl;
		Sleep(3000);
	}
	menu(s, a);
}

void addData(struct jifang s[], int& a)  //增加数据
{
	int i;
	char f = 'y';
	while (f == 'y' || f == 'Y')
	{
		cout << "机房编号   最大人数   机房分类   使用状态" << endl;
		cin >> s[a].name >> s[a].ren >> s[a].fen >> s[a].zhuangtai;
		for (i = 0; i < a; i++)
		{
			if (strcmp(s[a].name, s[i].name) == 0)
			{
				cout << "该机房已经存在，增加失败，请重新输入" << endl;
				Sleep(3000);
				addData(s, a);
			}
		}
		a++;
		cout << "是否继续新增数据（y或Y或n或N）:";
		cin >> f;
	}
	cout << "很好，增加数据成功";
	Sleep(3000);
	menu(s, a);
}
void deleteDate(struct jifang s[], int& a) //删除数据 
{
	char name[20];
	int i, k;
	cout << "请输入要删除的机房：";
	cin >> name;
	for (i = 0; i < a; i++)
	{
		if (strcmp(name, s[i].name) == 0)
			break;
	}
	if (i == a)
	{
		cout << "该机房不存在，删除失败\n";
		cout << "请重新输入\n";
		Sleep(2000);
		deleteDate(s, a);
	}
	else
	{
		char tai[20] = "使用";
		if (strcmp(tai, s[i].zhuangtai) == 0)
		{
			cout << "该机房正在使用，无法删除\n";
			Sleep(3000);
			menu(s, a);
		}
		for (k = i + 1; k < a; k++)
			s[k - 1] = s[k];
		cout << "真棒！，你已经成功删除该机房";
		Sleep(3000);
	}
	a--;
	menu(s, a);
}

void chaxun(struct jifang s[], int a) 		//查询数据
{

	system("cls"); //清屏
	cout << "请输入机房分类:";
	char t[20]; int i;
	cin >> t;
	for (i = 0; i < a; i++)
	{
		int z;
		z = 0;
		if (strcmp(t, s[i].fen) == 0)
			if (z < 10)
			{
				z++;
				cout << s[i].name << "\t" << "\t" << s[i].ren << "\t" << "\t" << s[i].fen << "\t" << s[i].zhuangtai << endl;
			}
	}
	Sleep(3000);
	/*
	if(i==a)
	{
		cout<<"不存在该机房，请重新输入\n";
		Sleep(3000);
		chaxun(s,a);
	}
	else
	{
		cout<<"机房编号\t最大人数\t机房分类\t使用状态"<<endl;
		cout<<s[i].name<<"\t"<<"\t"<<s[i].ren<<"\t"<<"\t"<<s[i].fen<<"\t"<<s[i].zhuangtai;
		Sleep(4000);
	}*/
	menu(s, a);
}

void menu(struct jifang s[], int a)		//2级菜单
{
	int n;
	while (1)
	{
		saveData(s, a);
		system("cls"); //清屏
		cout << "		机房管理系统\n";
		cout << "   1.增加功能\n";
		cout << "   2.查询功能\n";
		cout << "   3.修改功能\n";
		cout << "   4.删除功能\n";
		cout << "   5.返回上一级菜单\n";
		cout << "========================================" << endl;
		cout << "请输入你的操作命令：" << endl;
		cin >> n;
		if (n > 5 || n < 1)
		{
			cout << "输入错误，请重新输入！" << endl;
			Sleep(1000);
			continue;
		}
		switch (n)
		{
		case 1:addData(s, a); break;
		case 2:chaxun(s, a); break;
		case 3:xiugai(s, a); break;
		case 4:deleteDate(s, a); break;
		case 5:system("cls");
			kai(s, a);
		}
	}

}
void kai(struct jifang s[], int a)    //1级菜单 
{
	int n;
	cout << " *****************************************************" << endl;
	cout << " **** 欢迎来到 机房管理系统(目前机房数共有：" << a << "个) ****" << endl;
	cout << " ***************************************************** " << endl;
	cout << "   1.进入" << endl;
	cout << "   2.退出" << endl;
	cout << "========================================" << endl;
	cout << "请输入你的操作命令：" << endl;
	cin >> n;
	while (n > 2 || n < 1)
	{

		cout << "输入错误，请重新输入！" << endl;
		cout << "请输入你的操作命令：" << endl;
		cin >> n;
	}
	switch (n)
	{
	case 1:menu(s, a); break;
	case 2:exit(0);
	}
}
int main()
{
	jifang s[100];
	int a;
	a = readData(s);
	kai(s, a);
	return 0;
}