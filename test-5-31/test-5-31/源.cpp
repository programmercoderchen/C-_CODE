//CPP18 判断一个数是不是质数
//解法一
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
//            cout << "不是质数" << endl;
//            return 0;
//        }
//    }
//    cout << "是质数" << endl;
//    return 0;
//}
//解法二
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    bool flag = true;
//    for (int i = 2; i * i <= n; i++) { //遍历到根号n就可以了
//        if (n % i == 0) { //可以整除，记录不是质数
//            flag = false;
//            break;
//        }
//    }
//    if (flag)
//        cout << "是质数" << endl;
//    else
//        cout << "不是质数" << endl;
//    return 0;
//}
