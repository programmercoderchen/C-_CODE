//CPP31 比较字符串大小
#include <iostream>
using namespace std;

int mystrcmp(const char* src, const char* dst);

int main() {

    char s1[100] = { 0 };
    char s2[100] = { 0 };

    cin.getline(s1, sizeof(s1));
    cin.getline(s2, sizeof(s2));

    int ret = mystrcmp(s1, s2);

    cout << ret << endl;

    return 0;
}

int mystrcmp(const char* src, const char* dst) {

    // write your code here......
    while ((*src) != '\0' && (*dst) != '\0') {
        if ((*src) == (*dst)) {
            src++;
            dst++;
        }
        else if ((*src) > (*dst)) {
            return 1;
        }
        else {
            return -1;
        }
    }
    if ((*src) != '\0' && (*dst) != '\0') return 0;
    if ((*src) != '\0') return 1;
    if ((*dst) != '\0') return -1;
    return 0;
}