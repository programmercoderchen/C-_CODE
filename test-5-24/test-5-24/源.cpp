//#include <iostream>
//using namespace std;
//
//
//class TDate
//{
//public:
//    TDate(int y = 0, int m = 0, int d = 0) :Month(m), Day(d), Year(y) {}
//    void print()
//    {
//        cout << Day << '/' << Month << '/' << Year << endl;
//    }
//private:
//    int Month;
//    int Day;
//    int Year;
//};
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    cin >> a >> b >> c;
//    TDate s1(a, b, c);
//    s1.print();
//    return 0;
//}
//BC1 Hello Nowcoder
//#include  <iostream>
//using namespace std;
//
//int main()
//{
//    cout << "Hello Nowcoder!" << endl;
//}
//CPP1 定义变量
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    cout << sizeof(char) << endl;
//    cout << sizeof(int) << endl;
//    cout << sizeof(long) << endl;
//    cout << sizeof(double) << endl;
//    return 0;
//}
//CPP2 实现四舍五入
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    double d;
//    cin >> d;
//    // write your code here......
//    if (d > 0)
//    {
//        if (d < (int)d + 0.5)
//        {
//            cout << (int)d << endl;
//        }
//        else
//        {
//            cout << (int)d + 1 << endl;
//        }
//    }
//    else
//    {
//        if (d < (int)d - 0.5)
//        {
//            cout << (int)d - 1 << endl;
//        }
//        else
//        {
//            cout << (int)d << endl;
//        }
//    }
//    return 0;
//}
//题解二
//#include <iostream>
//using namespace std;
//
//int main() 
//{
//    double d;
//    cin >> d;
//    if (d > 0)
//        cout << (int)(d + 0.5);
//    else cout << (int)(d - 0.5);
//    return 0;
//}
//CPP3 两数求和
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    // write your code here......
//    int a = 0;
//    int b = 0;
//    int sum = 0;
//    cin >> a >> b;
//    sum = a + b;
//    cout << sum << endl;
//    return 0;
//}
//CPP4 获取两数中的较大值
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    // write your code here......
//    int a, b;
//    cin >> a >> b;
//    if (a > b)
//    {
//        cout << a << endl;
//    }
//    else
//    {
//        cout << b << endl;
//    }
//    return 0;
//}
//CPP5 简单运算
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    // write your code here......
//    int a, b;
//    cin >> a >> b;
//    cout << a + b << " ";
//    if (a > b)
//    {
//        cout << a - b << " ";
//    }
//    else
//    {
//        cout << b - a << " ";
//    }
//    if (a < 0 || b < 0)
//    {
//        cout << -a * b << " ";
//    }
//    else
//    {
//        cout << a * b << " ";
//    }
//    if (a > b)
//    {
//        cout << a / b << " " << a % b << " " << endl;
//    }
//    else
//    {
//        cout << b / a << " " << b % a << " " << endl;
//    }
//    return 0;
//}
//CPP6 交换两个变量的值#include <iostream>
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    cin >> a;
//    cin >> b;
//
//    //write your code here.......
//    c = a;
//    a = b;
//    b = c;
//
//    cout << a << " " << b << endl;
//
//    return 0;
//}
