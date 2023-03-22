/*
 * @Author: tangxiao
 * @Date: 2022-10-22 22:40:17
 * @LastEditTime: 2022-10-22 22:42:22
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: Do not edit
 */
//pe12_7diceroll.c
#include "pe12_7diceroll.h"
#include <stdio.h>
#include <stdlib.h>      /* 提供库函数 rand()的原型 */
int roll_count = 0;      /* 外部链接 */
static int rollem(int sides)  /* 该函数属于该文件私有 */
{
    int roll;
    roll = rand() % sides + 1;
    ++roll_count;       /* 计算函数调用次数 */
    return roll;
}

int roll_n_dice(int dice, int sides)
{
    int d;
    int total = 0;
    if (sides < 2)
    {
        printf("Need at least 2 sides.\n");
        return -2;
    }
    if (dice < 1)
    {
        printf("Need at least 1 die.\n");
        return -1;
    }
    for (d = 0; d < dice; d++)
        total += rollem(sides);
    return total;
}
