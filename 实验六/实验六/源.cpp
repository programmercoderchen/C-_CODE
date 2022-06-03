#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//���ʵ�����¹��ܣ�
//1������ְ����employee���ֶγ�Ա��ְ����num������name������age������salary��
//��Ա����������ְ����getnum()����Ԫ��������������� >> �� << ��
//2����д������ְ���Ŵ�С�����˳�� 5 ��ְ������������������ļ� file1.txt�б��棬int savetofile()���ú��������������ݵĸ�����
//3����д�����Ӽ�������һ��Ա�������ݣ����ӵ��ļ�file1.txt ��ĩβ��int  insertfile(int n)��������ɺ��µ�Ա�����������ء�
//4����д�������ļ������ȫ��Ա�������ݣ�void outfromfile(int n)��
//5����д�����Ӽ�������һ�����룬���ļ��в������޴�ְ���ţ���������ʾ��ְ���ǵڼ���ְ���Լ���ְ����ȫ�����ݣ���û�У�������޴��ˡ���void findfile(int n)��
class employee
{
public:
	employee(int n=0,string N="sz", int a=0, double s=0) :num(n), name(N), age(a), salary(s) {}
	int getnum()
	{
		return num;
	}
	friend int savetofile();
	friend int insertfile(int n);
	friend void outfromfile(int n);
	friend void findfile(int n);
	friend ostream& operator <<(ostream&output, employee&e);
	friend istream& operator >>(istream&input, employee&e);
	friend ofstream& operator<<(ofstream&, employee&);
	friend ifstream& operator>>(ifstream&, employee&);
private:
	int num;
	string name;
	int age;
	double salary;
};
//class employee
//{
//public:
//	employee(int a = 0, string b = "zs", int c = 0, int d = 0) :num(a), name(b), age(c), salary(d) {}
//	int getnum() { return num; }
//	friend istream& operator>>(istream&, employee&);
//	friend ostream& operator<<(ostream&, employee&);
//	friend ofstream& operator<<(ofstream&, employee&);
//	friend ifstream& operator>>(ifstream&, employee&);
//	friend int savetofile();
//	friend int insertfile(int);
//	friend void outfromfile(int);
//	friend void findfile(int);
//private:
//	int    num;
//	string name;
//	int    age;
//	int    salary;
//};
ostream& operator <<(ostream& output, employee& e)
{
	output << e.num << "\t" << e.name << "\t" << e.age << "\t" << e.salary << endl;
	return output;
}
istream& operator >>(istream& input, employee& e)
{
	input >> e.num >> e.name >> e.age >> e.salary;
	return input;
}
ofstream& operator<<(ofstream& a, employee& e)
{
	a << e.num << "\t" << e.name << "\t" << e.age << "\t" << e.salary << endl;
	return a;
}
ifstream& operator>>(ifstream& a, employee& e)
{
	a >> e.num >> e.name >> e.age >> e.salary;
	return a;
}
//istream& operator>> (istream &input,employee &b)
//{
//	input >> b.num >> b.name >> b.age >> b.salary;
//	return input;
//}
//ostream& operator<< (ostream& output, employee& b)
//{
//	output << b.num << "\t" << b.name << "\t" << b.age << "\t" << b.salary << endl;
//	return output;
//}
//ofstream& operator<<(ofstream& a, employee& b)
//{
//	a << b.num << "\t" << b.name << "\t" << b.age << "\t" << b.salary << endl;
//	return a;
//}
//ifstream& operator>>(ifstream& a, employee& b)
//{
//	a >> b.num >> b.name >> b.age >> b.salary;
//	return a;
//}
int savetofile()
{
	int i = 0;
	int j = 0;
	employee w;
	while (i < 1 || i>100)
	{
		cout << "������ְ���ĸ���(1-100):";
		cin >> i;
	}
	ofstream outfile("data.txt", ios::out);
	cout << "NUM\tNAME\tAGE\tSALARY" << endl;
	for (j = 0; j < i; j++)
	{
		cin >> w;
		outfile << w;
	}
	return i;
}
//int savetofile()
//{
//	int n = 0;
//	employee w;
//	while (n < 1 || n>100)
//	{
//		cout << "������ְ���ĸ���(1-100):";
//		cin >> n;
//	}
//	ofstream outfile("filel.txt", ios::out);
//	cout << "NUM\tNAME\tAGE\tSALARY" << endl;
//	for (int i = n; i > 0; i--)
//	{
//		cin >> w;
//		outfile << w;
//	}
//	return n;
//}
int insertfile(int n)//����ְ������
{
	employee w;
	ofstream outfile("data.txt", ios::app);
	cout << "������Ҫ��ӵ�ְ����Ϣ��" << endl;
	cout << "NUM\tNAME\tAGE\tSALARY" << endl;
	cin >> w;
	outfile << w;
	return (n + 1);
}
void outfromfile(int n)
{
	int j = 0;
	employee w[100];
	ifstream infile("data.txt", ios::in);
	cout << "NUM\tNAME\tAGE\tSALARY" << endl;
	for (j = 0; j < n; j++)
	{
		infile >> w[j];
		cout << w[j];
	}
}
//void outfromfile(int n)
//{
//	employee w[101];
//	ifstream infile("filel.txt", ios::in);
//	cout << "NUM\tNAME\tAGE\tSALARY" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		infile >> w[i];
//		cout << w[i];
//	}
//}
void findfile(int n)//����ְ����Ϣ
{
	int i = 0, j = 0, num = 0;
	employee w[100];
	cout << "������Ҫ���ҵ�ְ���ţ�";
	cin >> num;
	ifstream infile("data.txt", ios::in);
	for (i = 1; i <= n; i++)
	{
		infile >> w[i];
		if (w[i].num == num)
		{
			j = 1;
			break;
		}
	}
		if (j)
		{
			cout << "���ҳɹ���" << endl;
			cout << "��" << i << "��ְ�� ��ְ������Ϣ���£�" << endl;
			cout << "NUM\tNAME\tAGE\tSALARY" << endl;
			cout << w[i];
		}
		else
		{
			cout << "���޴���" << endl;
		}
}
//void findfile(int n)
//{
//	cout << "������Ҫ���ҵ�ְ���ţ�";
//	int i = 0, v = 0, num = 0;
//	cin >> num;
//	employee w[100];
//	ifstream infile("filel.txt", ios::in);
//	for (i = 1; i <= n; i++)
//	{
//		infile >> w[i];
//		if (w[i].num == num)
//		{
//			v = 1; break;
//		}
//	}
//	if (v)
//	{
//		cout << "���ҳɹ���" << endl;
//		cout << "��" << i << "��ְ�� ��ְ������Ϣ���£�" << endl;
//		cout << "NUM\tNAME\tAGE\tSALARY" << endl;
//		cout << w[i];
//	}
//	else
//		cout << "���޴��ˣ�" << endl;
//}
int main()
{
	int n; //n��ʾҪ�����ְ����Ϣ�ĸ���
	n = savetofile();//�����������ְ����Ϣ(ְ���Ŵ�С����)
	outfromfile(n);//���ļ����ְ����Ϣ
	findfile(n);//����ְ����Ϊ6��ְ����Ϣ
	n = insertfile(n);//�����µ�ְ����Ϣ��ְ����Ϊ6
	findfile(n);//���²���ְ����Ϊ6��ְ����Ϣ
	return 0;
}
//#include<fstream>
//#include<iostream>
//#include<string>
//using namespace std;
//class employee
//{
//public:
//	employee(int a = 0, string b = "zs", int c = 0, int d = 0) :num(a), name(b), age(c), salary(d) {}
//	int getnum() { return num; }
//	friend istream& operator>>(istream&, employee&);
//	friend ostream& operator<<(ostream&, employee&);
//	friend ofstream& operator<<(ofstream&, employee&);
//	friend ifstream& operator>>(ifstream&, employee&);
//	friend int savetofile();
//	friend int insertfile(int);
//	friend void outfromfile(int);
//	friend void findfile(int);
//private:
//	int    num;
//	string name;
//	int    age;
//	int    salary;
//};
//istream& operator>> (istream& input, employee& b)
//{
//	input >> b.num >> b.name >> b.age >> b.salary;
//	return input;
//}
//ostream& operator<< (ostream& output, employee& b)
//{
//	output << b.num << "\t" << b.name << "\t" << b.age << "\t" << b.salary << endl;
//	return output;
//}
//ofstream& operator<<(ofstream& a, employee& b)
//{
//	a << b.num << "\t" << b.name << "\t" << b.age << "\t" << b.salary << endl;
//	return a;
//}
//ifstream& operator>>(ifstream& a, employee& b)
//{
//	a >> b.num >> b.name >> b.age >> b.salary;
//	return a;
//}
//int insertfile(int n)
//{
//	employee w;
//	ofstream outfile("filel.txt", ios::app);
//	cout << "������Ҫ��ӵ�ְ����Ϣ��" << endl;
//	cout << "NUM\tNAME\tAGE\tSALARY" << endl;
//	cin >> w;
//	outfile << w;
//	return (n + 1);
//}
//int savetofile()
//{
//	int n = 0;
//	employee w;
//	while (n < 1 || n>100)
//	{
//		cout << "������ְ���ĸ���(1-100):";
//		cin >> n;
//	}
//	ofstream outfile("filel.txt", ios::out);
//	cout << "NUM\tNAME\tAGE\tSALARY" << endl;
//	for (int i = n; i > 0; i--)
//	{
//		cin >> w;
//		outfile << w;
//	}
//	return n;
//}
//void outfromfile(int n)
//{
//	employee w[101];
//	ifstream infile("filel.txt", ios::in);
//	cout << "NUM\tNAME\tAGE\tSALARY" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		infile >> w[i];
//		cout << w[i];
//	}
//}
//void findfile(int n)
//{
//	cout << "������Ҫ���ҵ�ְ���ţ�";
//	int i = 0, v = 0, num = 0;
//	cin >> num;
//	employee w[100];
//	ifstream infile("filel.txt", ios::in);
//	for (i = 1; i <= n; i++)
//	{
//		infile >> w[i];
//		if (w[i].num == num)
//		{
//			v = 1; break;
//		}
//	}
//	if (v)
//	{
//		cout << "���ҳɹ���" << endl;
//		cout << "��" << i << "��ְ�� ��ְ������Ϣ���£�" << endl;
//		cout << "NUM\tNAME\tAGE\tSALARY" << endl;
//		cout << w[i];
//	}
//	else
//		cout << "���޴��ˣ�" << endl;
//}
//int main()
//{
//	int n;
//	n = savetofile();
//	outfromfile(n);
//	findfile(n);
//	n = insertfile(n);
//	findfile(n);
//	return 0;
//}

