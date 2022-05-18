//�����ļ������ľ���ʵ�֣�����ʵ���������ۻ���

//#include <iostream>
//using namespace std;
//#include <fstream>
//
//class Teacher
//{
//public:
//	Teacher()
//	{
//
//	}
//	Teacher(int age, char name[20])
//	{
//		this->age = age;
//		strcpy(this->name, name);
//	}
//	void prinfInfo()
//	{
//		cout << "Teacher name:" << this->name << "   age:" << this->age << endl;
//	}
//private:
//	int age;
//	char name[20];
//};
//
//int main()
//{
//	Teacher t1(31, "xiaoming");
//	Teacher t2(32, "xiaohong");
//	Teacher t3(33, "xiaohua");
//	Teacher t4(34, "xiaoxin");
//	char fname[] = "d:/file2";
//	fstream fs(fname, ios::binary | ios::out);
//	if (!fs)
//	{
//		cout << "�ļ���ʧ��" << endl;
//	}
//	fs.write((char*)&t1, sizeof(Teacher));
//	fs.write((char*)&t2, sizeof(Teacher));
//	fs.write((char*)&t3, sizeof(Teacher));
//	fs.write((char*)&t4, sizeof(Teacher));
//	fs.flush();
//	fs.close();
//
//	fstream fs2(fname, ios::binary | ios::in);
//	if (!fs)
//	{
//		cout << "�ļ���ʧ��" << endl;
//	}
//	Teacher tt;
//	fs2.read((char*)&tt, sizeof(Teacher));
//	tt.prinfInfo();
//	fs2.read((char*)&tt, sizeof(Teacher));
//	tt.prinfInfo();
//	fs2.read((char*)&tt, sizeof(Teacher));
//	tt.prinfInfo();
//	fs2.read((char*)&tt, sizeof(Teacher));
//	tt.prinfInfo();
//	fs2.close();
//
//	system("pause");
//	return 0;
//}

#include <iostream>
using namespace std;
#include "fstream"

int main()
{
	char fname[] = "d:/file1.txt";
	char buff[1024] = { 0 };
	/***********  д�ļ�  *************/
	//��ʽ1 �����ofstream�������fopen����
	ofstream fout;
	fout.open(fname, ios::out);
	if (!fout)
	{
		cout << "���ļ�ʧ��" << fname << endl;
	}
	fout << "hello world !";  //ͨ�����������д���ַ���
	fout.flush();
	fout.close();

	//��ʽ2 ���������ofstream����Ĺ��캯��
	ofstream fout1(fname, ios::out);
	if (!fout1)
	{
		cout << "���ļ�ʧ��" << fname << endl;
	}
	fout1.put('h'); //ͨ��put����д���ַ�
	fout1.put('e');
	fout1.put('l');
	fout1.put('l');
	fout1.put('o');
	fout1.put('\n');
	fout1.flush();
	fout1.close();

	//�ļ�������д�ļ�
	fstream file2(fname, ios::in | ios::out);
	file2 << "abdfd\n";
	file2 << "11111\n";
	file2.flush();
	file2.close();

	/***********  ���ļ�  *************/
	//������ifstream�����ȡ�ļ�����
	ifstream fin;
	fin.open(fname, ios::in);
	fin.getline(buff, 1024);		//ͨ��getline������ȡ�ַ���
	cout << buff << endl;
	fin.close();

	//�ļ���������ļ�����
	fstream file1(fname, ios::in | ios::out);
	file1 >> buff;	//ͨ����������������ַ���
	file1.close();
	cout << buff << endl;


	system("pause");
	return 0;
}