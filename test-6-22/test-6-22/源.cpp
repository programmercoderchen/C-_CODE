//CPP14 ���ˮ�ɻ���
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
//CPP21 C++ð������
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int arr[6] = { 0 };
//    int len = sizeof(arr) / sizeof(int);
//
//    for (int i = 0; i < len; i++) {
//        cin >> arr[i];
//    }
//
//    // write your code here......
//    for (int i = 0; i < len; i++)
//    {
//        for (int j = 0; j < len - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//    for (int a = 0; a < len; a++)
//    {
//        cout << arr[a] << " ";
//    }
//    return 0;
//}
//CPP22 C++ѡ������
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int arr[6] = { 0 };
//    int len = sizeof(arr) / sizeof(int);
//
//    for (int i = 0; i < len; i++) {
//        cin >> arr[i];
//    }
//
//    // write your code here......
//    for (int i = 0; i < len; i++)
//    {
//        int min = arr[i];
//        for (int j = i + 1; j < len; j++)
//        {
//            if (arr[j] < min)
//            {
//                int swap = 0;
//                swap = min;
//                min = arr[j];
//                arr[j] = swap;
//            }
//        }
//        arr[i] = min; //���¸�λ��Ϊ������С
//    }
//    for (int i = 0; i < len; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    return 0;
//}
// CPP36 ������������
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
//CPP58 ��д����ʵ���ַ�����ת�����÷�ʽ��
//#include<iostream>
//#include<string>
//using namespace std;
//// write your code here......
//void reverse_string(string& s)
//{
//    int len = s.length();
//    for (int i = 0; i < len / 2; i++)//�Գƽ���
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
