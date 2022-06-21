//#include <iostream>
//using namespace std;
//
//template <typename T>
//void sort(T a, T b, T c)
//{
//	int i = 0;
//	if (a > b)
//	{
//		i = a;
//		a = b;
//		b = i;
//	}
//	if (a > c)
//	{
//		i = a;
//		a = c;
//		c = i;
//	}
//	if (b > c)
//	{
//		i = b;
//		b = c;
//		c = i;
//	}
//}
//int main()
//{
//	int i1, i2, i3;
//	float f1, f2, f3;
//	char c1, c2, c3;
//	cout << "请输入三个数进行比较大小" << endl;
//	cin >> i1 >> i2 >> i3;
//	cin >> f1 >> f2 >> f3;
//	cin >> c1 >> c2 >> c3;
//	sort(i1, i2, i3);
//	sort(f1, f2, f3);
//	sort(c1, c2, c3);
//	cout << i1 << " " << i2 << " " << i3 << endl;
//	cout << f1 << " " << f2 << " " << f3 << endl;
//	cout << c1 << " " << c2 << " " << c3 << endl;
//	return 0;
//}
// 冒泡排序法
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
// 选择排序法
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
//        arr[i] = min; //更新该位置为后续最小
//    }
//    for (int i = 0; i < len; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    return 0;
//}
//1.求其数据的范围内的所有素数
//#include  <iostream>
//using namespace std;
//
//bool sort(int a, int b,int c)
//{
//	for (int j = 2; j*j <= c; j++)
//	{
//		if (c % j == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int main()
//{
//	int i,j;
//	cout << "请输入你要的数据范围：";
//	cin >> i >> j;
//	for (int x = i; i < j; x++)
//	{
//		if (sort(i, j,x))
//		{
//			cout << x << endl;
//		}
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//    int n, m, i, j, t = 0;//t用来累加换行
//
//    cin >> n;
//    while (n < 2)//n小于2时需重新输入
//        cin >> n;
//    bool prime;//定义bool变量
//    for (i = 2; i < n; i++)
//    {
//        prime = true;//先令prime为真
//
//        for (j = 2; j < i; j++)//对2到m进行循环
//        {
//            if (i % j == 0)//若i整除j为0，令prime为假，循环终止
//            {
//                prime = false;
//                break;
//            }
//        }
//        if (prime)//若prime为真，输出n
//        {
//            cout << i << " ";
//            t += 1;
//            if (t % 10 == 0)//若t整除10为0，再换一行输出
//                cout << endl;
//        }
//    }
//    return 0;
//}
//#include <iostream>
//#include <cmath>
//using namespace std;

//void main()
//{
//	int i, j, k,x;
//	cout << "请输入你要的数据范围：";
//	cin >> i >> j;
//	for (int a = i; a < j; a++) {                //这里从11到20的质数
//		k = (int)sqrt(a);
//		for (x = 2; x <= k; ++x) {
//			if (i % x == 0)
//				break;
//		}
//		if (x >= k + 1)
//			cout << a << endl;
//	}
//	return 0;
//}
//void main()
//{
//	int i, j, k;
//	for (i = 11; i < 20; i += 2) {                //这里从11到20的质数
//		k = (int)sqrt(i);
//		for (j = 2; j <= k; ++j) {
//			if (i % j == 0)
//				break;
//		}
//		if (j >= k + 1)
//			cout << i << endl;
//	}
//}
//真正实现一个范围内的质数
#include <iostream>
using namespace std;

int main()
{
    int i, j;
    bool key;
    cout << "请输入你要的数据范围：";
    cin >> i >> j;
    for (int a = i; a < j; a++)
    {
        key = true;
        for (int b = 2; b * b <= a; b++)
        {
            if (a % b == 0)
            {
                key = false;
                break;
            }
        }
        if (key)
        {
            cout << a << endl;
        }
    }
    return 0;
}
//输出非素数
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int i, j;
//    bool key;
//    cout << "请输入你要的数据范围：";
//    cin >> i >> j;
//    for (int a = i; a < j; a++)
//    {
//        key = true;
//        for (int b = 2; b * b <= a; b++)
//        {
//            if (a % b == 0)
//            {
//                key = false;
//                break;
//            }
//        }
//        if (key)
//        {
//            cout << a << endl;
//        }
//    }
//    return 0;
//}
//不死神兔问题
//解法一：（迭代法）
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int tmp = 0;
//	int x = 0;
//	cin >> x;
//	if (x <= 2)
//	{
//		tmp=1;
//	}
//	else
//	{
//		for (int y = 2; y < x; y++)
//		{
//			tmp = i + j;
//			i = j;
//			j = tmp;
//		}
//	}
//  cout<<tmp<<endl;
//	return 0;
//}
//解法二；（递归法）
//#include <iostream>
//using namespace std;
//
//int result(int a)
//{
//	if (a <= 2)
//		return 1;
//	else
//		return result(a - 1) + result(a - 2);
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	cin >> i;
//	j=result(i);
//	cout << j << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Pet
//{
//public:
//	Pet(int array[], int h, int l) :name(array[]), health(h), love(l) {}
//	virtual void playball() = 0;
//	virtual void eatfood() = 0;
//	virtual void flybowl() = 0;
//protected:
//	char* name;
//	int health;
//	int love;
//};
//class Dog :public Pet
//{
//	Dog(int array[],int h,int l,int s):Pet()
//};
//class Cat :public Pet
//{
//
//};
//int main()
//{
//	return 0;
//}