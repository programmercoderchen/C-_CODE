//CPP12 �� 1 - n ֮��ż���ĺ�
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int n;
//    int i;
//    cin >> n;
//    int sum = 0;
//
//    // write your code here......
//    for (i = 0; i <= n; i += 2)
//    {
//        sum += i;
//    }
//    cout << sum << endl;
//
//    return 0;
//}
//CPP13 ����һ�����Ľ׳�
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int n;
//    int i;
//    cin >> n;
//    long long factorial = 1;
//
//    // write your code here......
//    for (i = 1; i <= n; i++)
//    {
//        factorial *= i;
//    }
//    cout << factorial << endl;
//
//    return 0;
//}
//CPP14 ���ˮ�ɻ���
// �ⷨһ
//#include <iostream>
//using namespace std;
//bool Nacissistic(int num) {
//    //Ѫ���ѵ num�Ǳ��� ��Ҫ�ٶ���һ����������ԭ��ֵ�����ж�
//    int t = num;
//    int a = num % 10;
//    num /= 10;
//    int b = num % 10;
//    num /= 10;
//    int c = num % 10;
//
//    if (t == a * a * a + b * b * b + c * c * c)
//        return true;
//    else
//        return false;
//}
//int main() {
//    int num;
//    for (num = 100; num <= 999; num++) {
//        if (Nacissistic(num)) {
//            cout << num << endl;
//        }
//    }
//    return 0;
//
//}
//�ⷨ��
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    // write your code here......
//    int a, b, c;
//    for (int i = 100; i < 1000; i++)
//    {
//        a = i % 100 % 10;
//        b = i % 100 / 10;
//        c = i / 100;
//        if (a * a * a + b * b * b + c * c * c == i)
//        {
//            cout << i << endl;
//        }
//    }
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    // write your code here......
//    int a, b, c;
//    for (int i = 100; i < 1000; i++) 
//    {
//        int t=i;
//        a = i % 10;
//        i/=10;
//        b = i % 10;
//        i/=10;
//        c = i % 10;
//        if (a * a * a + b * b * b + c * c * c == t) 
//        {
//            cout << t << endl;
//        }
//    }
//    return 0;
//}
// �ⷨ��
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    // write your code here......
//    int i;
//    int a, b, c;
//    for (i = 100; i < 1000; i++)
//    {
//        a = i % 10;
//        b = (i / 10) % 10;
//        c = (i / 100) % 10;
//        if (a * a * a + b * b * b + c * c * c == i)
//        {
//            cout << i << endl;
//        }
//    }
//
//    return 0;
//}
//CPP15 ��ӡ�˷���
