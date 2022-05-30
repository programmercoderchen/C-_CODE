//CPP15 打印乘法表
// 解法一
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
//解法二
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int n;
//    cin >> n;
//
//    //i表示乘法表行数.
//    for (int i = 1; i <= n; i++) {
//        //j表示乘法表列数
//        for (int j = 1; j <= i; j++) {
//            //按对应格式输出乘法表
//            cout << j << " * " << i << " = " << j * i << "    ";
//        }
//        //每打印完一行，进行换行
//        cout << endl;
//    }
//
//    return 0;
//}
//CPP16 规律数列求和
//#include <iostream>
//using namespace std;
////解法一
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
//解法二
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
//CPP17 计算小球走过的路程和反弹高度
//解法一
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//
//    // 下落的高度和落地的次数
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
//解法二
//#include <iostream>
//#include <iomanip>
//#include<math.h>
//using namespace std;
//
//int main() {
//
//    // 下落的高度和落地的次数
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
//    for (; i < n; i++)//循环小球落地次数
//    {
//
//        dd = h * (pow(0.5, i)) * 2;  //计算前次落地弹起的距离和当前这次落地距离之和，当作第二次往后单次落地的距离
//        hh = h * (pow(0.5, i)) * 0.5; //计算小球落地后弹起的距离
//        all_h += dd;//累计每次落地距离，（除第一次以外）
//    }
//    if (i == 1) //第一次落地，一共经过初始高度距离，也就是第一次传入距离，第二次往后计算落地需要经过的距离旧需要多计算一次小球弹起的距离
//        hh = h * (pow(0.5, 1));
//    all_h += h; //最后加上第一次落地的距离，可以计算出n次落地总共经历的距离
//    cout << fixed << setprecision(1) << all_h << " " << hh << endl;
//    return 0;
//}