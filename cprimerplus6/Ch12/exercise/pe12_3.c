/*
 * @Author: tangxiao
 * @Date: 2022-10-22 22:20:06
 * @LastEditTime: 2022-10-22 22:20:29
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: Do not edit
 */
/* pe12-3.c 源文件 */
#include "pe12_3.h"

int main(int argc, char* argv[]) {
    int mode;
    double range, fuel;
    int n;

    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &mode);
    while (n >= 0) {
        set_mode(&mode, n);
        get_info(mode, &range, &fuel);
        show_info(mode, range, fuel);
        printf("Enter 0 for metric mode, 1 for US mode: ");
        printf(" (-1 to quit ): ");
        scanf("%d", &n);
    }
    printf("Done.\n");
    return 0;
}

void set_mode(int* mode, int n) {
    if (n > 1) {
        printf("Invalid mode specified.");
        if (*mode == 0) {
            printf(" Mode 0(Mrtric) used.\n");
        } else {
            printf(" Mode 1(US) used.\n");
        }
        return;
    } else
        *mode = n;
}

void get_info(int mode, double* range, double* fuel) {
    if (mode == 0)
        printf("Enter distance traveled in kilometers:");
    else
        printf("Enter distance traveled in miles:");
    scanf("%lf", range);

    if (mode == 0)
        printf("Enter fuel consumed in liters:");
    else
        printf("Enter fuel consumed in gallons:");
    scanf("%lf", fuel);
}

void show_info(int mode, double range, double fuel) {
    if (mode == 0)
        printf("Fuel consumption is %.2lf liters per 100 km.\n", (fuel / (range)) * 100);
    else
        printf("Fuel consumption is %.1lf miles per gallon.\n", range / fuel);
}
