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
		cout << "ѧ��\t����\t����\t��ѧ\tӢ��" << endl;
		cin >> s[n].sno >> s[n].sname >> s[n].chinese >> s[n].math >> s[n].english;
		n++;
		cout << "�Ƿ�����������ݣ�y��Y��n��N��:";
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
		cout << "\t\t\t��Ϣά���˵�\n";
		cout << "\t1.��ʾѧ����Ϣ" << endl;
		cout << "\t2.����ѧ����Ϣ" << endl;
		cout << "\t3.�޸�ѧ����Ϣ" << endl;
		cout << "\t4.ɾ��ѧ����Ϣ" << endl;
		cout << "\t5.������һ���˵�" << endl;
		cout << "========================================" << endl;
		cout << "��������Ĳ������" << endl;
		cin >> n;
		if (n > 5 || n < 1)
		{
			cout << "����������������룡" << endl;
			Sleep(3000);
			continue;
		}
		switch (n)
		{
		case 1:showData(s, count);	Sleep(3000); break;
		case 2:addData(s, count); break;
		case 3:break;
		case 4:break;
		case 5:	cout << "���ڷ�����һ���Ĳ˵�����" << endl;
			Sleep(3000);
			system("cls");
			mmenu(s, count); return;
		}

	}
}
void mmenu(student s[], int count)
{
	int n;
	cout << "\t\t\tѧ���ɼ�����ϵͳ\n";
	cout << "\t1.��Ϣά��" << endl;
	cout << "\t2.��Ϣ��ѯ" << endl;
	cout << "\t3.�ɼ�ͳ��" << endl;
	cout << "\t4.����" << endl;
	cout << "\t5.�˳�" << endl;
	cout << "========================================" << endl;
	cout << "��������Ĳ������" << endl;
	cin >> n;
	while (n > 5 || n < 1)
	{
		cout << "����������������룡" << endl;
		cout << "��������Ĳ������" << endl;
		cin >> n;
	}
	switch (n)
	{
	case 1:weihuMenu(s, count); break;
	case 2: break;
	case 3: break;
	case 4: break;
	case 5:saveData(s, count);
		cout << "���ڱ������ݣ��˳�ϵͳ����" << endl; break;

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