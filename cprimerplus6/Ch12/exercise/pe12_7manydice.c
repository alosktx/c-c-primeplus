/*
 * @Author: tangxiao
 * @Date: 2022-10-22 22:40:34
 * @LastEditTime: 2022-10-22 22:45:28
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: Do not edit
 */
//pe12_7manydice.c
#include <stdio.h>
#include <stdlib.h>        /* 为库函数 srand() 提供原型 */
#include <time.h>         /* 为 time() 提供原型      */
#include "pe12_7diceroll.h"       /* 为roll_n_dice()提供原型，为roll_count变量提供声明 */
int main(int argc, char *argv[])
{
    int dice, roll;
    int sides;
    int set;
    srand((unsigned int) time(0)); /* 随机种子 */
    printf("Enter the number of sets; enter q to stop :");
    while(scanf("%d", &set) == 1 && set > 0) {
        printf("How many sides and how many dice?");
        if (scanf("%d %d", &sides, &dice) == 2 && sides > 0 && dice > 0) {
            printf("Here are %d sets of %d %d-sided throws.\n", set, dice, sides);
            for (int i = 0; i < set; i++) {
                roll = roll_n_dice(dice, sides);
                printf("%d ", roll);
            }
            set = 0;
            putchar('\n');
        }
        printf("Enter the number of sets; enter q to stop :");
    }
    printf("The rollem() function was called %d times.\n", roll_count);
     /* 使用外部变量 roll_count*/
    printf("GOOD FORTUNE TO YOU!\n");
    return 0;
}
