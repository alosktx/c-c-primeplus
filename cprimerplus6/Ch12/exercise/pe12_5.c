/*
 * @Author: tangxiao
 * @Date: 2022-10-22 22:29:12
 * @LastEditTime: 2022-10-22 22:29:24
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: Do not edit
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
void sort(int array[], int n);

int main(int argc, char *argv[]) {
    int data[SIZE];

    srand((unsigned int)time(0));
    for (int i = 0; i < SIZE; i++) {
        data[i] = rand() % 10 + 1;
    }
    /* 设置随机数种子，并生成随机数的数组。 */
    printf("The original data is: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%4d ", data[i]);
    }
    printf("\n");

    sort(data, SIZE);
    printf("The sorted data is: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%4d ", data[i]);
    }
    printf("\n");
}
void sort(int array[], int n) {
    /* 通过整数的比较运算，循环查找数组中最大值，并交换至数组的末尾。
        交换排序，每次每次循环找最小的放头部
    */
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
