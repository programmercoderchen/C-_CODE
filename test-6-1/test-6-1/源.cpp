#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
#define N 10
using namespace std;
struct Student
{
	string name;
	string num;
	double chinese, english, math;
	int title;//学段,1-小学，2-中学，3-大学
};
void menu(Student s[], int& n);//声明
void guanli_menu(Student s[], int& n);//显示一级菜单

int outfromfile(Student s[])//从文件读取
{

	int n = 0;
	fstream infile("data.txt", ios::in);
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
	n--;
	infile.close();
	return n;
}
void savefile(Student s[], int& n)//保存文件
{
	int i;
	fstream outfile("data.txt", ios::out);
	if (!outfile)
	{
		cout << "open error\n";
		exit(1);
	}
	for (i = 0; i < n; i++)
		outfile << s[i].name << "\t" << s[i].num << "\t" << s[i].chinese << "\t" << s[i].english << "\t" << s[i].math << "\t" << s[i].title << endl;
	outfile.close();
}
void showsigledata(Student t)
{
	cout << t.name << "\t" << t.num << "\t" << t.chinese << "\t" << t.english << "\t" << t.math << "\t";
	switch (t.title)
	{
	case 1:cout << "小学"; break;
	case 2:cout << "中学"; break;
	case 3:cout << "大学"; break;
	}
	cout << endl;
}
int searchbynum(Student s[], int& n, string num)//查询数组中是否存在学号为num的学生信息，有的话返回对应下标，没有返回-1
{
	int i;
	for (i = 0; i < n; i++)
		if (s[i].num == num)
			return i;
	//if(i==n)
	return -1;
}
/*int searchbyname(Student s[],int &n)//查询数组中是否存在某个姓名的学生信息，有的话返回对应下标，没有返回-1
{
	int i;
	string name;
	cout<<"请输入要查询的姓名：";
	cin>>name;
	for(i=0;i<n;i++)
		if(s[i].name==name)
			return i;
	//if(i==n)
			return -1;
}*/
int searchbyname(Student s[], int& n)//查询数组中是否存在某个姓名的学生信息，有的话直接输出结果
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
				cout << "姓名\t学号\t语文\t英语\t数学\t学段" << endl;
			showsigledata(s[i]);
		}
	return temp;
}
void adddata(Student s[], int& n)
{
	cout << "请输入学生信息：" << endl;
	cout << "姓名\t学号\t语文\t英语\t数学\t" << endl;//学段
	cin >> s[n].name >> s[n].num >> s[n].chinese >> s[n].english >> s[n].math;

	while (1)
	{
		cout << "请输入学段信息（1-小学，2-中学，3-大学）：";
		cin >> s[n].title;
		if (s[n].title >= 1 && s[n].title <= 3)
			break;
		cout << "输入错误，请重新输入……" << endl;
	}
	//判断学号是否重复
	if (searchbynum(s, n, s[n].num) == -1)
	{
		n++;
		if (n <= N)
			cout << "信息添加成功……" << endl;
		else
		{
			cout << "信息添加失败，该班级人数已满……" << endl;
		}
	}
	else
	{
		cout << "信息添加失败，该学号已存在……" << endl;
	}
	Sleep(2000);
}

