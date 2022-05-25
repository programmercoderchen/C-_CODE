//CPP7 获取三个数中的最大值（三元表达式实现）
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
//CPP8 计算商品打折结算金额
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
//CPP9 判断身材状态
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
    //    cout << "偏瘦" << endl;
    //}
    //if (bmi >= 18.5 && bmi < 20.9)
    //{
    //    cout << "苗条" << endl;
    //}
    //if (bmi >= 20.9 && bmi <= 24.9)
    //{
    //    cout << "适中" << endl;
    //}
    //if (bmi > 24.9)
    //{
    //    cout << "偏胖" << endl;
    //}
//    return 0;
//}
//CPP10 判断成绩等级
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
//        cout << "差" << endl;
//    }
//    if (score >= 60 && score < 70)
//    {
//        cout << "及格" << endl;
//    }
//    if (score >= 70 && score < 80)
//    {
//        cout << "中" << endl;
//    }
//    if (score >= 80 && score < 90)
//    {
//        cout << "良" << endl;
//    }
//    if (score >= 90 && score <= 100)
//    {
//        cout << "优秀" << endl;
//    }
//    if (score < 0 || score>100)
//    {
//        cout << "成绩不合法" << endl;
//    }
//    return 0;
//}
//CPP11 判断季节
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
//        cout << "春季" << endl;
//    }
//    if (month >= 6 && month <= 8)
//    {
//        cout << "夏季" << endl;
//    }
//    if (month >= 9 && month <= 11)
//    {
//        cout << "秋季" << endl;
//    }
//    if (month == 12 || month == 1 || month == 2)
//    {
//        cout << "冬季" << endl;
//    }
//    if (month < 1 || month>12)
//    {
//        cout << "不合法" << endl;
//    }
//    return 0;
//}
