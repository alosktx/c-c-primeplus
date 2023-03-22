/*
 * @Author: tangxiao
 * @Date: 2022-11-23 10:39:08
 * @LastEditTime: 2022-11-23 14:28:30
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: Do not edit
 */
#include <stdio.h>
#include <ctype.h>
/* 使用isalpha()需要添加该头文件 */
#define SIZE 80
char * get_word(char *out);

int main(int argc, char *argv[]){
    char output[SIZE];
    get_word(output);
    printf("First word you input is: %s\n", output);
    return 0;
}

char * get_word(char *out){
    char input[SIZE];
    char *in = input;

    puts("Enter a String:");
    fgets(input,SIZE,stdin);

    while((*in == '\n' || *in == '\t' || *in == ' ')&& *in != '\0')
        in++;
    /*  通过while循环删除掉字符串前面空白。此处需要注意无单词的字符串。
     * 当前代码只是删除指定的字符，日常使用可以使用isalpha()来判断是
     * 否英文字符，这样可以删除多种标点符号和特殊字符。可读性和应用性更加广泛。
     * */
    while(*in != '\n' && *in != '\t' && *in != ' ' && *in != '\0'){
        *out++ = *in++;
    }
    /* 从第一个非空白字符开始复制，直到单词结束，这里同样可以使用isalpha()。
     * 题目未要求输出到字符串，因此可以结束。如果需要保存至字符串，添加：
     * *out++ = '\0';
     * */
    *out++ = '\0';
    return out;
}
