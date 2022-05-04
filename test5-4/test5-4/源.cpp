#include <iostream>
using namespace std;

//使用运算符重载实现虚数实数的计算和输出
class Complex
{
public:
	Complex() { real = 0; imag = 0; }
	Complex(double r, double i) { real = r; imag = i; }
	friend Complex operator +(Complex& c1, Complex& c2);
	friend Complex operator -(Complex& c1, Complex& c2);
	friend Complex operator *(Complex& c1, Complex& c2);
	friend Complex operator /(Complex& c1, Complex& c2);
	friend ostream& operator <<(ostream&, Complex&);
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
ostream& operator <<(ostream& output, Complex& c)
{
	output << c.real;
	if (c.imag < 0)
		output << c.imag << "i" << endl;
	else
		output << "+" << c.imag << "i" << endl;
	return output;
}
int main()
{
	Complex c1(7, 8), c2(5, 10), c3, c4, c5, c6;
	c3 = c1 + c2;
	c4 = c1 - c2;
	c5 = c1 * c2;
	c6 = c1 / c2;
	/*cout << c3 ;
	cout << c4 ;
	cout << c5 ;
	cout << c6 ;*/
	cout << c3 << c4 << c5 << c6;
	return 0;
}