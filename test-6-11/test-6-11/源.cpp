//CPP31 比较字符串大小
//解法一：
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//int mystrcmp(const char* src, const char* dst);
//
//int main() {
//
//    char s1[100] = { 0 };
//    char s2[100] = { 0 };
//
//    cin.getline(s1, sizeof(s1));
//    cin.getline(s2, sizeof(s2));
//
//    int ret = mystrcmp(s1, s2);
//
//    cout << ret << endl;
//
//    return 0;
//}
//
//int mystrcmp(const char* src, const char* dst) {
//
//    // write your code here......
//    int a = strlen(src);
//    int b = strlen(dst);
//    int sum1 = 0, sum2 = 0;
//    for (int i = 0; i < a; i++)
//    {
//        sum1 = sum1 + (int)src[i];
//    }
//    for (int j = 0; j < b; j++)
//    {
//        sum2 = sum2 + (int)dst[j];
//    }
//    if (sum1 > sum2)
//        return 1;
//    else if (sum1 < sum2)
//        return -1;
//    else
//        return 0;
//}
//解法二：（使用指针）
//#include <iostream>
//using namespace std;
//
//int mystrcmp(const char* src, const char* dst);
//
//int main() {
//
//    char s1[100] = { 0 };
//    char s2[100] = { 0 };
//
//    cin.getline(s1, sizeof(s1));
//    cin.getline(s2, sizeof(s2));
//
//    int ret = mystrcmp(s1, s2);
//
//    cout << ret << endl;
//
//    return 0;
//}
//
//int mystrcmp(const char* src, const char* dst) {
//
//    // write your code here......
//    while ((*src) != '\0' && (*dst) != '\0') {
//        if ((*src) == (*dst)) {
//            src++;
//            dst++;
//        }
//        else if ((*src) > (*dst)) {
//            return 1;
//        }
//        else {
//            return -1;
//        }
//    }
//    if ((*src) != '\0' && (*dst) != '\0') return 0;
//    if ((*src) != '\0') return 1;
//    if ((*dst) != '\0') return -1;
//    return 0;
//}
//CPP32 编写函数实现两数交换（指针方式）
//解法一：
//#include <iostream>
//using namespace std;
//
//// write your code here......
//void swap(int* a, int* b)
//{
//    int str = 0;
//    str = *a;
//    *a = *b;
//    *b = str;
//}
//
//int main() {
//
//    int m, n;
//    cin >> m;
//    cin >> n;
//
//    // write your code here......
//    swap(m, n);
//
//    cout << m << " " << n << endl;
//
//    return 0;
//}
//解法二：（使用双指针）
//#include <iostream>
//using namespace std;
//
//// write your code here......
//
//
//int main() {
//
//    int m, n;
//    cin >> m;
//    cin >> n;
//
//    // write your code here......
//    int* q;
//    int* p;
//    q = &m;
//    p = &n;
//    int t = *q;
//    *q = *p;
//    *p = t;
//
//    cout << m << " " << n << endl;
//
//    return 0;
//}
