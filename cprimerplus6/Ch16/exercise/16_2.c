/*
 * @Author: tangxiao
 * @Date: 2022-10-19 16:34:29
 * @LastEditTime: 2022-10-19 16:35:41
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: 计算调和平均数
 */
/* pe16-2.c */
#include <stdio.h>
#define HMEAN(X, Y) (2.0 * (X) * (Y) / ((X) + (Y)))
int main(void) {
    double x, y, ans;
    puts("Enter a pair of numbers (q to quit): ");
    while (scanf("%lf %lf", &x, &y) == 2) {
        ans = HMEAN(x, y);
        printf("%g = harmonic mean of %g %g.\n", ans, x, y);
        // see if works with arithmetic expressions
        ans = HMEAN(x + y, x * y);
        printf("%g = harmonic mean of %g %g.\n", ans, x + y, x * y);
        puts("Enter a pair of numbers (q to quit): ");
    }
    puts("Bye");
    return 0;
}