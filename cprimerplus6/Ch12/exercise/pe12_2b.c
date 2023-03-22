/*
 * @Author: tangxiao
 * @Date: 2022-10-22 22:13:44
 * @LastEditTime: 2022-10-22 22:15:05
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: Do not edit
 */
/* pe12_2b.c 源文件 */
// 与 pe12_2a.c一起编译
#include <stdio.h>

#include "pe12_2a.h"

int main(void) {
    int mode;
    printf("Enter 0 for metric mode, 1 for US mode:");
    scanf("%d", &mode);
    while (mode >= 0) {
        set_mode(mode);
        get_info();
        show_info();
        printf("Enter 0 for metric mode, 1 for US mode:");
        printf(" (-1 to quit ): ");
        scanf("%d", &mode);
    }
    printf("Done.\n");
    return 0;
}
