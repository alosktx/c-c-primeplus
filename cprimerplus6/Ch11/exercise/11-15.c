/*
 * @Author: tangxiao
 * @Date: 2022-11-24 16:12:03
 * @LastEditTime: 2022-11-24 16:14:57
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: Do not edit
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int myatoi(char* st);
int main(int argc, char *argv[]) {
    char test[8];
    printf("Enter a number of int:");
    scanf("%s",test);
    printf("you input int is: %d\n",myatoi(test));
    return 0;
}
int myatoi(char* st){
    int result = 0;
    int bit_mark = 1;
    int length = strlen(st);
    /* 从末尾开始转换，获取字符串的长度*/
    for(int i = length ;i > 0 ;i--){
        if(isdigit(*(st+i-1)) == 0){
            printf("Error in character.\n");
            return 0;
            /* 如果任意数位存在非数字字符，返回0 */
        }
        result += (*(st+i-1) - '0')*bit_mark;
        bit_mark *= 10;
        /* 按十进制位数，bit_mark不断增长。
         * 并按位数和当前位的数组取乘积。*/
    }
    return result;
}
