//用于输出三角形的面积和周长
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class Triangle
//{
//public:
//	Triangle(int L=3, int h=4):Long(L),high(h){}
//	double hypot();
//	double area();
//private:
//	int Long;
//	int high;
//};
//
//double Triangle::hypot()
//{
//	return sqrt(Long * Long + high * high);
//}
//
//double Triangle::area()
//{
//	return Long * high / 2;
//}
//
//int main()
//{
//	Triangle tri;
//	cout << "area:" <<tri.area() << endl;
//	cout << "hypot:" << tri.hypot() << endl;
//	return 0;
//}
//创建一个时间类
//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date();
//	Date(int y, int m, int d, int w) :year(y), mouth(m), day(d), week(w) {}
//	void decide();
//	friend ostream& operator <<(ostream&, Date&);
//	friend istream& operator >>(istream&, Date&);
//private:
//	int year;
//	int mouth;
//	int day;
//	int week;
//};
//Date::Date()
//{
//	year = 2022;
//	mouth = 1;
//	day = 1;
//	week = 6;
//}
//void Date::decide()
//{
//	int i, j;
//	i = day - 1;
//	for (j = 0; i < i; j++)
//	{
//		++week;
//		if (week == 7)
//			week - 7;
//	}
//}
//ostream& operator <<(ostream& out, Date& c)
//{
//	out << c.year << "-" << c.mouth << "-" << c.day << "-" << c.week;
//	return out;
//}
//istream& operator >>(istream& in, Date& c)
//{
//	in >> c.year >> c.mouth >> c.day;
//	return in;
//}
//int main()
//{
//	Date c;
//	cin >> c;
//	cout << c;
//}

