/*
 * @Author: tangxiao
 * @Date: 2022-11-23 08:54:22
 * @LastEditTime: 2022-11-23 09:17:20
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: Do not edit
 */
#include <stdio.h>
#define SIZE 40
char * read_char(char *st,int n);

int main(int argc, char *argv[]){
    char test[SIZE+1];
    puts("Start to test function. Enter a string.");
    read_char(test, SIZE);
    puts("\nThe string you input is:");
    puts(test);
    /* 打印显示数组的输入结果，也可以使用循环显示数组元素形式，
     * 某些情况下显示结果不同。 */
    return 0;
}

char * read_char(char *st, int n){
    int i = 0;
    do{
        st[i] = getchar();
    }while(st[i] != EOF && ++i < n);
    /* 读取用户输入的字符，直到输入EOF或者到输入界限。
     * 此处也可以使用指针形式进行操作，例如：
     * *(st + i) = getchar();
     * */
    printf("i: %d\n", i);
    st[i] = '\0';
    return st;
}
