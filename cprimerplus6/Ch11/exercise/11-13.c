/*
 * @Author: tangxiao
 * @Date: 2022-11-24 16:05:58
 * @LastEditTime: 2022-11-24 16:06:02
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: Do not edit
 */
#include <stdio.h>

int main(int argc, char *argv[]) {
    if(argc < 2){
        /* 判断命令行参数个数，大于等于2 表示带参数*/
        printf("Error! not enough parameter to dispaly!\n");
    } else{
        for(int i = argc ; i > 1 ;i--){
            printf("%s ",argv[i-1]);
        }
        /* argv[0]存储了程序的文件名，因此需要逆序打印到agrv[1]*/
        printf("\n");
    }
    return 0;
}
