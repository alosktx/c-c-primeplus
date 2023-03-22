/*
 * @Author: tangxiao
 * @Date: 2022-11-24 16:14:17
 * @LastEditTime: 2022-11-24 16:14:20
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: Do not edit
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if(argc != 3){
        printf("Error argument. please retry.\n");
        return 0;
    }
    /* 计算一个double类型的整数次幂，需要2个参数，argc应为3 */
    float f = atof(argv[1]);
    int i = atoi(argv[2]);
    /* 使用字符串转整数和浮点数据的函数atof()和atoi()，*/
    float result = 1;
    for(int k = 0;k < i;k++){
        result = result*f;
    }
    /* 循环乘法 计算整数次幂 */
    printf("The %g 's %d power is %g\n",f,i,result);
    return 0;
}