void showdata(Student s[], int& n)//显示所有数据
{
	int i;
	if (n > 0)
		cout << "姓名\t学号\t语文\t英语\t数学\t学段" << endl;
	for (i = 0; i < n; i++)
	{
		showsigledata(s[i]);
		/*cout<<s[i].name<<"\t"<<s[i].num<<"\t"<<s[i].chinese<<"\t"<<s[i].english<<"\t"<<s[i].math<<"\t";
		switch(s[i].title)
		{
		case 1:cout<<"小学";break;
		case 2:cout<<"中学";break;
		case 3:cout<<"大学";break;
		}
		cout<<endl;*/
	}
}
void deletedata(Student s[], int& n)
{
	string del_num;
	int search_result;//查询结果
	cout << "请输入需要删除的学号：";
	cin >> del_num;
	search_result = searchbynum(s, n, del_num);
	if (search_result == -1)
	{
		cout << "信息删除失败，该学号不存在……" << endl;
		//cout<<"是否继续删除（Y/N）："
		cout << "正在返回上一级菜单……" << endl;
		//Sleep(2000);
		//	guanli_menu(s,n);
	}
	else
	{
		char c;
		cout << "姓名\t学号\t语文\t英语\t数学\t学段" << endl;
		cout << s[search_result].name << "\t" << s[search_result].num << "\t" << s[search_result].chinese << "\t" << s[search_result].english << "\t" << s[search_result].math << "\t" << s[search_result].title << endl;
		cout << "是否确定要删除以上信息（Y/N）：";
		cin >> c;
		if (c == 'Y' || c == 'y')
		{
			for (int i = search_result; i < n; i++)
				s[i] = s[i + 1];
			n--;
			cout << "数据删除成功，正在返回上一级菜单……" << endl;
			//Sleep(2000);
			//guanli_menu(s,n);
		}
		else
		{
			cout << "删除操作取消，正在返回上一级菜单……" << endl;
			//Sleep(2000);
			//guanli_menu(s,n);
		}
	}
	Sleep(2000);
	guanli_menu(s, n);
}
void modifydata(Student s[], int& n)
{
	string modify_num;
	int search_result;//原始查询结果
	cout << "请输入需要修改的学号：";
	cin >> modify_num;
	search_result = searchbynum(s, n, modify_num);
	//cout<<search_result<<endl;
	if (search_result == -1)
	{
		cout << "信息查询失败，该学号不存在……" << endl;
		//cout<<"是否继续删除（Y/N）："
		cout << "正在返回上一级菜单……" << endl;
	}
	else
	{
		char c;
		cout << "姓名\t学号\t语文\t英语\t数学\t学段" << endl;
		showsigledata(s[search_result]);
		/*cout<<s[search_result].name<<"\t"<<s[search_result].num<<"\t"<<s[search_result].chinese<<"\t"<<s[search_result].english<<"\t"<<s[search_result].math<<"\t";
		switch(s[search_result].title)
		{
		case 1:cout<<"小学";break;
		case 2:cout<<"中学";break;
		case 3:cout<<"大学";break;
		}
		cout<<endl;//<<s[search_result].title<<endl;*/
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
			Student temp;
			cout << "请输入新的数据：\n姓名:";
			cin >> temp.name;
			cout << "学号:";
			cin >> temp.num;
			cout << "语文:";
			cin >> temp.chinese;
			cout << "英语:";
			cin >> temp.english;
			cout << "数学:";
			cin >> temp.math;
			while (1)
			{
				cout << "请输入学段信息（1-小学，2-中学，3-大学）：";
				cin >> temp.title;
				if (temp.title >= 1 && temp.title <= 3)
					break;
				cout << "输入错误，请重新输入……" << endl;
			}
			int new_s;//修改后的查询结果
			new_s = searchbynum(s, n, temp.num);
			//cout<<s[search_result].num<<endl;
		//	cout<<s[new_s].num<<endl;
			//cout<<new_s<<endl;	
			if (new_s == search_result || new_s == -1)
			{
				s[search_result] = temp;
				cout << "数据修改成功，正在返回上一级菜单……" << endl;
			}
			else
			{

				cout << "信息修改失败，该学号已存在……" << endl;
				cout << "正在返回上一级菜单……" << endl;
			}
		}
	}
}
void guanli_menu(Student s[], int& n)//显示一级菜单
{
	int i;
	while (1)
	{
		showdata(s, n);
		cout << "\t\t信息管理" << endl;
		cout << "1、添加学生信息" << endl;
		cout << "2、删除学生信息" << endl;
		cout << "3、修改学生信息" << endl;
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
	case 1:adddata(s, n); guanli_menu(s, n); break;
	case 2:deletedata(s, n); break;
	case 3:modifydata(s, n); guanli_menu(s, n); break;
	case 4:cout << "正在返回上一级菜单……" << endl;
		Sleep(2000);
		menu(s, n);
	}
}
void chaxun_menu(Student s[], int& n)//显示查询菜单
{
	int i;
	int t;//保存查询返回的结果所在的下标，-1表示找不到
	while (1)
	{
		//showdata(s,n);
		cout << "\t\t信息查询" << endl;
		cout << "1、按照姓名查询" << endl;
		cout << "2、按照学号查询" << endl;
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
			cout << "不存在该学生……" << endl;
		/*else
		{
			cout<<"姓名\t学号\t语文\t英语\t数学\t学段"<<endl;
			showsigledata(s[t]);
		}*/
		system("pause");
		break;
	}
	case 2:
	{
		string num;
		cout << "请输入要查询的学号：";
		cin >> num;
		t = searchbynum(s, n, num);
		if (t == -1)
			cout << "该学号信息不存在……" << endl;
		else
		{
			cout << "姓名\t学号\t语文\t英语\t数学\t学段" << endl;
			showsigledata(s[t]);
		}
		system("pause");
		//	chaxun_menu(s,n);
		break;
	}
	case 3:cout << "正在返回上一级菜单……" << endl;
		Sleep(2000);
	}
}
void tongjibymath(Student s[], int& n, double min, double max)
{
	int num = 0;//符合条件的数量
	for (int t = 0; t < n; t++)
	{
		if (s[t].math >= min && s[t].math <= max)
		{
			num++;
			if (num == 1)
				cout << "姓名\t学号\t语文\t英语\t数学\t学段" << endl;
			showsigledata(s[t]);
		}
	}
	cout << "数学成绩在" << min << "和" << max << "之间的学生人数总共有" << num << "个" << endl;
	Sleep(2000);
}
void tongjibyenglish(Student s[], int& n, double min, double max)
{
	int num = 0;//符合条件的数量
	for (int t = 0; t < n; t++)
	{
		if (s[t].english >= min && s[t].english <= max)
		{
			num++;
			if (num == 1)
				cout << "姓名\t学号\t语文\t英语\t数学\t学段" << endl;
			showsigledata(s[t]);
		}
	}
	cout << "英语成绩在" << min << "和" << max << "之间的学生人数总共有" << num << "个" << endl;
	Sleep(2000);
}
void tongji_menu(Student s[], int& n)//显示统计菜单
{
	int i;
	double min, max;//表示最低分和最高分
	cout << "\t\t统计菜单" << endl;
	while (1)
	{
		cout << "请选择要统计的科目（1语文   2数学    3英语）：";
		cin >> i;
		if (i >= 1 && i <= 3)
			break;
		cout << "输入错误，请重新输入" << endl;
	}
	cout << "请输入最低分：";
	cin >> min;
	cout << "请输入最高分：";
	cin >> max;
	if (min < 0 || min>100 || max < 0 || max>100 || min > max)
	{
		cout << "输入错误，正在返回上一级菜单" << endl;
		Sleep(2000);
	}
	else
	{
		switch (i)
		{
		case 1: {//tongjibychinese(s,n,min,max)
			int num = 0;//符合条件的数量
			for (int t = 0; t < n; t++)
			{
				if (s[t].chinese >= min && s[t].chinese <= max)
				{
					num++;
					if (num == 1)
						cout << "姓名\t学号\t语文\t英语\t数学\t学段" << endl;
					showsigledata(s[t]);
					if (num % 2 == 0)
					{
						system("pause");
						cout << "姓名\t学号\t语文\t英语\t数学\t学段" << endl;

					}
				}
			}
			cout << "语文成绩在" << min << "和" << max << "之间的学生人数总共有" << num << "个" << endl;
			Sleep(2000);
			break;
		}
		case 2:tongjibymath(s, n, min, max); break;
		case 3:tongjibyenglish(s, n, min, max); break;
		}
	}

}
void sortbychineseup(Student s[], int& n)
{
	int i, j, k;
	Student t;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
			if (s[k].chinese > s[j].chinese)
				k = j;
		if (k != i)
		{
			t = s[k];
			s[k] = s[i];
			s[i] = t;
		}
	}
}
void sortbychinesedown(Student s[], int& n)
{
	int i, j, k;
	Student t;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
			if (s[k].chinese < s[j].chinese)
				k = j;
		if (k != i)
		{
			t = s[k];
			s[k] = s[i];
			s[i] = t;
		}
	}
}
void paixu_menu(Student s[], int& n)//显示排序菜单
{
	int i;
	int  shunxu;//1表示升序，2表示降序
	cout << "\t\t统计菜单" << endl;
	while (1)
	{
		cout << "请选择要统计的科目（1语文   2数学    3英语）：";
		cin >> i;
		if (i >= 1 && i <= 3)
			break;
		cout << "输入错误，请重新输入" << endl;
	}
	while (1)
	{
		cout << "请选择顺序（1升序   2降序）：";
		cin >> shunxu;
		if (shunxu >= 1 && shunxu <= 2)
			break;
		cout << "输入错误，请重新输入" << endl;
	}
	switch (i)
	{
	case 1:if (shunxu == 1)
		sortbychineseup(s, n);
		  else
		sortbychinesedown(s, n);
		break;
	}
	showdata(s, n);
}
void menu(Student s[], int& n)//显示一级菜单
{
	int i;
	while (1)
	{
		cout << "\t\t学生成绩管理系统" << endl;
		cout << "1、信息管理" << endl;
		cout << "2、信息查询" << endl;
		cout << "3、成绩统计" << endl;
		cout << "4、成绩排名" << endl;
		cout << "5、退出" << endl;
		cin >> i;
		if (i >= 1 && i <= 5)
			break;
		cout << "输入错误，请重新输入……" << endl;
		Sleep(2000);
		system("cls");
	}
	switch (i)
	{
	case 1:guanli_menu(s, n); break;
	case 2:chaxun_menu(s, n); menu(s, n); break;
	case 3:tongji_menu(s, n); menu(s, n); break;
	case 4:paixu_menu(s, n); menu(s, n); break;
	case 5:savefile(s, n);
		cout << "正在退出系统……" << endl;
		Sleep(2000); exit(0);
	}
}

int main()
{
	Student s[N];
	int s_num;//数组的当前规模
	s_num = outfromfile(s);
	menu(s, s_num);
	return 0;
}
