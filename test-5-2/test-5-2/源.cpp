#include <iostream>
#include <string>
using namespace std;

////同一个函数进行的重载。
////使用函数模板进行大小的比较
//template<typename T>
//T max(T a, T b, T c)
//{
//	//简单粗暴
//	if (a > b && a > c)
//		return a;
//	if (b > a && b > c)
//		return b;
//	if (c > a && c > b)
//		return c;
//	/*比较直接
//	if (b > a)
//		a = b;
//	if (c > a)
//		c = b;
//	return a;*/
//}
////float max(float a, float b, float c)
////{
////	if (a > b && a > c)
////		return a;
////	if (b > a && b > c)
////		return b;
////	if (c > a && c > b)
////		return c;
////}
////long max(long a, long b, long c)
////{
////	if (a > b && a > c)
////		return a;
////	if (b > a && b > c)
////		return b;
////	if (c > a && c > b)
////		return c;
////}
//int main()
//{
//	int a, b, c;
//	float d, e, f;
//	long g, h, i;
//	cin >> a >> b >> c;
//	cin >> d >> e >> f;
//	cin >> g >> h >> i;
//	int m;
//	m = max(a, b, c);//函数值是整型
//	cout << "max_int=" << m << endl;
//	float n;
//	n = max(d, e, f);//函数值是浮点型
//	cout << "max_float=" << n << endl;
//	long p;
//	p = max(g, h, i);//函数值是长整型
//	cout << "max_long=" << p << endl;
//}

//int main()
//{
//	string string1, string2, string3, temp;
//	cout << "please input three strings:";//对用户输入进行一个提示
//	cin >> string1 >> string2 >> string3;//输入三个字符串
//	if (string2 > string3)
//	{
//		temp = string2;
//		string2 = string3;
//		string3 = temp;
//	}
//	if (string1 <= string2)
//		cout << string1 << " " << string2 << " " << string3 << endl;
//	else if (string1 <= string3)
//		cout << string2 << " " << string1 << " " << string3 << endl;
//	else
//		cout << string2 << " " << string3 << " " << string1 << endl;
//	return 0;
//}

//用类的方式输入和输出时间
//class Time
//{
//public:
//	void set();
//	void display();
//private:
//	int hour;
//	int minute;
//	int sec;
//};
//void Time::display()
//{
//	cout << hour << "-" << minute << "-" << sec << endl;
//}
//void Time::set()
//{
//	cin >> hour >> minute >> sec;
//}
//int main()
//{
//	Time t;
//	t.set();
//	t.display();
//}

 