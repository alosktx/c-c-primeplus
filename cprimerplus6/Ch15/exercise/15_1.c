/*
 * @Author: tangxiao
 * @Date: 2022-10-17 08:03:53
 * @LastEditTime: 2022-10-17 09:09:13
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @description: 编写一个函数，把二进制字符串转换为一个数值。例如，有下面的语句: char* pbin = "01001001"， 那么把pbin作为参数传递给该函数后，它应该返回一个int
 * 类型的值25。
 */
#include <limits.h>   // for CHAR_BIT
#include <stdbool.h>  // C99 -- otherwise use int
#include <stdio.h>
#include <string.h>  // for strchr()

//01字符串转换为十进制数值
int bstr_to_dec(const char* str);
//检查是否有输入0，1之外的其他字符
bool check_val(const char* str);
//获取输入的字符串
char* s_gets(char* st, int n);
int main(void) {
    const size_t SLEN = CHAR_BIT * sizeof(int) + 1;
    char value[SLEN];

    printf("Enter a binary number with up to %zu digits: ", SLEN - 1);

    while (s_gets(value, SLEN) && value[0] != '\0') {
        if (!check_val(value))
            puts("A binary number contains just 0s and 1s.");
        else
            printf("%s is %d\n", value, bstr_to_dec(value));
        puts("Enter next value (empty line to quit):");
    }

    puts("Done");
    return 0;
}

int bstr_to_dec(const char* str) {
    int val = 0;

    while (*str != '\0')
        val = 2 * val + (*(str++) - '0');
    return val;
}

bool check_val(const char* str) {
    bool valid = true;

    while (valid && *str != '\0') {
        if (*str != '0' && *str != '1')
            valid = false;
        ++str;
    }

    return valid;
}

char* s_gets(char* st, int n) {
    char* ret_val;
    char* find;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n');  // look for newline
        if (find)                 // if the address is not NULL,
            *find = '\0';         // place a null character there
        else
            while (getchar() != '\n')
                continue;  // dispose of rest of line
    }
    return ret_val;
}
