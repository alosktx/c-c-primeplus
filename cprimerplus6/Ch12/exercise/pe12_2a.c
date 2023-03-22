/*
 * @Author: tangxiao
 * @Date: 2022-10-22 22:13:35
 * @LastEditTime: 2022-10-22 22:16:32
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: Do not edit
 */
/* pe12_2a.c 源文件 */
// 与 pe12_2b.c 一起编译
#include "pe12_2a.h"

void set_mode(int n) {
    if (n > 1) {
        printf("Invalid mode specified.");
        if (mode == 0) {
            printf(" Mode 0(Mrtric) used.\n");
        } else {
            printf(" Mode 1(US) used.\n");
        }
    } else
        mode = n;
}

void get_info(void) {
    if (mode == 0)
        printf("Enter distance traveled in kilometers:");
    else
        printf("Enter distance traveled in miles:");
    scanf("%lf", &range);

    if (mode == 0)
        printf("Enter fuel consumed in liters:");
    else
        printf("Enter fuel consumed in gallons:");
    scanf("%lf", &fuel);
}

void show_info(void) {
    if (mode == 0)
        printf("Fuel consumption is %.2lf liters per 100 km.\n", (fuel / range) * 100);
    else
        printf("Fuel consumption is %.1lf miles per gallon.\n", range / fuel);
}
