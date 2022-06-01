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
	int title;//ѧ��,1-Сѧ��2-��ѧ��3-��ѧ
};
void menu(Student s[], int& n);//����
void guanli_menu(Student s[], int& n);//��ʾһ���˵�

int outfromfile(Student s[])//���ļ���ȡ
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
void savefile(Student s[], int& n)//�����ļ�
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
	case 1:cout << "Сѧ"; break;
	case 2:cout << "��ѧ"; break;
	case 3:cout << "��ѧ"; break;
	}
	cout << endl;
}
int searchbynum(Student s[], int& n, string num)//��ѯ�������Ƿ����ѧ��Ϊnum��ѧ����Ϣ���еĻ����ض�Ӧ�±꣬û�з���-1
{
	int i;
	for (i = 0; i < n; i++)
		if (s[i].num == num)
			return i;
	//if(i==n)
	return -1;
}
/*int searchbyname(Student s[],int &n)//��ѯ�������Ƿ����ĳ��������ѧ����Ϣ���еĻ����ض�Ӧ�±꣬û�з���-1
{
	int i;
	string name;
	cout<<"������Ҫ��ѯ��������";
	cin>>name;
	for(i=0;i<n;i++)
		if(s[i].name==name)
			return i;
	//if(i==n)
			return -1;
}*/
int searchbyname(Student s[], int& n)//��ѯ�������Ƿ����ĳ��������ѧ����Ϣ���еĻ�ֱ��������
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
				cout << "����\tѧ��\t����\tӢ��\t��ѧ\tѧ��" << endl;
			showsigledata(s[i]);
		}
	return temp;
}
void adddata(Student s[], int& n)
{
	cout << "������ѧ����Ϣ��" << endl;
	cout << "����\tѧ��\t����\tӢ��\t��ѧ\t" << endl;//ѧ��
	cin >> s[n].name >> s[n].num >> s[n].chinese >> s[n].english >> s[n].math;

	while (1)
	{
		cout << "������ѧ����Ϣ��1-Сѧ��2-��ѧ��3-��ѧ����";
		cin >> s[n].title;
		if (s[n].title >= 1 && s[n].title <= 3)
			break;
		cout << "����������������롭��" << endl;
	}
	//�ж�ѧ���Ƿ��ظ�
	if (searchbynum(s, n, s[n].num) == -1)
	{
		n++;
		if (n <= N)
			cout << "��Ϣ��ӳɹ�����" << endl;
		else
		{
			cout << "��Ϣ���ʧ�ܣ��ð༶������������" << endl;
		}
	}
	else
	{
		cout << "��Ϣ���ʧ�ܣ���ѧ���Ѵ��ڡ���" << endl;
	}
	Sleep(2000);
}

