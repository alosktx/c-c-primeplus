/*
 * @Author: tangxiao
 * @Date: 2022-10-17 09:19:37
 * @LastEditTime: 2022-10-17 09:23:48
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @description: 编写一个函数，接受一个int类型的参数，并返回该参数中打开位的数量。在一个程序中测试改该函数。
 */
#include <limits.h>
#include <stdio.h>

//int型整数值转换器为二进制字符串
char *itobs(int, char *);
//计算参数int中1的数量
int onbits(int);

int main(int argc, char *argv[]) {
    int val;
    char bstr[CHAR_BIT * sizeof(int) + 1];

    printf("Enter an integer (q to quit): ");
    while (scanf("%d", &val)) {
        printf("%d (%s) has %d bit(s) on.\n", val, itobs(val, bstr), onbits(val));
        printf("Next value: ");
    }

    puts("Done");
    return 0;
}

char *itobs(int n, char *ps) {
    int i;
    static int size = CHAR_BIT * sizeof(int);

    for (i = size - 1; i >= 0; i--, n >>= 1)
        ps[i] = (01 & n) + '0';
    ps[size] = '\0';

    return ps;
}

int onbits(int n) {
    static const int size = CHAR_BIT * sizeof(int);
    int ct = 0;
    int i;

    for (i = 0; i < size; i++, n >>= 1)
        if ((1 & n) == 1)
            ct++;
    return ct;
}