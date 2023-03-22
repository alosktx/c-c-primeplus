/*
 * @Author: tangxiao
 * @Date: 2022-10-17 08:59:11
 * @LastEditTime: 2022-10-17 09:16:14
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @description: 编写一个程序，通过命令行参数读取两个二进制字符串，对这两个二进制数使用 ~ 运算符，&运算符， |运算符 和 ^运算符，并以二进制字符串形式打印结果（如果无法使用命令行环境，可以通过交互式让程序读取字符串）
 */
#include <stdio.h>
#include <stdlib.h>

//01字符串转换为十进制数值
int bstr_to_dec(const char *str);
//int型整数值转换器为二进制字符串
char *itobs(int, char *);
int main(int argc, char *argv[]) {
    int v1;
    int v2;
    char bstr[8 * sizeof(int) + 1];

    //需要输入3个参数
    if (argc != 3) {
        fprintf(stderr, "Usage: %s binarynum1 binarynum2\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    v1 = bstr_to_dec(argv[1]);
    v2 = bstr_to_dec(argv[2]);

    printf("~%s = %s\n", argv[1], itobs(~v1, bstr));
    printf("~%s = %s\n", argv[2], itobs(~v2, bstr));
    printf("%s & %s= %s\n", argv[1], argv[2], itobs(v1 & v2, bstr));
    printf("%s | %s= %s\n", argv[1], argv[2], itobs(v1 | v2, bstr));
    printf("%s ^ %s= %s\n", argv[1], argv[2], itobs(v1 ^ v2, bstr));

    puts("Done");
    return 0;
}

int bstr_to_dec(const char *str) {
    int val = 0;

    while (*str != '\0')
        val = 2 * val + (*(str++) - '0');
    return val;
}

char *itobs(int n, char *ps) {
    int i;
    static int size = 8 * sizeof(int);

    for (i = size - 1; i >= 0; i--, n >>= 1)
        ps[i] = (01 & n) + '0';
    ps[size] = '\0';

    return ps;
}