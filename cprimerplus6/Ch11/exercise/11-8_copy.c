/*
 * @Author: tangxiao
 * @Date: 2022-11-23 16:30:49
 * @LastEditTime: 2022-11-23 16:30:53
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: Do not edit
 */
#include <stdio.h>
#include <string.h>
#define SIZE 80

char* string_in(char* st, char* sub);

int main(int argc, char *argv[]) {
    char main_string[SIZE], sub[SIZE];
    char *p = NULL;
    printf("Enter a String as main string (blank to quit.): ");
    fgets(main_string,SIZE,stdin);
    main_string[strlen(main_string)-1] = '\0';

    printf("Enter a sub string to find in main :");
    fgets(sub,SIZE,stdin);
    sub[strlen(sub)-1] = '\0';

    while(*main_string != '\0'){
        /* 读取用户输入的主串(main_string)、子串(sub) */
        p = string_in(main_string,sub);
        /* 调用子串函数，并返回子串地址。 */
        if(p == NULL){
            printf("can't find %s in %s\n", sub, main_string);
        }
        else {
            printf("Done!\nNow the position of sub string is:");
            printf("%p\n",p);
        }
        printf("Another? Enter a String as main string (blank to quit.): ");
        fgets(main_string,SIZE,stdin);
        main_string[strlen(main_string)-1] = '\0';

        printf("Enter a sub string to find in main :");
        fgets(sub,SIZE,stdin);
        sub[strlen(sub)-1] = '\0';
    };
    return 0;
}

char* string_in(char* st, char* sub){
    int count = 0;
    int src_len = strlen(sub);

    while(*st != '\0' && count < src_len){
        /* count表示子串中被匹配的字符数，循环入口为
         * 主串不为空、或者子串匹配完成 */
        if(*(st + count) == *(sub + count)){
            count++;
            /* 匹配到第一个字符后，主串指针并未后移，而是通过子串计数
             * 开始进行剩余字符的匹配检查。 */
        }else{
            count = 0;
            st++;
            /* 如果没有匹配到子串的字符，主串的指针后移。并清空子串计数。*/
        }
    }
    if(count == src_len) return st;
    else return NULL;
}
