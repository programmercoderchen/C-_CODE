//CPP42 ��Ԫȫ�ֺ���
//�ⷨһ������Ԫ������ʹ�÷���˽�еĳ�Ա���ݣ�
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
//CPP63 ��Ԫ��
//�ⷨһ��
//#include<iostream>
//using namespace std;
//class phone {
//    // write your code here......
//    friend class myphone;//����Ϊ��Ԫ��
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
//CPP43 �Ӻ����������
//�ⷨһ��
//#include <iostream>
//using namespace std;
//
//class Time {
//
//public:
//    int hours;      // Сʱ
//    int minutes;    // ����
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
// CPP64 ����С�ںţ��ص����գ�
//�ⷨһ����ʹ��bool����������true��������false��
//#include <iostream>
//using namespace std;
//
//class Time {
//
//public:
//    int hours;      // Сʱ
//    int minutes;    // ����
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
// �ⷨ������ʹ�ö���жϽ��н��⣩
//#include <iostream>
//using namespace std;
//
//class Time {
//
//public:
//    int hours;      // Сʱ
//    int minutes;    // ����
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
//CPP44 �����е��ø��๹��
//�ⷨһ��
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
//CPP45 ��д��������߼�
//�ⷨһ��
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
//    Sub(int x, int y) : Base(x, y) {} //���캯��
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
//CPP65 ������������
//�ⷨһ�����̳��������Ǻ������������ݳ�Ա��
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
//�ⷨ������ʹ��thisָ����к�����ʹ�ã�
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
//    //�ؼ����ڼ̳л��������
//    //���캯���̳л���
//    cuboid(int x, int y, int z) :rectangle(x, y) {
//        this->height = z;
//    }
//    //����������ķ���
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
//CPP66 �󳤷�������
//�ⷨһ��
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
//CPP46 ��̬ʵ�ּ���������
//�ⷨһ��
//#include <iostream>
//using namespace std;
//
//class BaseCalculator {
//public:
//    int m_A;
//    int m_B;
//    //����getResult����������ӱ�ʶ��virtual
//    virtual int getResult();
//};
//
//// �ӷ���������
//class AddCalculator : public BaseCalculator {
//    //����getResult������ʵ�ּӷ�����
//    virtual int getResult() {
//        return m_A + m_B;
//    }
//};
//
//// ������������
//class SubCalculator : public BaseCalculator {
//    //����getResult������ʵ�ּ�������
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
//CPP67 ��̬ʵ����������
//�ⷨһ��
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
//�ⷨ���������û����ֳɵ��������������ʵ�������
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
//    //��̬�ؼ���virtual,��������,Ҳ����ʵ�֣������
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
//    //������д��ʵ�����
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
//CPP52 ͳ���ַ����и������ַ��ĸ���
//�ⷨһ������ͨ�ⷨ��
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
//    for (int i = 0; buf[i] != '\0'; i++) { //�����ַ�����'\0'Ϊֹ
//        char c = buf[i];
//        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') //��Сд��ĸ
//            letter++;
//        else if (c >= '0' && c <= '9') //����
//            digit++;
//        else if (c == ' ')  //�ո�
//            space++;
//        else //�����ַ�
//            other++;
//    }
//
//    cout << "letter:" << letter << " digit:" << digit << " space:" << space << " other:" << other << endl;
//
//    return 0;
//}
//�ⷨ������ʹ����صĺ���������⣩
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
//�ⷨ����
/*
�ж���ĸisalpha
�ж�����isdigit
�жϿո�isspace
String�ַ�����ȡ��
getline(cin, inputLine);
Char buf[]�ַ����飺
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
//    cin.getline(buf, sizeof(buf));//�õ��ַ����Լ��ַ������ַ�����
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
//CPP68 ����������set
//�ⷨһ������������ʹ�ã���δѧϰ��֪����ô�����
//#include<iostream>
//using namespace std;
//int main() {
//    set<int>s;
//    // write your code here......
//    for (int i = 0; i < 5; i++)
//    {
//        int temp = 0;
//        cin >> temp;
//        s.insert(temp);//����Ԫ��
//    }
//    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//    {
//        cout << *it << " ";
//    }
//    return 0;
//}
//CPP53 ��������˰�������
//�������Ļ����÷�������stl���������У�ʵ�ִ�С�������
//#include <iostream>
//#include <iomanip>
//#include <vector>//����stl��ͷ�ļ�
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
//    //���캯��
//    Employee(string name, double salary) {
//        this->name = name;
//        this->salary = salary;
//    }
//
//    //��ȡ����
//    string getName() {
//        return name;
//    }
//
//    //��ȡнˮ
//    double getSalary() {
//        return salary;
//    }
//
//};
//
////���رȽϣ���нˮ�Ӵ�С
//bool cmp(Employee& e1, Employee& e2) {
//    return e1.getSalary() > e2.getSalary();
//}
//
//void print(Employee& e) {
//    //��������˰
//    double tax = 0.0;
//    //ȫ��Ӧ��˰���ö�
//    double t = e.getSalary() - 3500;
//    //�����������ķ�Χ���ֱ���м���
//    if (t <= 0) {
//        //С��0������Ҫ��˰
//    }
//    //�����������������ʽ���������ݼ���
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
//    //���þ���
//    cout << fixed << setprecision(1);
//    cout << e.getName() << "Ӧ�ý��ɵĸ�������˰�ǣ�" << tax << endl;
//}
//
//int main() {
//
//    //�½�����Employee����
//    Employee e1("����", 6500);
//    Employee e2("����", 8000);
//    Employee e3("����", 100000);
//    vector<Employee> vec;
//    //��ӵ�����
//    vec.push_back(e1);
//    vec.push_back(e2);
//    vec.push_back(e3);
//    //�����ʴӴ�С����
//    sort(vec.begin(), vec.end(), cmp);
//    //�����������˰
//    for_each(vec.begin(), vec.end(), print);
//
//    return 0;
//}