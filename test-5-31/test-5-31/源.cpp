//CPP18 �ж�һ�����ǲ�������
//�ⷨһ
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    // write your code here......
//    int i;
//    cin >> i;
//    for (int j = 2; j < i; j++)
//    {
//        if (i % j == 0)
//        {
//            cout << "��������" << endl;
//            return 0;
//        }
//    }
//    cout << "������" << endl;
//    return 0;
//}
//�ⷨ��
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    bool flag = true;
//    for (int i = 2; i * i <= n; i++) { //����������n�Ϳ�����
//        if (n % i == 0) { //������������¼��������
//            flag = false;
//            break;
//        }
//    }
//    if (flag)
//        cout << "������" << endl;
//    else
//        cout << "��������" << endl;
//    return 0;
//}
