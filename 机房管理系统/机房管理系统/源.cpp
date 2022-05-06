#include<iostream>
#include"windows.h"
#include "fstream"
using namespace std;
struct jifang//����
{
	char name[20];   //�������
	int ren;		 //�������
	char fen[20];    //��������
	char zhuangtai[20]; //����ʹ��״̬
};
void kai(struct jifang s[], int a);			//1���˵� 
void menu(struct jifang s[], int a);			//2���˵� 
int  readData(struct jifang s[]);  			//��ȡ���� 
void addData(struct jifang s[], int& a);		//��������
void saveData(struct jifang s[], int a); 	//��������
void chaxun(struct jifang s[], int a);		//��ѯ����
void deleteDate(struct jifang s[], int& a);	//ɾ������ 
void xiugai(struct jifang s[], int& a); 		//�޸����� 

int  readData(struct jifang s[])   //��ȡ���� 
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

void saveData(struct jifang s[], int a)  //��������
{
	int i = 0;
	ofstream outfile("jifang.txt", ios::out);
	for (i = 0; i < a; i++)
		outfile << endl << s[i].name << " " << s[i].ren << " " << s[i].fen << " " << s[i].zhuangtai;
	outfile.close();

}
void xiugai(struct jifang s[], int& a) //�޸�����
{
	char name[20];
	int i;
	cout << "������Ҫ�޸ĵĻ�����";
	cin >> name;
	for (i = 0; i < a; i++)
	{
		if (strcmp(name, s[i].name) == 0)
			break;
	}
	if (i == a)
	{
		cout << "�û����������ڣ��޸�ʧ��\n";
		cout << "����������\n";
		Sleep(2000);
		xiugai(s, a);
	}
	else
	{
		char tai[20] = "ʹ��";
		if (strcmp(tai, s[i].zhuangtai) == 0)
		{
			cout << "�û�������ʹ�ã��޸�ʧ��\n";
			Sleep(3000);
			menu(s, a);
		}
		cout << "�������\t��������\tʹ��״̬" << endl;
		cin >> s[i].ren >> s[i].fen >> s[i].zhuangtai;
		cout << "��ϲ�㣬�޸ĳɹ���������" << endl;
		Sleep(3000);
	}
	menu(s, a);
}

void addData(struct jifang s[], int& a)  //��������
{
	int i;
	char f = 'y';
	while (f == 'y' || f == 'Y')
	{
		cout << "�������   �������   ��������   ʹ��״̬" << endl;
		cin >> s[a].name >> s[a].ren >> s[a].fen >> s[a].zhuangtai;
		for (i = 0; i < a; i++)
		{
			if (strcmp(s[a].name, s[i].name) == 0)
			{
				cout << "�û����Ѿ����ڣ�����ʧ�ܣ�����������" << endl;
				Sleep(3000);
				addData(s, a);
			}
		}
		a++;
		cout << "�Ƿ�����������ݣ�y��Y��n��N��:";
		cin >> f;
	}
	cout << "�ܺã��������ݳɹ�";
	Sleep(3000);
	menu(s, a);
}
void deleteDate(struct jifang s[], int& a) //ɾ������ 
{
	char name[20];
	int i, k;
	cout << "������Ҫɾ���Ļ�����";
	cin >> name;
	for (i = 0; i < a; i++)
	{
		if (strcmp(name, s[i].name) == 0)
			break;
	}
	if (i == a)
	{
		cout << "�û��������ڣ�ɾ��ʧ��\n";
		cout << "����������\n";
		Sleep(2000);
		deleteDate(s, a);
	}
	else
	{
		char tai[20] = "ʹ��";
		if (strcmp(tai, s[i].zhuangtai) == 0)
		{
			cout << "�û�������ʹ�ã��޷�ɾ��\n";
			Sleep(3000);
			menu(s, a);
		}
		for (k = i + 1; k < a; k++)
			s[k - 1] = s[k];
		cout << "����������Ѿ��ɹ�ɾ���û���";
		Sleep(3000);
	}
	a--;
	menu(s, a);
}

void chaxun(struct jifang s[], int a) 		//��ѯ����
{

	system("cls"); //����
	cout << "�������������:";
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
		cout<<"�����ڸû���������������\n";
		Sleep(3000);
		chaxun(s,a);
	}
	else
	{
		cout<<"�������\t�������\t��������\tʹ��״̬"<<endl;
		cout<<s[i].name<<"\t"<<"\t"<<s[i].ren<<"\t"<<"\t"<<s[i].fen<<"\t"<<s[i].zhuangtai;
		Sleep(4000);
	}*/
	menu(s, a);
}

void menu(struct jifang s[], int a)		//2���˵�
{
	int n;
	while (1)
	{
		saveData(s, a);
		system("cls"); //����
		cout << "		��������ϵͳ\n";
		cout << "   1.���ӹ���\n";
		cout << "   2.��ѯ����\n";
		cout << "   3.�޸Ĺ���\n";
		cout << "   4.ɾ������\n";
		cout << "   5.������һ���˵�\n";
		cout << "========================================" << endl;
		cout << "��������Ĳ������" << endl;
		cin >> n;
		if (n > 5 || n < 1)
		{
			cout << "����������������룡" << endl;
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
void kai(struct jifang s[], int a)    //1���˵� 
{
	int n;
	cout << " *****************************************************" << endl;
	cout << " **** ��ӭ���� ��������ϵͳ(Ŀǰ���������У�" << a << "��) ****" << endl;
	cout << " ***************************************************** " << endl;
	cout << "   1.����" << endl;
	cout << "   2.�˳�" << endl;
	cout << "========================================" << endl;
	cout << "��������Ĳ������" << endl;
	cin >> n;
	while (n > 2 || n < 1)
	{

		cout << "����������������룡" << endl;
		cout << "��������Ĳ������" << endl;
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