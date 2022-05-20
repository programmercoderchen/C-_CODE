#include <iostream>
using nameapace std;

class Complex
{
public:
	Complex() { real = 0; imag = 0; }
	Complex(double r, double i) { real = r; imag = i; }
	friend Complex operator +(Complex& c1, Complex& c2);
	friend Complex operator -(Complex& c1, Complex& c2);
	friend Complex operator *(Complex& c1, Complex& c2);
	friend Complex operator /(Complex& c1, Complex& c2);
	void show1();
	void show2();
private:
	double real;
	double imag;
};
Complex operator +(Complex& c1, Complex& c2)//加法
{
	Complex c;
	c.real = c1.real + c2.real;
	c.imag = c1.real + c2.real;
	return c;
}
Complex operator -(Complex& c1, Complex& c2)//减法
{
	Complex c;
	c.real = c1.real - c2.real;
	c.imag = c1.real - c2.real;
	return c;
}
Complex operator *(Complex& c1, Complex& c2)//乘法
{

}
Complex operator /(Complex& c1, Complex& c2)//除法
{

}
void Complex::show1()
{
	cout << real;
	if (imag < 0)
		cout << imag << "i" << endl;
	else
		cout << "+" << imag << "i" << endl;
}
void Complex::show2()
{
	cout << c << endl;
}
int main()
{
	Complex cl(7, 8), c2(5, 10);
	(c1 + c2).show1();
	(c1 - c2).show1();
	(c1 * c2).show2();
	(c1 / c2).show2();
	return 0;
}