void showdata(Student s[], int& n)//��ʾ��������
{
	int i;
	if (n > 0)
		cout << "����\tѧ��\t����\tӢ��\t��ѧ\tѧ��" << endl;
	for (i = 0; i < n; i++)
	{
		showsigledata(s[i]);
		/*cout<<s[i].name<<"\t"<<s[i].num<<"\t"<<s[i].chinese<<"\t"<<s[i].english<<"\t"<<s[i].math<<"\t";
		switch(s[i].title)
		{
		case 1:cout<<"Сѧ";break;
		case 2:cout<<"��ѧ";break;
		case 3:cout<<"��ѧ";break;
		}
		cout<<endl;*/
	}
}
void deletedata(Student s[], int& n)
{
	string del_num;
	int search_result;//��ѯ���
	cout << "��������Ҫɾ����ѧ�ţ�";
	cin >> del_num;
	search_result = searchbynum(s, n, del_num);
	if (search_result == -1)
	{
		cout << "��Ϣɾ��ʧ�ܣ���ѧ�Ų����ڡ���" << endl;
		//cout<<"�Ƿ����ɾ����Y/N����"
		cout << "���ڷ�����һ���˵�����" << endl;
		//Sleep(2000);
		//	guanli_menu(s,n);
	}
	else
	{
		char c;
		cout << "����\tѧ��\t����\tӢ��\t��ѧ\tѧ��" << endl;
		cout << s[search_result].name << "\t" << s[search_result].num << "\t" << s[search_result].chinese << "\t" << s[search_result].english << "\t" << s[search_result].math << "\t" << s[search_result].title << endl;
		cout << "�Ƿ�ȷ��Ҫɾ��������Ϣ��Y/N����";
		cin >> c;
		if (c == 'Y' || c == 'y')
		{
			for (int i = search_result; i < n; i++)
				s[i] = s[i + 1];
			n--;
			cout << "����ɾ���ɹ������ڷ�����һ���˵�����" << endl;
			//Sleep(2000);
			//guanli_menu(s,n);
		}
		else
		{
			cout << "ɾ������ȡ�������ڷ�����һ���˵�����" << endl;
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
	int search_result;//ԭʼ��ѯ���
	cout << "��������Ҫ�޸ĵ�ѧ�ţ�";
	cin >> modify_num;
	search_result = searchbynum(s, n, modify_num);
	//cout<<search_result<<endl;
	if (search_result == -1)
	{
		cout << "��Ϣ��ѯʧ�ܣ���ѧ�Ų����ڡ���" << endl;
		//cout<<"�Ƿ����ɾ����Y/N����"
		cout << "���ڷ�����һ���˵�����" << endl;
	}
	else
	{
		char c;
		cout << "����\tѧ��\t����\tӢ��\t��ѧ\tѧ��" << endl;
		showsigledata(s[search_result]);
		/*cout<<s[search_result].name<<"\t"<<s[search_result].num<<"\t"<<s[search_result].chinese<<"\t"<<s[search_result].english<<"\t"<<s[search_result].math<<"\t";
		switch(s[search_result].title)
		{
		case 1:cout<<"Сѧ";break;
		case 2:cout<<"��ѧ";break;
		case 3:cout<<"��ѧ";break;
		}
		cout<<endl;//<<s[search_result].title<<endl;*/
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
			Student temp;
			cout << "�������µ����ݣ�\n����:";
			cin >> temp.name;
			cout << "ѧ��:";
			cin >> temp.num;
			cout << "����:";
			cin >> temp.chinese;
			cout << "Ӣ��:";
			cin >> temp.english;
			cout << "��ѧ:";
			cin >> temp.math;
			while (1)
			{
				cout << "������ѧ����Ϣ��1-Сѧ��2-��ѧ��3-��ѧ����";
				cin >> temp.title;
				if (temp.title >= 1 && temp.title <= 3)
					break;
				cout << "����������������롭��" << endl;
			}
			int new_s;//�޸ĺ�Ĳ�ѯ���
			new_s = searchbynum(s, n, temp.num);
			//cout<<s[search_result].num<<endl;
		//	cout<<s[new_s].num<<endl;
			//cout<<new_s<<endl;	
			if (new_s == search_result || new_s == -1)
			{
				s[search_result] = temp;
				cout << "�����޸ĳɹ������ڷ�����һ���˵�����" << endl;
			}
			else
			{

				cout << "��Ϣ�޸�ʧ�ܣ���ѧ���Ѵ��ڡ���" << endl;
				cout << "���ڷ�����һ���˵�����" << endl;
			}
		}
	}
}
void guanli_menu(Student s[], int& n)//��ʾһ���˵�
{
	int i;
	while (1)
	{
		showdata(s, n);
		cout << "\t\t��Ϣ����" << endl;
		cout << "1�����ѧ����Ϣ" << endl;
		cout << "2��ɾ��ѧ����Ϣ" << endl;
		cout << "3���޸�ѧ����Ϣ" << endl;
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
	case 1:adddata(s, n); guanli_menu(s, n); break;
	case 2:deletedata(s, n); break;
	case 3:modifydata(s, n); guanli_menu(s, n); break;
	case 4:cout << "���ڷ�����һ���˵�����" << endl;
		Sleep(2000);
		menu(s, n);
	}
}
void chaxun_menu(Student s[], int& n)//��ʾ��ѯ�˵�
{
	int i;
	int t;//�����ѯ���صĽ�����ڵ��±꣬-1��ʾ�Ҳ���
	while (1)
	{
		//showdata(s,n);
		cout << "\t\t��Ϣ��ѯ" << endl;
		cout << "1������������ѯ" << endl;
		cout << "2������ѧ�Ų�ѯ" << endl;
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
			cout << "�����ڸ�ѧ������" << endl;
		/*else
		{
			cout<<"����\tѧ��\t����\tӢ��\t��ѧ\tѧ��"<<endl;
			showsigledata(s[t]);
		}*/
		system("pause");
		break;
	}
	case 2:
	{
		string num;
		cout << "������Ҫ��ѯ��ѧ�ţ�";
		cin >> num;
		t = searchbynum(s, n, num);
		if (t == -1)
			cout << "��ѧ����Ϣ�����ڡ���" << endl;
		else
		{
			cout << "����\tѧ��\t����\tӢ��\t��ѧ\tѧ��" << endl;
			showsigledata(s[t]);
		}
		system("pause");
		//	chaxun_menu(s,n);
		break;
	}
	case 3:cout << "���ڷ�����һ���˵�����" << endl;
		Sleep(2000);
	}
}
void tongjibymath(Student s[], int& n, double min, double max)
{
	int num = 0;//��������������
	for (int t = 0; t < n; t++)
	{
		if (s[t].math >= min && s[t].math <= max)
		{
			num++;
			if (num == 1)
				cout << "����\tѧ��\t����\tӢ��\t��ѧ\tѧ��" << endl;
			showsigledata(s[t]);
		}
	}
	cout << "��ѧ�ɼ���" << min << "��" << max << "֮���ѧ�������ܹ���" << num << "��" << endl;
	Sleep(2000);
}
void tongjibyenglish(Student s[], int& n, double min, double max)
{
	int num = 0;//��������������
	for (int t = 0; t < n; t++)
	{
		if (s[t].english >= min && s[t].english <= max)
		{
			num++;
			if (num == 1)
				cout << "����\tѧ��\t����\tӢ��\t��ѧ\tѧ��" << endl;
			showsigledata(s[t]);
		}
	}
	cout << "Ӣ��ɼ���" << min << "��" << max << "֮���ѧ�������ܹ���" << num << "��" << endl;
	Sleep(2000);
}
void tongji_menu(Student s[], int& n)//��ʾͳ�Ʋ˵�
{
	int i;
	double min, max;//��ʾ��ͷֺ���߷�
	cout << "\t\tͳ�Ʋ˵�" << endl;
	while (1)
	{
		cout << "��ѡ��Ҫͳ�ƵĿ�Ŀ��1����   2��ѧ    3Ӣ���";
		cin >> i;
		if (i >= 1 && i <= 3)
			break;
		cout << "�����������������" << endl;
	}
	cout << "��������ͷ֣�";
	cin >> min;
	cout << "��������߷֣�";
	cin >> max;
	if (min < 0 || min>100 || max < 0 || max>100 || min > max)
	{
		cout << "����������ڷ�����һ���˵�" << endl;
		Sleep(2000);
	}
	else
	{
		switch (i)
		{
		case 1: {//tongjibychinese(s,n,min,max)
			int num = 0;//��������������
			for (int t = 0; t < n; t++)
			{
				if (s[t].chinese >= min && s[t].chinese <= max)
				{
					num++;
					if (num == 1)
						cout << "����\tѧ��\t����\tӢ��\t��ѧ\tѧ��" << endl;
					showsigledata(s[t]);
					if (num % 2 == 0)
					{
						system("pause");
						cout << "����\tѧ��\t����\tӢ��\t��ѧ\tѧ��" << endl;

					}
				}
			}
			cout << "���ĳɼ���" << min << "��" << max << "֮���ѧ�������ܹ���" << num << "��" << endl;
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
void paixu_menu(Student s[], int& n)//��ʾ����˵�
{
	int i;
	int  shunxu;//1��ʾ����2��ʾ����
	cout << "\t\tͳ�Ʋ˵�" << endl;
	while (1)
	{
		cout << "��ѡ��Ҫͳ�ƵĿ�Ŀ��1����   2��ѧ    3Ӣ���";
		cin >> i;
		if (i >= 1 && i <= 3)
			break;
		cout << "�����������������" << endl;
	}
	while (1)
	{
		cout << "��ѡ��˳��1����   2���򣩣�";
		cin >> shunxu;
		if (shunxu >= 1 && shunxu <= 2)
			break;
		cout << "�����������������" << endl;
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
void menu(Student s[], int& n)//��ʾһ���˵�
{
	int i;
	while (1)
	{
		cout << "\t\tѧ���ɼ�����ϵͳ" << endl;
		cout << "1����Ϣ����" << endl;
		cout << "2����Ϣ��ѯ" << endl;
		cout << "3���ɼ�ͳ��" << endl;
		cout << "4���ɼ�����" << endl;
		cout << "5���˳�" << endl;
		cin >> i;
		if (i >= 1 && i <= 5)
			break;
		cout << "����������������롭��" << endl;
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
		cout << "�����˳�ϵͳ����" << endl;
		Sleep(2000); exit(0);
	}
}

int main()
{
	Student s[N];
	int s_num;//����ĵ�ǰ��ģ
	s_num = outfromfile(s);
	menu(s, s_num);
	return 0;
}
