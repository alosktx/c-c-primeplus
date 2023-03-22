/*
 * @Author: tangxiao
 * @Date: 2022-10-19 17:08:05
 * @LastEditTime: 2022-10-19 17:09:28
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: 模拟抽奖数字或挑选陪审团成员的另一种实现方案(标记)
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

void myselect(int data[], int length, int n);
int main(void) {
    int test[SIZE], number;
    printf("Enter number to selected: ");
    scanf("%d", &number);
    for (int i = 0; i < SIZE; i++) {
        test[i] = i;
    }
    myselect(test, SIZE, number);
    return 0;
}
void myselect(int data[], int length, int n) {
    srand((unsigned long)clock());
    printf("Start to select Number.\n");
    int* marks = (int*)malloc(length * sizeof(int));
    /* 定义选择标示数组，大小和data数组相同*/
    int index;
    while (n > 0) {
        index = rand() % length;
        if (marks[index] != 0)
            continue;
        else
            marks[index] = 1;
        /* 随机选择，如果未标记，则选择并做使用过的标记，否则重选 */
        printf("Selected ID: %3d DATA: %3d \n", index, data[index]);
        /* 通过标记数组找到对应的原data数组并显示内容。*/
        n--;
    }
}
