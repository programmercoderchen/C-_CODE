//CPP19 获取数组最值
// 解法一：
//#include <iostream>
//using namespace std;
//
//int sortmin(int arr[], int a)
//{
//    int min = arr[0];
//    for (int i=0; i < a; i++)
//    {
//        if (min > arr[i])
//        {
//            min = arr[i];
//        }
//    }
//    return min;
//}
//int sortmax(int arr[], int a)
//{
//    int max = arr[0];
//    for (int i=0; i < a; i++)
//    {
//        if (max < arr[i])
//        {
//            max = arr[i];
//        }
//    }
//    return max;
//}
//int main() {
//
//    int arr[6] = { 0 };
//    int len = sizeof(arr) / sizeof(int);
//
//    for (int i = 0; i < len; i++) {
//        cin >> arr[i];
//    }
//
//    // write your co9de here......
//    int i = sortmin(arr, len);
//    int j = sortmax(arr, len);
//    cout << i << " " << j << endl;
//    return 0;
//}
//解法二：（必会知识点，使用冒泡排序法进行排序）
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
//    for (int i = 1; i < len; i++)
//    {
//        for (int j = 0; j < len - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tam = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tam;
//            }
//        }
//    }
//    cout << arr[0] << " " << arr[5] << endl;
//}
//解法三：（使用三目操作符用于两两比较）
//缺点是无法实现太多数字之间的比较
//优点是不需要用到循环
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
//    int a = arr[0] > arr[1] ? arr[0] : arr[1];
//    int b = arr[2] > arr[3] ? arr[2] : arr[3];
//    int c = arr[4] > arr[5] ? arr[4] : arr[5];
//    int d = a > b ? a : b;
//    int max = d > c ? d : c;
//    int e = arr[0] < arr[1] ? arr[0] : arr[1];
//    int f = arr[2] < arr[3] ? arr[2] : arr[3];
//    int g = arr[4] < arr[5] ? arr[4] : arr[5];
//    int m = e < f ? e : f;
//    int min = m < g ? m : g;
//    cout << min << " " << max;
//
//    return 0;
//}
//CPP20 数组元素反转
//描述：键盘随机输入 6 个整数，将这些数据保存到数组中，先将数组中元素按
//照格式输出，然后再将数组元素反转，最后按照格式再次输出数组元素。
// 解法一：
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int arr[6] = { 0 };
//
//    int len = sizeof(arr) / sizeof(int);
//
//    for (int i = 0; i < len; i++) {
//        cin >> arr[i];
//    }
//
//    cout << "[";
//    for (int i = 0; i < len; i++) {
//        if (i == len - 1) {
//            cout << arr[i] << "]" << endl;
//            break;
//        }
//        cout << arr[i] << ", ";
//    }
//
//    // write your code here......
//    //在这里实现数组元素的反转
//    for (int i = 0; i < len / 2; i++)
//    {
//        int j = arr[i];
//        arr[i] = arr[len - i - 1];
//        arr[len - i - 1] = j;
//    }
//
//    cout << "[";
//    for (int i = 0; i < len; i++) {
//        if (i == len - 1) {
//            cout << arr[i] << "]" << endl;
//            break;
//        }
//        cout << arr[i] << ", ";
//    }
//
//    return 0;
//}
//解法二：（倒序实现）
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int arr[6] = { 0 };
//
//    int len = sizeof(arr) / sizeof(int);
//
//    for (int i = 0; i < len; i++) {
//        cin >> arr[i];
//    }
//
//    cout << "[";
//    for (int i = 0; i < len; i++) {
//        if (i == len - 1) {
//            cout << arr[i] << "]" << endl;
//            break;
//        }
//        cout << arr[i] << ", ";
//    }
//
//    //**倒序：**
//        for (int i = 0, j = len - 1; i <= j; i++, j--) {
//            int tem = arr[i];
//            arr[i] = arr[j];
//            arr[j] = tem;
//        }
//
//
//    cout << "[";
//    for (int i = 0; i < len; i++) {
//        if (i == len - 1) {
//            cout << arr[i] << "]" << endl;
//            break;
//        }
//        cout << arr[i] << ", ";
//    }
//
//    return 0;
//}
//解法三：使用一个辅助数组来进行更换
//解法四：使用双指针进行替换
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int arr[6] = { 0 };
//
//    int len = sizeof(arr) / sizeof(int);
//
//    for (int i = 0; i < len; i++) {
//        cin >> arr[i];
//    }
//
//    cout << "[";
//    for (int i = 0; i < len; i++) {
//        if (i == len - 1) {
//            cout << arr[i] << "]" << endl;
//            break;
//        }
//        cout << arr[i] << ", ";
//    }
//
////     int copy_arr[6] = { 0 };
////     for(int i =len-1;i>=0;i--)
////     {
////         copy_arr[len-i-1]=arr[i];
////     }
//
//
//    int temp;
//    //指向首尾的双指针
//    int left = 0;
//    int right = 5;
//    while (left < right)
//    {
//        //对首尾的指针进行移动
//        temp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = temp;
//        left++;
//        right--;
//    }
//
//    cout << "[";
//    for (int i = 0; i < len; i++) {
//        if (i == len - 1) {
//            cout << arr[i] << "]" << endl;
//            break;
//        }
//        cout << arr[i] << ", ";
//    }
//
//    return 0;
//}
//CPP21 C++冒泡排序
//键盘随机输入 6 个整数，将这些数据保存到数组中，使用冒泡排序对
//数组中的元素进行从小到大顺序排序，输出排序后数组中的元素（元素之间使用空格隔开）。
//解法一：
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
//解法二：使用专门的库函数进行交换
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
//    for (int i = 0; i < len - 1; i++) {
//        //第i趟比较
//        for (int j = 0; j < len - i - 1; j++) {
//            //开始进行比较，如果arr[j]比arr[j+1]的值大，那就交换位置
//            if (arr[j] > arr[j + 1]) {
//                swap(arr[j], arr[j + 1]);
//            }
//        }
//    }
//    for (int i = 0; i < len; i++) //输出
//        cout << arr[i] << " ";
//    return 0;
//}
/*冒泡排序法的基本原理就是比较相邻元素，不断将较大的元素交换到
右边。对于长度为n的数组，一共排序n−1趟，每一趟都比较相
邻元素，将较小的交换到前面较大的交换到后面，于是较大的元素沉到
最后，较小的元素不断往前冒。而且因为每趟最大的元素会沉到最后，
因此每次最大的元素就相当于排好了位置，因此每趟排序长度就会随着
趟数减1，不用再排上一趟排好的最末元素。*/
//CPP22 C++选择排序
//键盘随机输入 6 个整数，将这些数据保存到数组中，使用选择排序对
//数组中的元素进行从小到大顺序排序，输出排序后数组中的元素（元
//素之间使用空格隔开）。
//解法一
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
//        for (int j = i + 1; j < len; j++)//注意此时的循环条件
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
//解法二（使用库函数进行交换）
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
//    for (int i = 0; i < len; i++) {
//        int min = arr[i]; //准备一个最小数
//        for (int j = i + 1; j < len; j++) { //遍历后续找到最小值
//            if (arr[j] < min)
//                swap(min, arr[j]);
//        }
//        arr[i] = min; //更新该位置为后续最小
//    }
//    for (int i = 0; i < len; i++) //输出
//        cout << arr[i] << " ";
//    return 0;
//}
/*选择排序就是从数组最开始的位置开始，每次选出后续最小的元素放
在那里，然后进入下一位，继续选后续最小，直到数组结束，这样就能
排出从小到大的次序。*/
//CPP23 计算公司年销售额
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int arr[4][3] = {
//        // write your code here......
//        22,66,44,
//        77,33,88,
//        25,45,65,
//        11,66,99
//    };
//
//    int sum = 0;
//
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 3; j++) {
//            sum += arr[i][j];
//        }
//    }
//
//    cout << sum << endl;
//
//    return 0;
//}
//CPP24 字符串拼接
// 解法一：
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//
//    string s1, s2;
//    getline(cin, s1);
//    getline(cin, s2);
//
//    // write your code here......
//    s1 += s2;
//    cout << s1 << endl;
//
//    return 0;
//}
//解法二：
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//
//    string s1, s2;
//    getline(cin, s1);
//    getline(cin, s2);
//
//    // write your code here......
//    cout << s1 << s2 << endl;
//
//    return 0;
//}
//解法三：（使用库函数）
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//
//    string s1, s2;
//    getline(cin, s1);
//    getline(cin, s2);
//
//    // write your code here......
//    cout << s1.append(s2) << endl;
//
//    return 0;
//}
//CPP56 字符的个数
//描述：输入一个只包含'a', 'b', 'c'的字符串，问'a', 'b', 'c'分
//别出现了多少次。
//解法一：
//#include<iostream>
//#include <string>
//using namespace std;
//int main() {
//    string s;
//    cin >> s;
//    // write your code here......
//    int count1 = 0, count2 = 0, count3 = 0;
//    int i = s.length();
//    for (int j = 0; j < i; j++)
//    {
//        if (s[j] == 'a')
//        {
//            count1++;
//        }
//        if (s[j] == 'b')
//        {
//            count2++;
//        }
//        if (s[j] == 'c')
//        {
//            count3++;
//        }
//    }
//    cout << count1 << " " << count2 << " " << count3 << endl;
//    return 0;
//}
//解法二：
//#include<iostream>
//#include <string>
//using namespace std;
//int main() {
//    string s;
//    cin >> s;
//    // write your code here......
//    int count1 = 0, count2 = 0, count3 = 0;
//    int i = s.size();
//    for (int j = 0; j < i; j++)
//    {
//        if (s[j] == 'a')
//        {
//            count1++;
//        }
//        if (s[j] == 'b')
//        {
//            count2++;
//        }
//        if (s[j] == 'c')
//        {
//            count3++;
//        }
//    }
//    cout << count1 << " " << count2 << " " << count3 << endl;
//    return 0;
//}
//CPP25 结构体简单使用
/*描述：设计一个学生结构体，该结构体具有三个成员，分别是：姓名
name、年龄age、身高height。键盘依次输入姓名、年龄和身高数据，
将数据保存到学生结构体变量上，并输出学生信息。*/
//#include <iostream>
//#include <string>
//using namespace std;
//
//struct student {
//    // write your code here......
//    string name;
//    int age;
//    double height;
//};
//
//int main() {
//
//    // write your code here......
//    student s;
//    cin >> s.name >> s.age >> s.height;
//    cout << s.name << " " << s.age << " " << s.height << endl;
//
//    return 0;
//}
//CPP26 利用指针遍历数组
//描述：键盘随机输入 6 个整数，将这些数据保存到数组中，利用
//指针遍历数组中的元素并打印。
// 解法一：
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int arr[6] = { 0 };
//    int* ptr = arr;
//
//    int len = sizeof(arr) / sizeof(int);
//
//    for (int i = 0; i < len; i++) {
//        cin >> arr[i];
//    }
//
//    // write your code here......
//    for (int i = 0; i < len; i++)
//    {
//        cout << *ptr << " ";
//        ptr++;
//    }
//
//    return 0;
//}
//解法二：c语言实现，使用了常量nullptr
//#include<stdio.h>
//int main()
//{
//    int a[6]={0};
//    int n=sizeof(a)/sizeof(int);
//    int i;
//    int *ps=a;
//    for(i=0;i<n;i++)
//    {
//        scanf_s("%d",&a[i]);
//    }
//    for(i=0;i<n;i++)
//    {
//        if(ps==nullptr)
//        {
//        printf("%d",*ps);
//        break;
//        }
//        printf("%d ",*ps);
//        ps++;
//    }
//    return 0;
//}
//CPP28 复制部分字符串
/*描述：键盘输入一个长度为len（1 <= len < 30）的字符串，再输入一个正
整数 m（1 <= m <= len），将此字符串中从第 m 个字符开始的剩余全
部字符复制成为另一个字符串，并将这个新字符串输出。要求用指针处
理字符串。*/
//解法一：
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    char str[30] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    int m;
//    cin >> m;
//
//    // write your code here......
//    char* ptr = NULL;
//    ptr = &str[m - 1];
//    cout << ptr;
//    return 0;
//}
//解法二
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    char str[30] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    int m;
//    cin >> m;
//
//    // write your code here......
//    char s[30] = { 0 };
//    int len = 0;
//    while (str[m - 1] != '\0') {
//        s[len++] = str[m - 1];
//        m++;
//    }
//    s[len] = '\0';
//    cout << s << endl;
//    return 0;
//}
//解法三：使用双指针
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    char str[30] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    int m;
//    cin >> m;
//
//    // write your code here......
//    char s[30] = { 0 };
//    char* q = str;
//    char* p = s;
//    for (int i = 0; i < m - 1; i++) {
//        q++;
//    }
//    while ((*q) != '\0') {
//        *p = *q;
//        p++;
//        q++;
//    }
//    *p = '\0';
//    cout << s << endl;
//    return 0;
//}
//CPP29 创建动态数组
//描述：键盘输入一个正整数 n，创建大小为 n 的数组（采用动态数组
//的方式），将数组中的元素初始化为 n、n+1、...、2n - 1。并输出
//数组中的元素。
// 解法一：
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int n;
//    cin >> n;
//
//    // write your code here......
//    int* my_sz = new int[n]();
//    for (int i = 0; i < n; i++)
//    {
//        my_sz[i] = n + i;
//    }
//    for (int i = 0; i < n; i++)
//    {
//        cout << my_sz[i] << " ";
//    }
//
//    delete[] my_sz;
//    return 0;
//}
//解法二：使用c语言代码
//#include<vector>
//using namespace std;
//
//int main() {
//
//    int n;
//    scanf_s("%d", &n);
//    vector<int> result;
//    int i;
//    for (i = n; i <= 2 * n - 1; i += 1) {
//        result.push_back(i);
//    }
//
//    for (i = n; i <= 2 * n - 2; i += 1) {
//        printf("%d ", result[i - n]);
//    }
//    printf("%d\n", result[i - n]);
//    // write your code here......
//
//
//    return 0;
//}
//CPP30 数组元素处理
//描述：有一个数组 int arr[n]，要求写一个函数：void func(int *p, int n);
//将数组 arr 中为 0 的元素都移至数组末尾，将非 0 的元素移至开始（保持原来的顺序不变）。
//解法一：
//#include <iostream>
//using namespace std;
//
//void func(int* p, int n);
//
//int main() {
//
//    int arr[6] = { 0 };
//    for (int i = 0; i < 6; i++) {
//        cin >> arr[i];
//    }
//
//    func(arr, 6);
//
//    for (int i = 0; i < 6; i++) {
//        if (i == 5) {
//            cout << arr[i] << endl;
//        }
//        else {
//            cout << arr[i] << " ";
//        }
//    }
//
//    return 0;
//}
//
//void func(int* p, int n) {
//
//    // write your code here......
//    for (int i = 0; i < n; i++) {
//        for (int j = i; j < n - i - 1; j++) {
//            if (p[j] == 0) {
//                int swap = p[j];
//                p[j] = p[j + 1];
//                p[j + 1] = swap;
//            }
//        }
//    }
//
//}