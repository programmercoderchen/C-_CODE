//#include <iostream>
//using namespace std;
//
////1.重载min用法
////当传入两个整数，输出最小值
////当传入三个整数，输出最小值
////传入数组，输出最小值
//int min(int a,int b)
//{
//	if (a < b)
//	{
//		return a;
//	}
//	else
//		return b;
//}
//int min(int a, int b,int c)
//{
//	if (a < b && a < c)
//	{
//		return a;
//	}
//	if (b < a && b < c)
//	{
//		return b;
//	}
//	if (c < b && c < a)
//	{
//		return c;
//	}
//}
//int min(int array[],int len)
//{
//	int Min = array[0];
//	for (int a = 0; a < len; a++)
//	{
//		if (Min > array[a])
//		{
//			Min = array[a];
//		}
//	}
//	return Min;
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int i, j, k, l;
//	int q, m, n;
//	cin >> i >> j >> k;
//	cout << "请输入对应的数组元素个数：" << endl;
//	cin >> l;
//	for (int x = 0; x < l; x++)
//	{
//		cin >> arr[x];
//	}
//	q=min(i, j);
//	m=min(i, j, k);
//	n=min(arr,l);
//	cout << q << " " << m << " " << n << endl;
//	return 0;
//}
//求素数(100-999)
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
//#include <iostream>
//using namespace std;
//
////判断是否是质数
//bool isPrime(int x) {
//    for (int i = 2; i * i <= x; i++) {
//        //如果一个数能被2到根号x之间的任意一个数整除，则不是质数
//        if (x % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//
//    int num;
//    cin >> num;
//    if (isPrime(num)) {
//        cout << "是质数" << endl;
//    }
//    else {
//        cout << "不是质数" << endl;
//    }
//
//    return 0;
//}
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int sort_num(int a)
//{
//	for (int j = 2; j*j <= a; j++)
//	{
//		if (a % j == 0)
//			return 0;
//	}
//	return a;
//}
//int main()
//{
//	for (int i = 100; i < 1000 ; i++)
//	{
//		if (sort_num(i) == 0)
//		else
//			cout << sort_num(i);
//	}
//	return 0;
//}
//不死神兔
#include <iostream>
using namespace std;

//int getSum(int c)
//{
//	int a = 1;
//	int b = 1;
//	int tmp = 0;
//	if (c <= 2)
//		return 1;
//	for (int i = 3; i <= c; i++)
//	{
//		tmp = a + b;
//		b = a;
//		a = tmp;
//	}
//	return tmp;
//		
//}迭代法
//int getSum(int c)
//{
//	if (c == 1 || c == 2)
//	{
//		return 1;
//	}
//	return getSum(c - 1) + getSum(c - 2);
//}
//int main()
//{
//	int i = 0;
//	cin >> i;
//	cout << getSum(i) << endl; //输出结果
//	return 0;
//}
//递归法
