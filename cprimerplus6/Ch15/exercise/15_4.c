/*
 * @Author: tangxiao
 * @Date: 2022-10-17 09:27:21
 * @LastEditTime: 2022-10-17 09:47:41
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @description: 编写一个程序，接受两个int类型的参数: 一个是值; 一个是位的位置。如果该值指定位的位置为1, 该函数返回1; 否则返回0。 在一个程序中测试该函数。
 */
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>


// int型整数值转换器为二进制字符串
char *itobs(int, char *);
//计算参数int中指定位的是否打开
int onbits(int, int);

int main(int argc, char *argv[]) {
    int val, n;
    char bstr[CHAR_BIT * sizeof(int) + 1];

    printf("Enter an integer (q to quit): ");
    while (scanf("%d%d", &val, &n)) {
        if (n < 0 || n >= (CHAR_BIT * sizeof(int))) {
            fprintf(stderr, "Usage: n:%d id out of range\n", n);
            exit(EXIT_FAILURE);
        }
        printf("%d (%s) 's %d bit(s) is %d.\n", val, itobs(val, bstr), n, onbits(val, n));
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

int onbits(int val, int n) {
    static const int size = CHAR_BIT * sizeof(int);
    int i;
    for (i = 0; i < size; i++, val >>= 1)
        if (i == n && ((1 & val) == 1))
            return 1;
    return 0;
}