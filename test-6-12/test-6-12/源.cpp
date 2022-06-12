//CPP33 统计字符串中子串出现的次数
//解法一：（双指针解题思路以及方法）
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//
//    char str[100] = { 0 };
//    char substr[100] = { 0 };
//
//    cin.getline(str, sizeof(str));
//    cin.getline(substr, sizeof(substr));
//
//    int count = 0;
//
//    // write your code here......
//    char* p = &str[0];
//    char* q = &substr[0];
//    for (int i = 0; i < strlen(str); i++) {
//        bool flag = true;
//        if (*(p + i) == *q) {
//            for (int j = 0; j < strlen(substr); j++) {
//                if (*(p + i + j) == *(q + j)) {
//                    continue;
//                }
//                else
//                    flag = false; //不相同，这一次不是子串
//                break;
//            }
//            if (flag) {
//                count++;
//            }
//        }
//    }
//    cout << count << endl;
//
//    return 0;
//}
//解法二：（使用库函数find获取字符串出现次数）
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//
//    char str[100] = { 0 };
//    char substr[100] = { 0 };
//
//    cin.getline(str, sizeof(str));
//    cin.getline(substr, sizeof(substr));
//
//    int count = 0;
//
//    //转化为字符串
//    string str1(str);
//    string str2(substr);
//
//    int i = 0;
//    //从str1下标i开始查找str2
//    while (str1.find(str2, i) != -1) {
//        //如果找得到，计数加1
//        count++;
//        //i从找到的位置，后移一位
//        i = str1.find(str2, i) + 1;
//    }
//
//    cout << count << endl;
//
//    return 0;
//}
//解法三：（利用字符串末尾是‘\0’的特点进行解题）
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//
//    char str[100] = { 0 };
//    char substr[100] = { 0 };
//
//    cin.getline(str, sizeof(str));
//    cin.getline(substr, sizeof(substr));
//
//    int count = 0;
//    for (int i = 0; str[i] != '\0'; i++) { //遍历字符串str
//        bool flag = true;
//        for (int j = 0; substr[j] != '\0'; j++) { //以字符串str的i位置为起点，每次同步遍历substr长度
//            if (str[i + j] != '\0' && str[i + j] == substr[j]) //比较每个字符
//                continue;
//            else {
//                flag = false; //不相同，这一次不是子串
//                break;
//            }
//        }
//        if (flag)
//            count++;
//    }
//    cout << count << endl;
//
//    return 0;
//}
//CPP34 使用字符函数统计字符串中各类型字符的个数
//解法一：要求使用字符函数
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//
//    string str;
//    getline(cin, str);
//
//    int whitespace = 0;
//    int digits = 0;
//    int chars = 0;
//    int others = 0;
//
//    // write your code here......
//    for (int i = 0; i < str.length(); i++) { //遍历字符串
//        if (isalpha(str[i])) //判断是否是字母
//            chars++;
//        else if (isdigit(str[i])) //判断是否是数字
//            digits++;
//        else if (isspace(str[i])) //判断是否是空格
//            whitespace++;
//        else
//            others++;
//    }
//
//    cout << "chars : " << chars
//        << " whitespace : " << whitespace
//        << " digits : " << digits
//        << " others : " << others << endl;
//
//    return 0;
//}
//解法二：（不使用字符函数，利用asc码进行判断，然后得出结果）
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//
//    string str;
//    getline(cin, str);
//
//    int whitespace = 0;
//    int digits = 0;
//    int chars = 0;
//    int others = 0;
//
//    //使用一个字符指针来标记字符串的首地址
//    char* str_point = &str[0];
//    while (*str_point != '\0')
//    {
//        if ((*str_point >= 'a' && *str_point <= 'z') || (*str_point >= 'A' && *str_point <= 'Z'))
//            chars++;
//        else if (*str_point >= '0' && *str_point <= '9')
//            digits++;
//        else if (*str_point == ' ')
//            whitespace++;
//        else
//            others++;
//        str_point++;
//    }
//
//    cout << "chars : " << chars
//        << " whitespace : " << whitespace
//        << " digits : " << digits
//        << " others : " << others << endl;
//
//    return 0;
//}
//CPP35 函数实现计算一个数的阶乘
//解法一：
//#include <iostream>
//using namespace std;
//
//long long factorial(int n);
//
//int main() {
//
//    int n;
//    cin >> n;
//
//    cout << factorial(n) << endl;
//
//    return 0;
//}
//
//long long factorial(int n) {
//
//    // write your code here......
//    long long sum = 1;
//    for (int i = 1; i <= n; i++)
//    {
//        sum *= i;
//    }
//    return sum;
//}
//解法二：（使用递归）
//#include <iostream>
//using namespace std;
//
//long long factorial(int n);
//
//int main() {
//
//    int n;
//    cin >> n;
//
//    cout << factorial(n) << endl;
//
//    return 0;
//}
//
//long long factorial(int n) {
//    // write your code here......
//    if (n > 1)
//        return n * factorial(n - 1);
//    else return 1;
//}
//CPP36 不死神兔问题
//解法一：（使用递归解决）
//#include <iostream>
//using namespace std;
//
//int getSum(int n);
//
//int main() {
//
//    int n;
//    cin >> n;
//
//    cout << getSum(n) << endl;
//
//    return 0;
//}
//
//int getSum(int n) {
//
//    // write your code here......
//    if (n == 1 || n == 2)
//        return 1;
//    return getSum(n - 1) + getSum(n - 2); //返回前两个月相加
//}
//方法二：（使用迭代方法解决问题）
//#include <iostream>
//using namespace std;
//
//int getSum(int n);
//
//int main() {
//
//    int n;
//    cin >> n;
//
//    cout << getSum(n) << endl; //输出结果
//
//    return 0;
//}
//
//int getSum(int n) {
//    if (n <= 2) //2及以下直接返回
//        return 1;
//    int a = 1; //表示当前要计算的月份前一个月
//    int b = 1; //表示当前要计算月份的前两个月
//    int res = 0;
//    for (int i = 3; i <= n; i++) { //遍历3-n
//        res = a + b; //直接相加
//        b = a; //更新前两个
//        a = res; //
//    }
//    return res;
//}
//CPP37 编写函数实现两数交换（引用方式）
//解法一：
//#include <iostream>
//using namespace std;
//
//// write your code here......
//void swap(int& m, int& n)
//{
//    int tmp = 0;
//    tmp = m;
//    m = n;
//    n = tmp;
//}
//
//int main() {
//
//    int m, n;
//    cin >> m;
//    cin >> n;
//
//    // write your code here......
//    swap(m, n);
//
//    cout << m << " " << n << endl;
//
//    return 0;
//}
//CPP58 编写函数实现字符串翻转（引用方式）
//解法一：
//#include<iostream>
//#include<string>
//using namespace std;
//// write your code here......
//void reverse_string(string& s)
//{
//    int len = s.length();
//    for (int i = 0; i < len / 2; i++)
//    {
//        char temp = s[len - 1 - i];
//        s[len - 1 - i] = s[i];
//        s[i] = temp;
//    }
//}
//int main() {
//    string s;
//    getline(cin, s);
//    // write your code here......
//    reverse_string(s);
//    cout << s;
//    return 0;
//}
//CPP38 设计立方体类（类的设计）
//解法一：
//#include <iostream>
//using namespace std;
//
//class Cube {
//
//    // write your code here......
//public:
//    void setLength(double lenght) { len = lenght; }
//    void setWidth(double width) { wid = width; }
//    void setHeight(double height) { hei = height; }
//    double getLength() { return len; }
//    double getWidth() { return wid; }
//    double getHeight() { return hei; }
//    double getArea()
//    {
//        return 2 * (len * wid + len * hei + wid * hei);
//    }
//    double getVolume()
//    {
//        return len * wid * hei;
//    }
//private:
//    double len;
//    double wid;
//    double hei;
//};
//
//int main() {
//
//    int length, width, height;
//    cin >> length;
//    cin >> width;
//    cin >> height;
//
//    Cube c;
//    c.setLength(length);
//    c.setWidth(width);
//    c.setHeight(height);
//
//    cout << c.getLength() << " "
//        << c.getWidth() << " "
//        << c.getHeight() << " "
//        << c.getArea() << " "
//        << c.getVolume() << endl;
//
//    return 0;
//}
//解法二：（每一个函数都是用this指针指向数据成员）
//#include <iostream>
//using namespace std;
//
//class Cube {
//
//    // write your code here......
//private:
//    int length;
//    int width;
//    int height;
//public:
//    int getArea() {
//        return 2 * (length * width + length * height + width * height);
//    }
//    int getVolume() {
//        return this->length * this->width * this->height;
//    }
//    void setLength(int length) {
//        this->length = length;
//    }
//    void setWidth(int width) {
//        this->width = width;
//    }
//    void setHeight(int height) {
//        this->height = height;
//    }
//    int getLength() {
//        return this->length;
//    }
//    int getWidth() {
//        return this->width;
//    }
//    int getHeight() {
//        return this->height;
//    }
//
//};
//
//int main() {
//
//    int length, width, height;
//    cin >> length;
//    cin >> width;
//    cin >> height;
//
//    Cube c;
//    c.setLength(length);
//    c.setWidth(width);
//    c.setHeight(height);
//
//    cout << c.getLength() << " "
//        << c.getWidth() << " "
//        << c.getHeight() << " "
//        << c.getArea() << " "
//        << c.getVolume() << endl;
//
//    return 0;
//}
//CPP39 点和圆的关系
//解法一：
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//// 点类
//class Pointer {
//
//private:
//    int x;  // x 坐标
//    int y;  // y 坐标
//
//public:
//    void setX(int x) {
//        this->x = x;
//    }
//
//    int getX() {
//        return x;
//    }
//
//    void setY(int y) {
//        this->y = y;
//    }
//
//    int getY() {
//        return y;
//    }
//
//};
//
//// 圆类
//class Circle {
//
//private:
//    Pointer center; // 圆心
//    int radius; // 半径
//
//public:
//    void setCenter(int x, int y) {
//        center.setX(x);
//        center.setY(y);
//    }
//
//    void setRadius(int radius) {
//        this->radius = radius;
//    }
//
//    // write your code here......
//    void isPointerInCircle(Pointer a)
//    {
//        if (sqrt((a.getX() - center.getX()) * (a.getX() - center.getX()) + (a.getY() - center.getY()) * (a.getY() - center.getY())) > radius)
//            cout << "out" << endl;
//        else if (sqrt((a.getX() - center.getX()) * (a.getX() - center.getX()) + (a.getY() - center.getY()) * (a.getY() - center.getY())) < radius)
//            cout << "in" << endl;
//        else
//            cout << "on" << endl;
//    }
//
//};
//
//int main() {
//
//    // 键盘输入点的坐标
//    int x, y;
//    cin >> x;
//    cin >> y;
//
//    // 创建一个点
//    Pointer p;
//    p.setX(x);
//    p.setY(y);
//
//    // 创建一个圆
//    Circle c;
//    c.setCenter(5, 0);
//    c.setRadius(5);
//
//    // 判断点和圆的关系
//    c.isPointerInCircle(p);
//
//    return 0;
//}
//解法二：（使用间接形参）
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//// 点类
//class Pointer {
//
//private:
//    int x;  // x 坐标
//    int y;  // y 坐标
//
//public:
//    void setX(int x) {
//        this->x = x;
//    }
//
//    int getX() {
//        return x;
//    }
//
//    void setY(int y) {
//        this->y = y;
//    }
//
//    int getY() {
//        return y;
//    }
//
//};
//
//// 圆类
//class Circle {
//
//private:
//    Pointer center; // 圆心
//    int radius; // 半径
//
//public:
//    void setCenter(int x, int y) {
//        center.setX(x);
//        center.setY(y);
//    }
//
//    void setRadius(int radius) {
//        this->radius = radius;
//    }
//
//    void isPointerInCircle(Pointer p) {
//        //（x1,y1）表示p点的坐标
//        int x1 = p.getX();
//        int y1 = p.getY();
//        //（x2,y2）表示圆心的坐标
//        int x2 = center.getX();
//        int y2 = center.getY();
//        //dist表示圆心到p点的距离
//        int dist = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//        //如果距离小于半径，则在圆内
//        if (dist < radius) {
//            cout << "in" << endl;
//        }
//        //如果距离等于半径，则在圆上
//        else if (dist == radius) {
//            cout << "on" << endl;
//        }
//        //如果距离大于半径，则在圆外
//        else {
//            cout << "out" << endl;
//        }
//    }
//
//};
//
//int main() {
//
//    // 键盘输入点的坐标
//    int x, y;
//    cin >> x;
//    cin >> y;
//
//    // 创建一个点
//    Pointer p;
//    p.setX(x);
//    p.setY(y);
//
//    // 创建一个圆
//    Circle c;
//    c.setCenter(5, 0);
//    c.setRadius(5);
//
//    // 判断点和圆的关系
//    c.isPointerInCircle(p);
//
//    return 0;
//}
//解法三：（使用库函数pow）
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//// 点类
//class Pointer {
//
//private:
//    int x;  // x 坐标
//    int y;  // y 坐标
//
//public:
//    void setX(int x) {
//        this->x = x;
//    }
//
//    int getX() {
//        return x;
//    }
//
//    void setY(int y) {
//        this->y = y;
//    }
//
//    int getY() {
//        return y;
//    }
//
//};
//
//// 圆类
//class Circle {
//
//private:
//    Pointer center; // 圆心
//    int radius; // 半径
//
//public:
//    void setCenter(int x, int y) {
//        center.setX(x);
//        center.setY(y);
//    }
//
//    void setRadius(int radius) {
//        this->radius = radius;
//    }
//
//    // write your code here......
//    void isPointerInCircle(Pointer p) {
//        double direction = sqrt(pow(p.getX() - this->center.getX(), 2) + pow(p.getY() - this->center.getY(), 2));
//        if (direction == radius) {
//            cout << "on" << endl;
//        }
//        else if (direction < radius) {
//            cout << "in" << endl;
//        }
//        else {
//            cout << "out" << endl;
//        }
//    }
//
//
//
//};
//int main() {
//
//    // 键盘输入点的坐标
//    int x, y;
//    cin >> x;
//    cin >> y;
//
//    // 创建一个点
//    Pointer p;
//    p.setX(x);
//    p.setY(y);
//
//    // 创建一个圆
//    Circle c;
//    c.setCenter(5, 0);
//    c.setRadius(5);
//
//    // 判断点和圆的关系
//    c.isPointerInCircle(p);
//
//    return 0;
//}
//CPP40 构造函数
//解法一：
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// Person类
//class Person {
//public:
//    string name;    // 姓名
//    int age;    // 年龄
//
//    // write your code here......
//    Person(string n, int a) :name(n), age(a) {}
//
//    void showPerson() {
//        cout << name << " " << age << endl;
//    }
//};
//
//int main() {
//
//    string name;
//    int age;
//
//    cin >> name;
//    cin >> age;
//
//    Person p(name, age);
//    p.showPerson();
//
//    return 0;
//}
//CPP41 浅拷贝和深拷贝
//解法一：
//#include <iostream>
//#include <cstring>
//#pragma warning(disable : 4996)
//using namespace std;
//
//class Person {
//
//public:
//    char* name; // 姓名
//    int age;    // 年龄
//
//    Person(const char* name, int age) {
//        this->name = new char[strlen(name) + 1];
//        strcpy(this->name, name);
//        this->age = age;
//    }
//
//    // write your code here......
//    Person(const Person& p)
//    {
//        this->name = new char[strlen(p.name) + 1];
//        strcpy(this->name, p.name);
//        this->age = p.age;
//    }
//
//    void showPerson() {
//        cout << name << " " << age << endl;
//    }
//
//    ~Person() {
//        if (name != nullptr) {
//            delete[] name;
//            name = nullptr;
//        }
//    }
//
//};
//
//int main() {
//
//    char name[100] = { 0 };
//    int age;
//
//    cin >> name;
//    cin >> age;
//
//    Person p1(name, age);
//    Person p2 = p1;
//
//    p2.showPerson();
//
//    return 0;
//}
//CPP59 比较长方形的面积大小
//解法一：（this指针的奇特妙用，重点掌握）
//#include<iostream>
//using namespace std;
//class rectangle {
//private:
//	int length, width;
//public:
//	void set(int x, int y) {
//		length = x;
//		width = y;
//	}
//	int getlength() {
//		return length;
//	}
//	int getwidth() {
//		return width;
//	}
//	int area() {
//		return length * width;
//	}
//	void compare(rectangle a) {
//		// write your code here......
//			/*因为先初始化了两个变量，若想利用一个变量引用方法，
//			其方法中的参数是另一个变量的话，
//			需要考虑局部变量和全局变量在方法中的使用，
//			可以选择this关键字访问当前对象。
//			*/
//		if (this->area() > a.area())
//			cout << 1 << endl;
//		else
//			cout << 0 << endl;
//	}
//};
//int main() {
//	int l1, w1, l2, w2;
//	cin >> l1 >> w1 >> l2 >> w2;
//	rectangle a, b;
//	a.set(l1, w1);
//	b.set(l2, w2);
//	a.compare(b);
//	return 0;
//}
//CPP60 长方形的关系
//解法一：注意不要连续cout，会出现意想不到的错误，需要修改
//#include<iostream>
//using namespace std;
//class rectangle {
//private:
//	int length, width;
//public:
//	void set(int x, int y) {
//		length = x;
//		width = y;
//	}
//	int getlength() {
//		return length;
//	}
//	int getwidth() {
//		return width;
//	}
//	int area() {
//		return length * width;
//	}
//	// write your code here......
//	string cancover(rectangle x)
//	{
//		if (this->area() >= x.area())
//			return "yes";
//		else
//		{
//			return "no";
//		}
//	}
//};
//int main() {
//	int l1, w1, l2, w2;
//	cin >> l1 >> w1 >> l2 >> w2;
//	rectangle a, b;
//	a.set(l1, w1);
//	b.set(l2, w2);
//	cout << a.cancover(b);
//	return 0;
//}
//解法二：（较为完整）
//描述解题思路：看排名较高的的解题方法是比较两个矩形的面积 但是里面涉及到一个问题，比如说，一个矩形参数为（20，1），另一个矩形参数为（3,4） 
//第一个矩形的面积虽然比第二个矩形的面积大， 但是前者不能完全将第二个矩形完全覆盖， 故因此比较他们的较长的边，和较短的边分别比较，最终达到题目所要求的 先找出矩形较长的边和较短的边
//#include<iostream>
//using namespace std;
//class rectangle {
//private:
//    int length, width;
//public:
//    void set(int x, int y) {
//        length = x;
//        width = y;
//    }
//    int getlength() {
//        return length;
//    }
//    int getwidth() {
//        return width;
//    }
//    int area() {
//        return length * width;
//    }
//    // write your code here......
//    int  find_max() {
//        if (length > width)
//            return  length;
//        else
//            return  width;
//    }
//    int find_min() {
//        if (length < width)
//            return length;
//        else
//            return  width;
//    }
//    string  cancover(rectangle& b) {
//        if ((this->find_max() >= b.find_max()) && (this->find_min() >= b.find_min()))
//            return "yes";
//        else
//            return "no";
//    }
//
//};
//int main() {
//    int l1, w1, l2, w2;
//    cin >> l1 >> w1 >> l2 >> w2;
//    rectangle a, b;
//    a.set(l1, w1);
//    b.set(l2, w2);
//    cout << a.cancover(b);
//    return 0;
//}
//CPP61 数组类的构造函数
//解法一：（动态内存的创建）
//#include<iostream>
//using namespace std;
//class Array {
//private:
//	int n;//数组大小 
//	int* a;//数组 
//public:
//	// write your code here......
//	Array()
//	{
//		cin >> n;
//		a = new int[n];
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//	}
//	~Array() {
//		delete[]a;
//	}
//	void show() {
//		for (int i = 0; i < n; i++) cout << a[i] << ' ';
//	}
//};
//int main() {
//	Array a;
//	a.show();
//	return 0;
//}
//CPP62 数组类的拷贝构造函数
//解法一：
#include<iostream>
using namespace std;
class Array {
private:
	int n;//数组大小 
	int* a;//数组 
public:
	Array() {
		cin >> n;
		a = new int[n];
		for (int i = 0; i < n; i++) cin >> a[i];
	}
	~Array() {
		delete[]a;
	}
	int getlen() {
		return n;
	}
	int get(int i) {
		return a[i];
	}
	// write your code here......
	Array(Array& p)
	{
		this->n = p.getlen();
		this->a = new int[n];
		for (int i = 0; i < n; i++)
		{
			this->a[i] = p.get(i);
		}
	}
	void show() {
		for (int i = 0; i < n; i++) cout << a[i] << ' ';
	}
};
int main() {
	Array a;
	Array b = a;
	b.show();
	return 0;
}