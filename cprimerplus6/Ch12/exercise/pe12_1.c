/*
 * @Author: tangxiao
 * @Date: 2022-10-22 22:04:44
 * @LastEditTime: 2022-10-22 22:07:47
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: 不使用全局变量，重写程序清单12-4
 */
/* pe12-1.c -- deglobalizing global.c */
/* Programming Exercise 12-1
 */
/* one of several approaches */
#include <stdio.h>
void critic(int* u);
int main(void) {
    int units;
    /* units now local */
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56)
        critic(&units);
    printf("You must have looked it up!\n");
    return 0;
}
void critic(int* u) {
    printf("No luck, my friend. Try again.\n");
    scanf("%d", u);
}
// or use a return value:
// units = critic();
// and have critic look like this:
/*
int critic(void)
{
int u;
printf("No luck, my friend. Try again.\n");
scanf("%d", &u);
return u;
}
*/
// or have main() collect the next value for units