//CPP57 创建二维动态数组
//解法一：使用new关键字创建新的空间进行存储

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
//解法二：使用二级指针
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

//解法三：使用vector函数进行创建空间
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