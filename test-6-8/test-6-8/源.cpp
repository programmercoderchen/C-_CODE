//CPP57 ������ά��̬����
//�ⷨһ��ʹ��new�ؼ��ִ����µĿռ���д洢

//#include<iostream>
//using namespace std;
//int main() {
//    int n;
//    cin >> n;
//    // write your code here......
//    int* p = new int[n * n];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            p[i + j] = i + j;
//            cout << p[i + j] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}
//�ⷨ����ʹ�ö���ָ��
//#include<iostream>
//using namespace std;
//int main() {
//    int n;
//    cin >> n;
//     write your code here......
//    int** p = new int* [n];
//    for (int i = 0; i < n; i++) {
//        *(p + i) = new int[n];
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            *(*(p + i) + j) = i + j;
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cout << *(*(p + i) + j) << ' ';
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

//�ⷨ����ʹ��vector�������д����ռ�
//#include<iostream>
//using namespace std;
//int main() {
//    int n;
//    cin >> n;
//    // write your code here......
//    vector<vector<int> > a(n, vector<int>(n));
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            a[i][j] = i + j;
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cout << a[i][j] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}