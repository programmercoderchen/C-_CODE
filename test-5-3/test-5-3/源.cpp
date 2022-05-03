#include <iostream>
using namespace std;

////简易的一个计数器
//class Counter
//{
//public:
//	Counter(int n = 6);
//	void add();
//	void sub();
//	void show();
//private:
//	int num;
//};
//Counter::Counter(int n)
//{
//	num = n;
//}
//void Counter::add()
//{
//	num++;
//}
//void Counter::sub()
//{
//	num--;
//}
//void Counter::show()
//{
//	cout << "The num of the counter is:" << num << endl;
//}
//int main()
//{
//	Counter c(5);
//	c.add();
//	c.show();
//	c.sub();
//	c.show();
//	return 0;
//}
//写一个时间的类，显示的是晚上11点59分到0点的时间。
//class Time
//{
//public:
//	Time();
//	Time(int h, int m, int s);
//	void add();
//	void universialhour();
//	void normalshow();
//private:
//	int hour;
//	int minute;
//	int sec;
//};
//Time::Time()
//{
//	hour = minute = sec=0;
//}
//Time::Time(int h, int m, int s)
//{
//	hour = h;
//	minute = m;
//	sec = s;
//}
//void Time::add()
//{
//	sec++;
//	if (sec == 60)
//	{
//		sec = 0;
//		minute++;
//		if (minute == 60)
//		{
//			minute = 0;
//			hour++;
//			if (hour == 24)
//			{
//				hour = 0;
//			}
//		}
//	}
//}
//void Time::normalshow()
//{
//	cout << hour << ":" << minute << ":" << sec << "PM" << '\t';
//}
//void Time::universialhour()
//{
//	cout << hour << ":" << minute << ":" << sec << endl;
//}
//int main()
//{
//	Time t(23, 59, 0);
//	int i;
//	for (i = 0; i < 60; i++)
//	{
//		t.add();
//		t.normalshow();
//		t.universialhour();
//	}
//	return 0;
//}
//用于计算长方体的体积的类
//class Box
//{
//public:
//	Box(int x, int y, int z);
//	double volume();
//private:
//	double height;
//	double width;
//	double length;
//};
//Box::Box(int h, int w, int l)
//{
//	height = h;
//	width = w;
//	length = l;
//}
//double Box::volume()
//{
//	return (height * width * length);
//}
//int main()
//{
//	Box box1(12, 25, 30);
//	cout << "The volume of box1 is" << box1.volume() << endl;
//	Box box2(15.5, 30.5, 21.5);
//	cout << "The volume of box2 is" << box2.volume() << endl;
//	return 0;
//}
//使用对象指针方法输出时分秒
//class Time
//{
//public:
//	Time(int x, int y, int z);
//	int hour;
//	int minute;
//	int sec;
//	void get_time();
//};
//Time::Time(int h, int m, int s)
//{
//	hour=h;
//	minute=m;
//	sec = s;
//}
//void Time::get_time()
//{
//	cout << hour << ":" << minute << ":" << sec << endl;
//}
//int main()
//{
//	Time t1(10, 13, 56);
//	int* p1 = &t1.hour;
//	cout << *p1 << endl;
//	t1.get_time();
//	Time* p2 = &t1;
//	p2->get_time();
//	void(Time:: * p3)();
//	p3 = &Time::get_time;
//	(t1.*p3)();
//	return 0;
//}
class Complex
{
public:
	Complex() { real = 0; imag = 0; }
	Complex(double r, double i){real = r; imag = i; }
	friend Complex operator +(Complex& c1, Complex& c2);
	friend Complex operator -(Complex& c1, Complex& c2);
	friend Complex operator *(Complex& c1, Complex& c2);
	friend Complex operator /(Complex& c1, Complex& c2);
	void show();
private:
	double real;
	double imag;
};
Complex operator +(Complex& c1, Complex& c2)
{
	Complex c;
	c.real = c1.real + c2.real;
	c.imag = c1.imag + c2.imag;
	return c;
}
Complex operator -(Complex& c1, Complex& c2)
{
	Complex c;
	c.real = c1.real - c2.real;
	c.imag = c1.imag - c2.imag;
	return c;
}
Complex operator *(Complex& c1, Complex& c2)
{
	Complex c;
	c.real = c1.real * c2.real - c1.imag * c2.imag;
	c.imag = c1.real * c2.imag + c1.imag * c2.real;
	return c;
}
Complex operator /(Complex& c1, Complex& c2)
{
	Complex c;
	c.real = (c1.real * c2.real + c1.imag * c2.imag) / (c2.real * c2.real + c2.imag * c2.imag);
	c.imag = (c1.imag * c2.real - c1.real * c2.imag) / (c2.real * c2.real + c2.imag * c2.imag);
	return c;
}
void Complex::show()
{
	cout << real;
	if (imag < 0)
		cout << imag << "i" << endl;
	else
		cout << "+" << imag << "i" << endl;
}
int main()
{
	Complex c1(7, 8), c2(5, 10);
	(c1 + c2).show();
	(c1 - c2).show();
	(c1 * c2).show();
	(c1 / c2).show();
	return 0;
}