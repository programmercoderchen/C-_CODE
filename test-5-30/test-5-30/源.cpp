//CPP15 ��ӡ�˷���
// �ⷨһ
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int n;
//    int i, j;
//    cin >> n;
//
//    // write your code here......
//    for (j = 1; j <= n; j++)
//    {
//        for (i = 1; i <= j; i++)
//        {
//            cout << i << "*" << j << "=" << i * j;
//            if (i == j)
//            {
//                cout << endl;
//            }
//            else
//            {
//                cout << "    ";
//            }
//        }
//    }
//
//    return 0;
//
//�ⷨ��
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int n;
//    cin >> n;
//
//    //i��ʾ�˷�������.
//    for (int i = 1; i <= n; i++) {
//        //j��ʾ�˷�������
//        for (int j = 1; j <= i; j++) {
//            //����Ӧ��ʽ����˷���
//            cout << j << " * " << i << " = " << j * i << "    ";
//        }
//        //ÿ��ӡ��һ�У����л���
//        cout << endl;
//    }
//
//    return 0;
//}
//CPP16 �����������
//#include <iostream>
//using namespace std;
////�ⷨһ
//int main() {
//
//    // write your code here......
//    int i = 0;
//    long long a = 0;
//    long long b = 0;
//    for (i = 0; i < 10; i++)
//    {
//        a = a * 10 + 9;
//        b += a;
//    }
//    cout << b << endl;
//    return 0;
//}
//�ⷨ��
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int main() {
//
//    // write your code here......
//    long int i = atol(string(10, '1').c_str());
//    cout << i * 10 - 10;
//
//    return 0;
//}
//CPP17 ����С���߹���·�̺ͷ����߶�
//�ⷨһ
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//
//    // ����ĸ߶Ⱥ���صĴ���
//    double h;
//    int n;
//
//    cin >> h;
//    cin >> n;
//
//    // write your code here......
//    double sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += h;
//        if (i > 0) sum += h;
//        h /= 2.0;
//    }
//    cout << fixed << setprecision(1) << sum << " " << setprecision(1) << h << endl;
//    return 0;
//}
//�ⷨ��
//#include <iostream>
//#include <iomanip>
//#include<math.h>
//using namespace std;
//
//int main() {
//
//    // ����ĸ߶Ⱥ���صĴ���
//    double h;
//    int n;
//
//    cin >> h;
//    cin >> n;
//
//    // write your code here......
//    double all_h = 0;
//    double hh = 0;
//    double  dd = 0;
//    int i = 1;
//    for (; i < n; i++)//ѭ��С����ش���
//    {
//
//        dd = h * (pow(0.5, i)) * 2;  //����ǰ����ص���ľ���͵�ǰ�����ؾ���֮�ͣ������ڶ������󵥴���صľ���
//        hh = h * (pow(0.5, i)) * 0.5; //����С����غ���ľ���
//        all_h += dd;//�ۼ�ÿ����ؾ��룬������һ�����⣩
//    }
//    if (i == 1) //��һ����أ�һ��������ʼ�߶Ⱦ��룬Ҳ���ǵ�һ�δ�����룬�ڶ���������������Ҫ�����ľ������Ҫ�����һ��С����ľ���
//        hh = h * (pow(0.5, 1));
//    all_h += h; //�����ϵ�һ����صľ��룬���Լ����n������ܹ������ľ���
//    cout << fixed << setprecision(1) << all_h << " " << hh << endl;
//    return 0;
//}