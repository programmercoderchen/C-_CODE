//CPP7 ��ȡ�������е����ֵ����Ԫ���ʽʵ�֣�
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int a, b, c;
//    cin >> a;
//    cin >> b;
//    cin >> c;
//    if (a > b && a > c)
//    {
//        cout << a << endl;
//    }
//    if (b > a && b > c)
//    {
//        cout << b << endl;
//    }
//    if (c >= a && c >= b)
//    {
//        cout << c << endl;
//    }
//    // write your code here......
//
//    return 0;
//}
//CPP8 ������Ʒ���۽�����
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//
//    double price;
//    cin >> price;
//
//    double cost = 0.0;
//
//    // write your code here.......
//    if (price >= 100 && price < 500)
//    {
//        cout << price * 0.9 << endl;
//    }
//    if (price >= 500 && price < 2000)
//    {
//        cout << price * 0.8 << endl;
//    }
//    if (price >= 2000 && price < 5000)
//    {
//        cout << price * 0.7 << endl;
//    }
//    if (price >= 5000)
//    {
//        cout << price * 0.6 << endl;
//    }
//
//    return 0;
//}
//CPP9 �ж����״̬
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    double weight;
//    double height;
//    double bmi;
//    cin >> weight;
//    cin >> height;
//
//    // write your code here......
//    bmi = weight / (height * height);
    //if (bmi < 18.5)
    //{
    //    cout << "ƫ��" << endl;
    //}
    //if (bmi >= 18.5 && bmi < 20.9)
    //{
    //    cout << "����" << endl;
    //}
    //if (bmi >= 20.9 && bmi <= 24.9)
    //{
    //    cout << "����" << endl;
    //}
    //if (bmi > 24.9)
    //{
    //    cout << "ƫ��" << endl;
    //}
//    return 0;
//}
//CPP10 �жϳɼ��ȼ�
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int score;
//    cin >> score;
//
//    // write your code here......
//    if (score < 60 && score>0)
//    {
//        cout << "��" << endl;
//    }
//    if (score >= 60 && score < 70)
//    {
//        cout << "����" << endl;
//    }
//    if (score >= 70 && score < 80)
//    {
//        cout << "��" << endl;
//    }
//    if (score >= 80 && score < 90)
//    {
//        cout << "��" << endl;
//    }
//    if (score >= 90 && score <= 100)
//    {
//        cout << "����" << endl;
//    }
//    if (score < 0 || score>100)
//    {
//        cout << "�ɼ����Ϸ�" << endl;
//    }
//    return 0;
//}
//CPP11 �жϼ���
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int month;
//    cin >> month;
//
//    // write your code here......
//    if (month <= 5 && month >= 3)
//    {
//        cout << "����" << endl;
//    }
//    if (month >= 6 && month <= 8)
//    {
//        cout << "�ļ�" << endl;
//    }
//    if (month >= 9 && month <= 11)
//    {
//        cout << "�＾" << endl;
//    }
//    if (month == 12 || month == 1 || month == 2)
//    {
//        cout << "����" << endl;
//    }
//    if (month < 1 || month>12)
//    {
//        cout << "���Ϸ�" << endl;
//    }
//    return 0;
//}
