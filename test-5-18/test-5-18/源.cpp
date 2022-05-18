//关于文件操作的具体实现，用于实验六的理论基础

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
//		cout << "文件打开失败" << endl;
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
//		cout << "文件打开失败" << endl;
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
	/***********  写文件  *************/
	//方式1 输出流ofstream对象调用fopen函数
	ofstream fout;
	fout.open(fname, ios::out);
	if (!fout)
	{
		cout << "打开文件失败" << fname << endl;
	}
	fout << "hello world !";  //通过左移运算符写入字符串
	fout.flush();
	fout.close();

	//方式2 调用输出流ofstream对象的构造函数
	ofstream fout1(fname, ios::out);
	if (!fout1)
	{
		cout << "打开文件失败" << fname << endl;
	}
	fout1.put('h'); //通过put函数写入字符
	fout1.put('e');
	fout1.put('l');
	fout1.put('l');
	fout1.put('o');
	fout1.put('\n');
	fout1.flush();
	fout1.close();

	//文件流对象写文件
	fstream file2(fname, ios::in | ios::out);
	file2 << "abdfd\n";
	file2 << "11111\n";
	file2.flush();
	file2.close();

	/***********  读文件  *************/
	//输入流ifstream对象读取文件内容
	ifstream fin;
	fin.open(fname, ios::in);
	fin.getline(buff, 1024);		//通过getline函数读取字符串
	cout << buff << endl;
	fin.close();

	//文件流对象读文件内容
	fstream file1(fname, ios::in | ios::out);
	file1 >> buff;	//通过右移运算符读出字符串
	file1.close();
	cout << buff << endl;


	system("pause");
	return 0;
}