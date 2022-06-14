//CPP42 友元全局函数
//解法一：（友元函数的使用访问私有的成员数据）
//#include <iostream>
//using namespace std;
//
//class Person {
//    // write your code here......
//    friend void showAge(Person& p);
//
//public:
//    Person(int age) {
//        this->age = age;
//    }
//
//private:
//    int age;
//};
//
//void showAge(Person& p) {
//    cout << p.age << endl;
//}
//
//int main() {
//
//    Person p(10);
//    showAge(p);
//
//    return 0;
//}
//CPP63 友元类
//解法一：
//#include<iostream>
//using namespace std;
//class phone {
//    // write your code here......
//    friend class myphone;//声明为友元类
//private:
//    int price;
//public:
//    phone(int x) {
//        price = x;
//    }
//};
//class myphone {
//private:
//    phone a;
//public:
//    myphone(int x) :a(x) {
//    }
//    int getprice() {
//        return a.price;
//    }
//};
//int main() {
//    int p;
//    cin >> p;
//    myphone a(p);
//    cout << a.getprice();
//    return 0;
//}
//CPP43 加号运算符重载
//解法一：
//#include <iostream>
//using namespace std;
//
//class Time {
//
//public:
//    int hours;      // 小时
//    int minutes;    // 分钟
//
//    Time() {
//        hours = 0;
//        minutes = 0;
//    }
//
//    Time(int h, int m) {
//        this->hours = h;
//        this->minutes = m;
//    }
//
//    void show() {
//        cout << hours << " " << minutes << endl;
//    }
//
//    // write your code here......
//    friend Time operator +(Time& c1, Time& c2);
//
//};
//Time operator +(Time& c1, Time& c2)
//{
//    Time c3;
//    c3.hours = c1.hours + c2.hours;
//    c3.minutes = c1.minutes + c2.minutes;
//    if (c3.minutes >= 60)
//    {
//        ++c3.hours;
//        c3.minutes -= 60;
//    }
//    return c3;
//}
//int main() {
//
//    int h, m;
//    cin >> h;
//    cin >> m;
//
//    Time t1(h, m);
//    Time t2(2, 20);
//
//    Time t3 = t1 + t2;
//    t3.show();
//
//    return 0;
//}
// CPP64 重载小于号（重点掌握）
//解法一：（使用bool常量，返回true，或者是false）
//#include <iostream>
//using namespace std;
//
//class Time {
//
//public:
//    int hours;      // 小时
//    int minutes;    // 分钟
//
//    Time() {
//        hours = 0;
//        minutes = 0;
//    }
//
//    Time(int h, int m) {
//        this->hours = h;
//        this->minutes = m;
//    }
//
//    void show() {
//        cout << hours << " " << minutes << endl;
//    }
//
//    // write your code here......
//    bool operator <(Time& c1)
//    {
//        return hours * 60 + minutes < c1.hours * 60 + c1.minutes;
//    }
//
//};
//
//int main() {
//    int h, m;
//    cin >> h;
//    cin >> m;
//
//    Time t1(h, m);
//    Time t2(6, 6);
//
//    if (t1 < t2) cout << "yes"; else cout << "no";
//    return 0;
//}
// 解法二：（使用多次判断进行解题）
//#include <iostream>
//using namespace std;
//
//class Time {
//
//public:
//    int hours;      // 小时
//    int minutes;    // 分钟
//
//    Time() {
//        hours = 0;
//        minutes = 0;
//    }
//
//    Time(int h, int m) {
//        this->hours = h;
//        this->minutes = m;
//    }
//
//    void show() {
//        cout << hours << " " << minutes << endl;
//    }
//
//    // write your code here......
//    bool operator<(Time t) {
//        if (this->hours == t.hours) {
//            if (this->minutes < t.hours) {
//                return true;
//            }
//            else {
//                return false;
//            }
//        }
//        else if (this->hours > t.hours) {
//            return false;
//        }
//        else return true;
//
//    }
//
//};
//
//int main() {
//    int h, m;
//    cin >> h;
//    cin >> m;
//
//    Time t1(h, m);
//    Time t2(6, 6);
//
//    if (t1 < t2) cout << "yes"; else cout << "no";
//    return 0;
//}
//CPP44 子类中调用父类构造
//解法一：
//#include <iostream>
//using namespace std;
//
//class Base {
//
//private:
//    int x;
//    int y;
//
//public:
//    Base(int x, int y) {
//        this->x = x;
//        this->y = y;
//    }
//
//    int getX() {
//        return x;
//    }
//
//    int getY() {
//        return y;
//    }
//
//};
//
//class Sub : public Base {
//
//private:
//    int z;
//
//public:
//    Sub(int x, int y, int z) :Base(x, y), z(z) {
//        // write your code here
//
//    }
//
//    int getZ() {
//        return z;
//    }
//
//    int calculate() {
//        return Base::getX() * Base::getY() * this->getZ();
//    }
//
//};
//
//int main() {
//
//    int x, y, z;
//    cin >> x;
//    cin >> y;
//    cin >> z;
//    Sub sub(x, y, z);
//    cout << sub.calculate() << endl;
//
//    return 0;
//}
//CPP45 重写子类计算逻辑
//解法一：
//#include <iostream>
//using namespace std;
//
//class Base {
//
//private:
//    int x;
//    int y;
//
//public:
//    Base(int x, int y) {
//        this->x = x;
//        this->y = y;
//    }
//
//    int getX() {
//        return x;
//    }
//
//    int getY() {
//        return y;
//    }
//
//    void calculate() {
//        cout << getX() * getY() << endl;
//    }
//
//};
//
//class Sub : public Base
//{
//    // write your code here......
//public:
//    Sub(int x, int y) : Base(x, y) {} //构造函数
//    void calculate()
//    {
//        if (getY() == 0)
//        {
//            cout << "Error" << endl;
//        }
//        else
//        {
//            cout << getX() / getY() << endl;
//        }
//    }
//};
//
//int main() {
//
//    int x, y, z;
//    cin >> x;
//    cin >> y;
//    Sub sub(x, y);
//    sub.calculate();
//
//    return 0;
//}
//CPP65 构建长方体类
//解法一：（继承下来的是函数，不是数据成员）
//#include<iostream>
//using namespace std;
//class rectangle {
//private:
//	int length, width;
//public:
//	rectangle(int x, int y) {
//		length = x;
//		width = y;
//	}
//	void set(int x, int y) {
//		length = x;
//		width = y;
//	}
//	int area() {
//		return length * width;
//	}
//};
//class cuboid :public rectangle {
//private:
//	int height;
//public:
//	// write your code here...
//	cuboid(int x, int y, int h) :rectangle(x, y), height(h) {}
//	int getvolume()
//	{
//		return area() * height;
//	}
//};
//int main() {
//	int x, y, z;
//	cin >> x >> y >> z;
//	cuboid a(x, y, z);
//	cout << a.getvolume();
//	return 0;
//}
//解法二：（使用this指针进行函数的使用）
//#include<iostream>
//using namespace std;
//class rectangle {
//private:
//    int length, width;
//public:
//    rectangle(int x, int y) {
//        length = x;
//        width = y;
//    }
//    void set(int x, int y) {
//        length = x;
//        width = y;
//    }
//    int area() {
//        return length * width;
//    }
//};
//class cuboid : public rectangle {
//private:
//    int height;
//public:
//    // write your code here...
//    //关键在于继承基类的属性
//    //构造函数继承基类
//    cuboid(int x, int y, int z) :rectangle(x, y) {
//        this->height = z;
//    }
//    //定义求体积的方法
//    int getvolume() {
//        return this->area() * this->height;
//    }
//
//};
//int main() {
//    int x, y, z;
//    cin >> x >> y >> z;
//    cuboid a(x, y, z);
//    cout << a.getvolume();
//    return 0;
//}
//CPP66 求长方体表面积
//解法一：
//#include<iostream>
//using namespace std;
//class rectangle {
//private:
//	int length, width;
//public:
//	rectangle(int x, int y) {
//		length = x;
//		width = y;
//	}
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
//};
//class cuboid :public rectangle {
//private:
//	int height;
//public:
//	// write your code here...
//	cuboid(int x, int y, int h) :rectangle(x, y), height(h) {}
//	int area()
//	{
//		return 2 * rectangle::area() + 2 * rectangle::getlength() * height + 2 * rectangle::getwidth() * height;
//	}
//};
//int main() {
//	int x, y, z;
//	cin >> x >> y >> z;
//	cuboid a(x, y, z);
//	cout << a.rectangle::area() << '\n' << a.area();
//	return 0;
//}
//CPP46 多态实现计算器功能
//解法一：
//#include <iostream>
//using namespace std;
//
//class BaseCalculator {
//public:
//    int m_A;
//    int m_B;
//    //声明getResult方法，并添加标识符virtual
//    virtual int getResult();
//};
//
//// 加法计算器类
//class AddCalculator : public BaseCalculator {
//    //重载getResult方法，实现加法功能
//    virtual int getResult() {
//        return m_A + m_B;
//    }
//};
//
//// 减法计算器类
//class SubCalculator : public BaseCalculator {
//    //重载getResult方法，实现减法功能
//    virtual int getResult() {
//        return m_A - m_B;
//    }
//};
//
//
//int main() {
//
//    BaseCalculator* cal = new AddCalculator;
//    cal->m_A = 10;
//    cal->m_B = 20;
//    cout << cal->getResult() << endl;
//    delete cal;
//
//    cal = new SubCalculator;
//    cal->m_A = 20;
//    cal->m_B = 10;
//    cout << cal->getResult() << endl;
//    delete cal;
//
//    return 0;
//}
//CPP67 多态实现求面积体积
//解法一：
//#include<iostream>
//using namespace std;
//class rectangle {
//private:
//	int length, width;
//public:
//	rectangle(int x, int y) {
//		length = x;
//		width = y;
//	}
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
//	// write your code here...
//	virtual int getval()
//	{
//		return length * width;
//	}
//};
//class cuboid :public rectangle {
//private:
//	int height;
//public:
//	cuboid(int x, int y, int z) :rectangle(x, y) {
//		height = z;
//	}
//	// write your code here...
//	virtual int getval()
//	{
//		return rectangle::getlength() * rectangle::getwidth() * height;
//	}
//};
//int main() {
//	int x, y, z;
//	cin >> x >> y >> z;
//	cuboid a(x, y, z);
//	rectangle b(x, y);
//
//	rectangle* p = &b;
//	cout << p->getval() << '\n';
//
//	p = &a;
//	cout << p->getval();
//	return 0;
//}
//解法二：（调用基类现成的面积函数，用于实现体积）
//#include<iostream>
//using namespace std;
//class rectangle {
//private:
//    int length, width;
//public:
//    rectangle(int x, int y) {
//        length = x;
//        width = y;
//    }
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
//    // write your code here...
//    //多态关键字virtual,父类声明,也可以实现（面积）
//    virtual int getval() {
//        return this->length * this->width;
//    }
//
//};
//class cuboid : public rectangle {
//private:
//    int height;
//public:
//    cuboid(int x, int y, int z) : rectangle(x, y) {
//        height = z;
//    }
//    // write your code here...
//    //子类重写，实现体积
//    virtual int getval() {
//        return this->rectangle::getval() * this->height;
//    }
//
//};
//int main() {
//    int x, y, z;
//    cin >> x >> y >> z;
//    cuboid a(x, y, z);
//    rectangle b(x, y);
//
//    rectangle* p = &b;
//    cout << p->getval() << '\n';
//
//    p = &a;
//    cout << p->getval();
//    return 0;
//}
//CPP52 统计字符串中各类型字符的个数
//解法一：（普通解法）
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//
//    int letter = 0;
//    int digit = 0;
//    int space = 0;
//    int other = 0;
//
//    char buf[1024] = { 0 };
//    cin.getline(buf, sizeof(buf));
//
//    // write your code here......
//    for (int i = 0; buf[i] != '\0'; i++) { //遍历字符串到'\0'为止
//        char c = buf[i];
//        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') //大小写字母
//            letter++;
//        else if (c >= '0' && c <= '9') //数字
//            digit++;
//        else if (c == ' ')  //空格
//            space++;
//        else //其他字符
//            other++;
//    }
//
//    cout << "letter:" << letter << " digit:" << digit << " space:" << space << " other:" << other << endl;
//
//    return 0;
//}
//解法二：（使用相关的函数进行求解）
//#include <iostream>
//#include <map>
//#include <cctype>
//#include <cstring>
//using namespace std;
//
//int main() {
//
//    char str[100] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    map<char, int> result;
//
//    for (int i = 0; i < strlen(str); i++) {
//        char ch = str[i];
//        if (isalpha(ch)) {
//            map<char, int>::iterator it = result.find(ch);
//            if (it != result.end()) {
//                it->second += 1;
//            }
//            else {
//                result.insert(make_pair(ch, 1));
//            }
//        }
//    }
//
//    for (map<char, int>::iterator it = result.begin(); it != result.end(); it++) {
//        cout << it->first << ":" << it->second << endl;
//    }
//
//    return 0;
//}
//解法三：
/*
判断字母isalpha
判断数字isdigit
判断空格isspace
String字符串读取：
getline(cin, inputLine);
Char buf[]字符数组：
cin.getline(sentence, SIZE);
*/
//#include <iostream>
//#include <cstring>
//#include <cctype>
//using namespace std;
//
//int main() {
//
//    int letter = 0;
//    int digit = 0;
//    int space = 0;
//    int other = 0;
//
//    char buf[1024] = { 0 };
//    cin.getline(buf, sizeof(buf));//得到字符串以及字符串的字符个数
//    string buf1(buf);
//    for (int i = 0; i < buf1.size(); i++) {
//        if (isalpha(buf1[i])) {
//            letter++;
//        }
//        else if (isdigit(buf1[i])) {
//            digit++;
//        }
//        else if (isspace(buf1[i])) {
//            space++;
//        }
//        else {
//            other++;
//        }
//    }
//    // write your code here......
//
//
//    cout << "letter:" << letter << " digit:" << digit << " space:" << space << " other:" << other << endl;
//
//    return 0;
//}
//CPP68 迭代器遍历set
//解法一：（迭代器的使用，还未学习不知道怎么解决）
//#include<iostream>
//using namespace std;
//int main() {
//    set<int>s;
//    // write your code here......
//    for (int i = 0; i < 5; i++)
//    {
//        int temp = 0;
//        cin >> temp;
//        s.insert(temp);//插入元素
//    }
//    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//    {
//        cout << *it << " ";
//    }
//    return 0;
//}
//CPP53 个人所得税计算程序
//迭代器的基础用法，存入stl的容器当中，实现从小到大输出
//#include <iostream>
//#include <iomanip>
//#include <vector>//容器stl的头文件
//#include <algorithm>
//
//using namespace std;
//
//class Employee {
//
//private:
//    string name;
//    double salary;
//
//public:
//    //构造函数
//    Employee(string name, double salary) {
//        this->name = name;
//        this->salary = salary;
//    }
//
//    //获取名字
//    string getName() {
//        return name;
//    }
//
//    //获取薪水
//    double getSalary() {
//        return salary;
//    }
//
//};
//
////重载比较，按薪水从大到小
//bool cmp(Employee& e1, Employee& e2) {
//    return e1.getSalary() > e2.getSalary();
//}
//
//void print(Employee& e) {
//    //个人所得税
//    double tax = 0.0;
//    //全月应纳税所得额
//    double t = e.getSalary() - 3500;
//    //按表中所给的范围，分别进行计算
//    if (t <= 0) {
//        //小于0，不需要扣税
//    }
//    //其它情况，按所给公式及表中数据计算
//    else if (t > 0 && t <= 1500) {
//        tax = t * 0.03 - 0;
//    }
//    else if (t > 1500 && t <= 4500) {
//        tax = t * 0.10 - 105;
//    }
//    else if (t > 4500 && t <= 9000) {
//        tax = t * 0.20 - 555;
//    }
//    else if (t > 9000 && t <= 35000) {
//        tax = t * 0.25 - 1005;
//    }
//    else if (t > 35000 && t <= 55000) {
//        tax = t * 0.30 - 2755;
//    }
//    else if (t > 55000 && t <= 80000) {
//        tax = t * 0.35 - 5505;
//    }
//    else {
//        tax = t * 0.45 - 13505;
//    }
//    //设置精度
//    cout << fixed << setprecision(1);
//    cout << e.getName() << "应该缴纳的个人所得税是：" << tax << endl;
//}
//
//int main() {
//
//    //新建三个Employee对象
//    Employee e1("张三", 6500);
//    Employee e2("李四", 8000);
//    Employee e3("王五", 100000);
//    vector<Employee> vec;
//    //添加到容器
//    vec.push_back(e1);
//    vec.push_back(e2);
//    vec.push_back(e3);
//    //按工资从大到小排序
//    sort(vec.begin(), vec.end(), cmp);
//    //输出个人所得税
//    for_each(vec.begin(), vec.end(), print);
//
//    return 0;
//}