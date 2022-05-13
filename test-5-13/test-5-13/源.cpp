//#include <iostream>
//#include <string.h>
//using namespace std;
//
////牛客网网页试题第一题：获取字符串长度
////解法一
//int main() {
//
//    char str[100] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    // write your code here......
//    int ret = strlen(str);
//    cout << ret;
//
//    return 0;
//}
//解法二
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//int main() {
//
//    char str[100] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    // write your code here......
//    cin >> str;
//    char* p = str;
//    int count = 0;
//    while (*p != '\0')
//    {
//        p++;
//        count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}
//牛客网网页试题第二题：牛牛的排序
//解法一：采用冒泡排序
//#include <iostream>
//using namespace std;
//
//void sort(int* array, int n)
//{
//    {
//        int i, j = 0;
//        for (i = 0; i < n - 1; i++)
//        {
//            for (j = 0; j < n - 1 - i; j++)
//            {
//                if (array[j] > array[j + 1])
//                {
//                    int tmp = array[j];
//                    array[j] = array[j + 1];
//                    array[j + 1] = tmp;
//                }
//            }
//        }
//        for (i = 0; i < n; i++)
//        {
//
//            printf("%d ", array[i]);
//        }
//    }
//}
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int arr[100] = { 0 };
//    cin >> i;
//    for (j = 0; j < i; j++)
//    {
//        cin >> arr[j];
//    }
//    sort(arr, i);
//    return 0;
//}
//解法二：递归调用
//#include<algorithm>
//#include<iostream>
//using namespace std;
//void quick_sort(int* s, int l, int r)
//{
//    if (l < r)
//    {
//        //Swap(s[l], s[(l + r) / 2]); //将中间的这个数和第一个数交换 参见注1
//        int i = l, j = r, x = s[l];
//        while (i < j)
//        {
//            while (i < j && s[j] >= x) // 从右向左找第一个小于x的数
//                j--;
//            if (i < j)
//            {
//                s[i] = s[j];
//                i++;
//            }
//            while (i < j && s[i] < x) // 从左向右找第一个大于等于x的数
//                i++;
//            if (i < j) {
//                s[j] = s[i];
//                j--;
//            }
//        }
//        s[i] = x;
//        quick_sort(s, l, i - 1); // 递归调用
//        quick_sort(s, i + 1, r);
//    }
//}
//int main()
//{
//    int n, i, t = 0;
//    cin >> n;
//    int a[n];
//    for (i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    quick_sort(a, 1, n);
//    for (i = 1; i <= n; i++)
//    {
//        cout << a[i] << " ";
//    }
//    return 0;
//}
//解法三：连续调用两个函数进行求解
//#include<stdio.h>
//#include<string.h>
//void exchange(int* a, int* b)
//{
//    int c = *a;
//    *a = *b;
//    *b = c;
//}
//
//void select_sort(int* array, int n)
//{
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    for (; i < n; ++i)
//    {
//        k = i;
//        for (j = i; j < n; ++j)
//        {
//            if (*(array + j) < *(array + k))
//            {
//                k = j;
//            }
//        }
//        exchange(&array[i], &array[k]);
//        printf("%d ", array[i]);
//    }
//}
//
//int main()
//{
//    int n = 0;
//    int array[100] = { 0 };
//    int i = 0;
//    scanf_s("%d", &n);
//    int s=getchar();
//    for (; i < n; ++i)
//    {
//        scanf_s("%d", &array[i]);
//    }
//    select_sort(array, n);
//    return 0;
//}