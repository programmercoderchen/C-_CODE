//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//void area(float r)
//{
//	float pi = 3.14;
//	float s;
//	s = r * r * pi;
//}
//void area(float l, float w)
//{
//	float s;
//	s = l * w;
//}
//void area(float a, float b, float c)
//{
//	float s;
//	s = (a + b) * c / 2;
//}
//int main()
//{
//	cout << "The area of Circle:" << area(3) << endl;
//	cout << "The area of Circle:" << area(5, 3) << endl;
//	cout << "The area of Circle:" << area(3, 5, 7) << endl;
//	system("pause");
//	return 0;
//}
//#include <iostream>//��һ��ʹ��show��Ա����ʵ�����
//using namespace std;
//
//class Complex
//{
//public:
//	Complex() { real = 0; imag = 0; }
//	Complex(double r, double i) { real = r; imag = i; }
//	friend Complex operator +(Complex& c1, Complex& c2);
//	friend Complex operator -(Complex& c1, Complex& c2);
//	friend Complex operator *(Complex& c1, Complex& c2);
//	friend Complex operator /(Complex& c1, Complex& c2);
//	void show();
//private:
//	double real;
//	double imag;
//};
//Complex operator +(Complex& c1, Complex& c2)//�ӷ�
//{
//	Complex c;
//	c.real = c1.real + c2.real;
//	c.imag = c1.imag + c2.imag;
//	return c;
//}
//Complex operator -(Complex& c1, Complex& c2)//����
//{
//	Complex c;
//	c.real = c1.real - c2.real;
//	c.imag = c1.imag - c2.imag;
//	return c;
//}
//Complex operator *(Complex& c1, Complex& c2)//�˷�
//{
//	Complex c;
//	c.real = c1.real * c2.real - c1.imag * c2.imag;
//	c.imag = c1.real * c2.imag + c1.imag * c2.real;
//	return c;
//}
//Complex operator /(Complex& c1, Complex& c2)//����
//{
//	Complex c;
//	c.real = (c1.real * c2.real + c1.imag * c2.imag) / (c2.real * c2.real + c2.imag * c2.imag);
//	c.imag = (c1.imag * c2.real - c1.real * c2.imag) / (c2.real * c2.real + c2.imag * c2.imag);
//	return c;
//}
//void Complex::show()
//{
//	cout << real;
//	if (imag < 0)
//		cout << imag << "i" << endl;
//	else
//		cout << "+" << imag << "i" << endl;
//}
//int main()
//{
//	Complex cl(7, 8), c2(5, 10);
//	(cl + c2).show();
//	(cl - c2).show();
//	(cl * c2).show();
//	(cl / c2).show();
//	return 0;
//}
#include <iostream>//��������ȡ�����<<ʵ�����
using namespace std;

//class Complex
//{
//public:
//	Complex() { real = 0; imag = 0; }
//	Complex(double r, double i) { real = r; imag = i; }
//	friend Complex operator +(Complex& c1, Complex& c2);
//	friend Complex operator -(Complex& c1, Complex& c2);
//	friend Complex operator *(Complex& c1, Complex& c2);
//	friend Complex operator /(Complex& c1, Complex& c2);
//	friend ostream& operator <<(ostream&, Complex&);//����show�Ĺ���
//private:
//	double real;
//	double imag;
//};
//Complex operator +(Complex& c1, Complex& c2)//�ӷ�
//{
//	Complex c;
//	c.real = c1.real + c2.real;
//	c.imag = c1.imag + c2.imag;
//	return c;
//}
//Complex operator -(Complex& c1, Complex& c2)//����
//{
//	Complex c;
//	c.real = c1.real - c2.real;
//	c.imag = c1.imag - c2.imag;
//	return c;
//}
//Complex operator *(Complex& c1, Complex& c2)//�˷�
//{
//	Complex c;
//	c.real = c1.real * c2.real - c1.imag * c2.imag;
//	c.imag = c1.real * c2.imag + c1.imag * c2.real;
//	return c;
//}
//Complex operator /(Complex& c1, Complex& c2)//����
//{
//	Complex c;
//	c.real = (c1.real * c2.real + c1.imag * c2.imag) / (c2.real * c2.real + c2.imag * c2.imag);
//	c.imag = (c1.imag * c2.real - c1.real * c2.imag) / (c2.real * c2.real + c2.imag * c2.imag);
//	return c;
//}
//ostream& operator <<(ostream& output, Complex& c)
//{
//	output << c.real;
//	if (c.imag < 0)
//		cout << c.imag << "i" << endl;
//	else
//		cout << "+" << c.imag << "i" << endl;
//	return output;
//}
//int main()
//{
//	Complex cl(7, 8), c2(5, 10),c3,c4,c5,c6;
//	c3 = (cl + c2);
//	c4 = (cl - c2);
//	c5 = (cl * c2);
//	c6 = (cl / c2);
//	cout<< c3;
//	cout<< c4;
//	cout<< c5;
//	cout<< c6;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Time
//{
//public:
//	Time(int h, int m, int s)
//	{
//		hour = h;
//		minute = m;
//		second = s;
//	}
//	void display()
//	{
//		cout << hour << ":" << minute << ":" << second << endl;
//	}
//private:
//	int hour, minute, second;
//};
//
//int main()
//{
//	Time t(12, 13, 14);
//	Time* p = &t;
//	p->display();
//	*p = Time(15, 16, 17);
//	p->display();
//	delete p;
//	return 0;
//}