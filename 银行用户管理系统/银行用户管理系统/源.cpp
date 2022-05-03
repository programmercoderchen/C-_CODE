#include <iostream>
#include<fstream>
#include<string>
#include<windows.h>
#define N 100
using namespace std;

enum option//ö��
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
	string name;//����
	string ID;//���֤
	string sex;//�Ա�
	long int deposit;//���
	long int overmoney;//͸֧���
	string type;//����
};
void menu(Personal s[], int& n);//����һ���˵�
int searchbyID(Personal s[], int& n, string num);//���֤����
void guanli(Personal s[], int& n);//���Ϲ���Ĳ˵�
void showsigledata(Personal t);//��ʾ��һ����

int outfromfile(Personal s[])//���ļ���ȡ
{
	int n = 0;
	ifstream infile("data.txt", ios::in);
	if (!infile)
	{
		cout << "��ʧ��" << endl;
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
void savefile(Personal s[], int& n)//�����ļ�
{
	int i;
	ofstream outfile("data.txt", ios::out);
	if (!outfile)
	{
		cout << "��ʧ��\n";
		exit(1);
	}
	for (i = 0; i < n; i++)
		outfile << s[i].name << "\t" << s[i].ID << "\t" << s[i].sex << "\t" << s[i].deposit << "\t" << s[i].overmoney << "\t" << s[i].type << endl;
	outfile.close();
}
void adddata(struct Personal s[], int& n)  //��������
{
	cout << "�������û���Ϣ��" << endl;
	cout << "����\t���֤\t�Ա�\t���\t͸֧���\t����" << endl;
	cin >> s[n].name >> s[n].ID >> s[n].sex >> s[n].deposit >> s[n].overmoney >> s[n].type;
	if (searchbyID(s, n, s[n].ID) == -1)
	{
		n++;
		if (n <= N)
			cout << "��Ϣ��ӳɹ�����" << endl;
		else
		{
			cout << "��Ϣ���ʧ�ܣ���ϵͳ��������������" << endl;
		}
	}
	else
	{
		cout << "��Ϣ���ʧ�ܣ����û��Ѵ��ڡ���" << endl;
	}
	Sleep(2000);
}
void deletedata(Personal s[], int& n)
{
	string x;
	int search_result;//��ѯ���
	cout << "��������Ҫɾ�������֤�ţ�";
	cin >> x;
	search_result = searchbyID(s, n, x);
	if (search_result == -1)
	{
		cout << "��Ϣɾ��ʧ�ܣ������֤�����ڡ���" << endl;
		cout << "���ڷ�����һ���˵�����" << endl;
	}
	else
	{
		char c;
		cout << "����\t���֤\t�Ա�\t���\t͸֧���\t����" << endl;
		cout << s[search_result].name << "\t" << s[search_result].ID << "\t" << s[search_result].sex << "\t" << s[search_result].deposit  << "\t" << s[search_result].overmoney << "\t" << s[search_result].type << endl;
		cout << "�Ƿ�ȷ��Ҫɾ��������Ϣ��Y/N����";
		cin >> c;
		if (c == 'Y' || c == 'y')
		{
			for (int i = search_result; i < n; i++)
				s[i] = s[i + 1];//���ݵĸ���
			n--;
			cout << "����ɾ���ɹ������ڷ�����һ���˵�����" << endl;
		}
		else
		{
			cout << "ɾ������ȡ�������ڷ�����һ���˵�����" << endl;
		}
	}
	Sleep(2000);
	guanli(s, n);
}
void modifydata(Personal s[], int& n)
{
	string x;
	int search_result;//ԭʼ��ѯ���
	cout << "��������Ҫ�޸ĵ��û����֤��";
	cin >> x;
	search_result = searchbyID(s, n, x);
	if (search_result == -1)
	{
		cout << "��Ϣ��ѯʧ�ܣ����û������ڡ���" << endl;
		cout << "���ڷ�����һ���˵�����" << endl;
	}
	else
	{
		char c;
		cout << "����\t���֤\t�Ա�\t���\t͸֧���\t����" << endl;
		showsigledata(s[search_result]);
		while (1)
		{
			cout << "�Ƿ�ȷ��Ҫ�޸�������Ϣ��Y/N����";
			cin >> c;
			if (c == 'y' || c == 'Y' || c == 'n' || c == 'N')
				break;
			cout << "����������������롭��" << endl;
		}
		if (c == 'n' || c == 'N')
			cout << "����ȡ�������ڷ�����һ���˵�" << endl;
		else
		{
			Personal temp;
			cout << "�������µ����ݣ�\n����:";
			cin >> temp.name;
			cout << "���֤��:";
			cin >> temp.ID;
			cout << "�Ա�:";
			cin >> temp.sex;
			cout << "���:";
			cin >> temp.deposit;
			cout << "͸֧���:";
			cin >> temp.overmoney;
			cout << "���ͣ�";
			cin >> temp.type;
			int j;//�޸ĺ�Ĳ�ѯ���
			j = searchbyID(s, n, temp.ID);
			if (j == search_result || j == -1)
			{
				s[search_result] = temp;
				cout << "�����޸ĳɹ������ڷ�����һ���˵�����" << endl;
			}
			else
			{

				cout << "��Ϣ�޸�ʧ�ܣ����û��Ѵ��ڡ���" << endl;
				cout << "���ڷ�����һ���˵�����" << endl;
			}
		}
	}
}
void Cunkuan(Personal s[], int& n)//���
{
	string x;
	int i,j;
	cout << "������Ҫ�����û�ID��";
	cin >> x;
	i= searchbyID(s, n, x);
	if (i == -1)
	{
		cout << "���û��������ڣ����ʧ��\n";
		cout << "����������\n";
		Sleep(2000);
	}
	else
	{
		cout << "������Ҫ���Ľ�" << endl;
		cin >> j;
		s[i].deposit += j;
		cout << "����\t���֤\t�Ա�\t���\t͸֧���\t����" << endl;
		cout << s[i].name << "\t" << s[i].ID << s[i].sex << "\t" << s[i].deposit << "\t" << s[i].overmoney << "\t" << s[i].type << endl;
		cout << "��ϲ�㣬���ɹ�" << endl;
		Sleep(2000);
	}
	menu(s, n);
}
void Qukuan(Personal s[], int& n)//ȡ��
{
	string x;
	int i, j;
	cout << "������Ҫȡ����û�ID��";
	cin >> x;
	i = searchbyID(s, n, x);
	if (i == -1)
	{
		cout << "���û��������ڣ�ȡ��ʧ��\n";
		cout << "����������\n";
		Sleep(2000);
	}
	else
	{
		cout << "������Ҫȡ��Ľ�" << endl;
		cin >> j;
		s[i].deposit -= j;
		cout << "����\t���֤\t�Ա�\t���\t͸֧���\t����" << endl;
		cout << s[i].name << "\t" << s[i].ID << s[i].sex << "\t" << s[i].deposit << "\t" << s[i].overmoney << "\t" << s[i].type << endl;
		cout << "��ϲ�㣬ȡ��ɹ�" << endl;
		Sleep(2000);
	}
	menu(s, n);
}
void showsigledata(Personal t)
{
	cout << t.name << "\t" << t.ID << "\t" << t.sex << "\t" << t.deposit << "\t" << t.overmoney << "\t" << t.type << endl;
}
int searchbyname(Personal s[], int& n)//��ѯ�������Ƿ����ĳ�����֤���û���Ϣ���еĻ�ֱ��������
{
	int i;
	int temp = 0;//��¼�ҵ���Ԫ�صĸ���
	string name;
	cout << "������Ҫ��ѯ��������";
	cin >> name;
	for (i = 0; i < n; i++)
		if (s[i].name == name)
		{
			temp++;
			if (temp == 1)
				cout << "����\t���֤\t�Ա�\t���\t͸֧���\t����" << endl;
			showsigledata(s[i]);
		}
	return temp;
}
int searchbyID(Personal s[], int& n, string num)//��ѯ�������Ƿ����ѧ��Ϊnum��ѧ����Ϣ���еĻ����ض�Ӧ�±꣬û�з���-1
{
	int i;
	for (i = 0; i < n; i++)
		if (s[i].ID == num)
			return i;
	return -1;
}
void showdata(Personal s[], int& n)//��ʾ��������
{
	int i;
	if (n > 0)
		cout << "����\t���֤\t�Ա�\t���\t͸֧���\t����" << endl;
	for (i = 0; i < n; i++)
	{
			showsigledata(s[i]);
	}
}
void chaxun(Personal s[], int& n)//��ʾ��ѯ�˵�
{
	int i;
	int t;
	while (1)
	{
		cout << "\t\t��Ϣ��ѯ" << endl;
		cout << "1������������ѯ" << endl;
		cout << "2���������֤�Ų�ѯ" << endl;
		cout << "3��������һ���˵�" << endl;
		cin >> i;
		if (i >= 1 && i <= 3)
			break;
		cout << "����������������롭��" << endl;
		Sleep(2000);
		system("cls");
	}
	switch (i)
	{
	case 1:
	{
		t = searchbyname(s, n);
		if (t == 0)
			cout << "�����ڸ��û�����" << endl;
		system("pause");
		break;
	}
	case 2:
	{
		string num;
		cout << "������Ҫ��ѯ�����֤�ţ�";
		cin >> num;
		t = searchbyID(s, n, num);
		if (t == -1)
			cout << "���û���Ϣ�����ڡ���" << endl;
		else
		{
			cout << "����\t���֤\t�Ա�\t���\t͸֧���\t����" << endl;
			showsigledata(s[t]);
		}
		system("pause");
		break;
	}
	case 3:cout << "���ڷ�����һ���˵�����" << endl;
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
void paixu(Personal s[], int& n)//��ʾ����˵�
{
	int  shunxu;//1��ʾ����2��ʾ����
	while (1)
	{
		cout << "��ѡ��˳��1����   2���򣩣�";
		cin >> shunxu;
		if (shunxu >= 1 && shunxu <= 2)
			break;
		cout << "�����������������" << endl;
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
void guanli(Personal s[], int& n)//��ʾ�����˵�
{
	int i;
	while (1)
	{
		cout << "\t\t��Ϣ����" << endl;
		cout << "1������û���Ϣ" << endl;
		cout << "2��ɾ���û���Ϣ" << endl;
		cout << "3���޸���Ϣ" << endl;
		cout << "4��������һ���˵�" << endl;
		cin >> i;
		if (i >= 1 && i <= 4)
			break;
		cout << "����������������롭��" << endl;
		Sleep(2000);
		system("cls");
	}
	switch (i)
	{
	case 1:adddata(s, n); guanli(s, n); break;
	case 2:deletedata(s, n); break;
	case 3:modifydata(s, n); guanli(s, n); break;
	case 4:cout << "���ڷ�����һ���˵�����" << endl;
		Sleep(2000);
		menu(s, n);
	}
}
void menu(Personal s[], int& n)//��ʾһ���˵�
{
	int m;
	while (1)
	{
		system("cls");
		cout << "______________________________________" << endl;
		cout << "|--------��ӭ�������й���ϵͳ--------|" << endl;
		cout << "|-----------��ѡ������ҵ��-----------|" << endl;
		cout << "|--------------1�����Ϲ���-----------|" << endl;
		cout << "|--------------2�����---------------|" << endl;
		cout << "|--------------3��ȡ��---------------|" << endl;
		cout << "|--------------4����ѯ---------------|" << endl;
		cout << "|--------------5������---------------|" << endl;
		cout << "|______________6���˳�_______________|" << endl;
		cin >> m;
		if (m >= 1 && m <= 6)
			break;
		cout << "����������������롭��" << endl;
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
		cout << "�����˳�ϵͳ����" << endl;
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