//#include <iostream>
//#include <string.h>
//using namespace std;
//
////ţ������ҳ�����һ�⣺��ȡ�ַ�������
////�ⷨһ
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
//�ⷨ��
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
//ţ������ҳ����ڶ��⣺ţţ������
//�ⷨһ������ð������
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
//�ⷨ�����ݹ����
//#include<algorithm>
//#include<iostream>
//using namespace std;
//void quick_sort(int* s, int l, int r)
//{
//    if (l < r)
//    {
//        //Swap(s[l], s[(l + r) / 2]); //���м��������͵�һ�������� �μ�ע1
//        int i = l, j = r, x = s[l];
//        while (i < j)
//        {
//            while (i < j && s[j] >= x) // ���������ҵ�һ��С��x����
//                j--;
//            if (i < j)
//            {
//                s[i] = s[j];
//                i++;
//            }
//            while (i < j && s[i] < x) // ���������ҵ�һ�����ڵ���x����
//                i++;
//            if (i < j) {
//                s[j] = s[i];
//                j--;
//            }
//        }
//        s[i] = x;
//        quick_sort(s, l, i - 1); // �ݹ����
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
//�ⷨ���������������������������
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