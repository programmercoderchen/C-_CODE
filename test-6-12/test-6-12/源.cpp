//CPP33 ͳ���ַ������Ӵ����ֵĴ���
//�ⷨһ����˫ָ�����˼·�Լ�������
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
//                    flag = false; //����ͬ����һ�β����Ӵ�
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
//�ⷨ������ʹ�ÿ⺯��find��ȡ�ַ������ִ�����
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
//    //ת��Ϊ�ַ���
//    string str1(str);
//    string str2(substr);
//
//    int i = 0;
//    //��str1�±�i��ʼ����str2
//    while (str1.find(str2, i) != -1) {
//        //����ҵõ���������1
//        count++;
//        //i���ҵ���λ�ã�����һλ
//        i = str1.find(str2, i) + 1;
//    }
//
//    cout << count << endl;
//
//    return 0;
//}
//�ⷨ�����������ַ���ĩβ�ǡ�\0�����ص���н��⣩
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
//    for (int i = 0; str[i] != '\0'; i++) { //�����ַ���str
//        bool flag = true;
//        for (int j = 0; substr[j] != '\0'; j++) { //���ַ���str��iλ��Ϊ��㣬ÿ��ͬ������substr����
//            if (str[i + j] != '\0' && str[i + j] == substr[j]) //�Ƚ�ÿ���ַ�
//                continue;
//            else {
//                flag = false; //����ͬ����һ�β����Ӵ�
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
//CPP34 ʹ���ַ�����ͳ���ַ����и������ַ��ĸ���
//�ⷨһ��Ҫ��ʹ���ַ�����
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
//    for (int i = 0; i < str.length(); i++) { //�����ַ���
//        if (isalpha(str[i])) //�ж��Ƿ�����ĸ
//            chars++;
//        else if (isdigit(str[i])) //�ж��Ƿ�������
//            digits++;
//        else if (isspace(str[i])) //�ж��Ƿ��ǿո�
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
//�ⷨ��������ʹ���ַ�����������asc������жϣ�Ȼ��ó������
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
//    //ʹ��һ���ַ�ָ��������ַ������׵�ַ
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
//CPP35 ����ʵ�ּ���һ�����Ľ׳�
//�ⷨһ��
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
//�ⷨ������ʹ�õݹ飩
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
//CPP36 ������������
//�ⷨһ����ʹ�õݹ�����
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
//    return getSum(n - 1) + getSum(n - 2); //����ǰ���������
//}
//����������ʹ�õ�������������⣩
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
//    cout << getSum(n) << endl; //������
//
//    return 0;
//}
//
//int getSum(int n) {
//    if (n <= 2) //2������ֱ�ӷ���
//        return 1;
//    int a = 1; //��ʾ��ǰҪ������·�ǰһ����
//    int b = 1; //��ʾ��ǰҪ�����·ݵ�ǰ������
//    int res = 0;
//    for (int i = 3; i <= n; i++) { //����3-n
//        res = a + b; //ֱ�����
//        b = a; //����ǰ����
//        a = res; //
//    }
//    return res;
//}
//CPP37 ��д����ʵ���������������÷�ʽ��
//�ⷨһ��
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
//CPP58 ��д����ʵ���ַ�����ת�����÷�ʽ��
//�ⷨһ��
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
//CPP38 ����������ࣨ�����ƣ�
//�ⷨһ��
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
//�ⷨ������ÿһ������������thisָ��ָ�����ݳ�Ա��
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
//CPP39 ���Բ�Ĺ�ϵ
//�ⷨһ��
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//// ����
//class Pointer {
//
//private:
//    int x;  // x ����
//    int y;  // y ����
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
//// Բ��
//class Circle {
//
//private:
//    Pointer center; // Բ��
//    int radius; // �뾶
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
//    // ��������������
//    int x, y;
//    cin >> x;
//    cin >> y;
//
//    // ����һ����
//    Pointer p;
//    p.setX(x);
//    p.setY(y);
//
//    // ����һ��Բ
//    Circle c;
//    c.setCenter(5, 0);
//    c.setRadius(5);
//
//    // �жϵ��Բ�Ĺ�ϵ
//    c.isPointerInCircle(p);
//
//    return 0;
//}
//�ⷨ������ʹ�ü���βΣ�
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//// ����
//class Pointer {
//
//private:
//    int x;  // x ����
//    int y;  // y ����
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
//// Բ��
//class Circle {
//
//private:
//    Pointer center; // Բ��
//    int radius; // �뾶
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
//        //��x1,y1����ʾp�������
//        int x1 = p.getX();
//        int y1 = p.getY();
//        //��x2,y2����ʾԲ�ĵ�����
//        int x2 = center.getX();
//        int y2 = center.getY();
//        //dist��ʾԲ�ĵ�p��ľ���
//        int dist = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//        //�������С�ڰ뾶������Բ��
//        if (dist < radius) {
//            cout << "in" << endl;
//        }
//        //���������ڰ뾶������Բ��
//        else if (dist == radius) {
//            cout << "on" << endl;
//        }
//        //���������ڰ뾶������Բ��
//        else {
//            cout << "out" << endl;
//        }
//    }
//
//};
//
//int main() {
//
//    // ��������������
//    int x, y;
//    cin >> x;
//    cin >> y;
//
//    // ����һ����
//    Pointer p;
//    p.setX(x);
//    p.setY(y);
//
//    // ����һ��Բ
//    Circle c;
//    c.setCenter(5, 0);
//    c.setRadius(5);
//
//    // �жϵ��Բ�Ĺ�ϵ
//    c.isPointerInCircle(p);
//
//    return 0;
//}
//�ⷨ������ʹ�ÿ⺯��pow��
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//// ����
//class Pointer {
//
//private:
//    int x;  // x ����
//    int y;  // y ����
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
//// Բ��
//class Circle {
//
//private:
//    Pointer center; // Բ��
//    int radius; // �뾶
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
//    // ��������������
//    int x, y;
//    cin >> x;
//    cin >> y;
//
//    // ����һ����
//    Pointer p;
//    p.setX(x);
//    p.setY(y);
//
//    // ����һ��Բ
//    Circle c;
//    c.setCenter(5, 0);
//    c.setRadius(5);
//
//    // �жϵ��Բ�Ĺ�ϵ
//    c.isPointerInCircle(p);
//
//    return 0;
//}
//CPP40 ���캯��
//�ⷨһ��
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// Person��
//class Person {
//public:
//    string name;    // ����
//    int age;    // ����
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
//CPP41 ǳ���������
//�ⷨһ��
//#include <iostream>
//#include <cstring>
//#pragma warning(disable : 4996)
//using namespace std;
//
//class Person {
//
//public:
//    char* name; // ����
//    int age;    // ����
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
//CPP59 �Ƚϳ����ε������С
//�ⷨһ����thisָ����������ã��ص����գ�
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
//			/*��Ϊ�ȳ�ʼ����������������������һ���������÷�����
//			�䷽���еĲ�������һ�������Ļ���
//			��Ҫ���Ǿֲ�������ȫ�ֱ����ڷ����е�ʹ�ã�
//			����ѡ��this�ؼ��ַ��ʵ�ǰ����
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
//CPP60 �����εĹ�ϵ
//�ⷨһ��ע�ⲻҪ����cout����������벻���Ĵ�����Ҫ�޸�
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
//�ⷨ��������Ϊ������
//��������˼·���������ϸߵĵĽ��ⷽ���ǱȽ��������ε���� ���������漰��һ�����⣬����˵��һ�����β���Ϊ��20��1������һ�����β���Ϊ��3,4�� 
//��һ�����ε������Ȼ�ȵڶ������ε������ ����ǰ�߲�����ȫ���ڶ���������ȫ���ǣ� ����˱Ƚ����ǵĽϳ��ıߣ��ͽ϶̵ı߷ֱ�Ƚϣ����մﵽ��Ŀ��Ҫ��� ���ҳ����νϳ��ıߺͽ϶̵ı�
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
//CPP61 ������Ĺ��캯��
//�ⷨһ������̬�ڴ�Ĵ�����
//#include<iostream>
//using namespace std;
//class Array {
//private:
//	int n;//�����С 
//	int* a;//���� 
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
//CPP62 ������Ŀ������캯��
//�ⷨһ��
#include<iostream>
using namespace std;
class Array {
private:
	int n;//�����С 
	int* a;//���� 
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