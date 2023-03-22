#include <stdio.h>
#define MONTHS 12 //一年的月份数
#define YEARS 5 //年数
void year_average(int years,int months, const float t[years][months]);
void month_average(int years,int months, const float t[years][months]);
/*函数使用变长数组作为形式参数。
 * */
int main(void) {
    const float rain[YEARS][MONTHS] = {
            {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
            {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
            {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
            {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
            {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2},
    };
    year_average(YEARS,MONTHS,rain);
    month_average(YEARS,MONTHS,rain);
    /*函数调用*/
    printf("\n");
    return 0;
}

void year_average(int years,int months, const float t[years][months]){
    float subtot, total;
    int month, year;
    printf(" YEAR      RAINFALL.  (inchs)\n");
    for(year = 0, total = 0; year < years; year++){
        for(month = 0, subtot = 0; month < months; month++)
            subtot += t[year][month];
        printf("%5d %15.1f\n", 2010 + year,subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.1f inches. \n\n",total/YEARS);
}
/*计算年平均降水函数，使用内部循环内计算每年平均降水，外部循环计算5年平均降水
 * */
void month_average(int years,int months, const float t[years][months]){
    float subtot = 0;
    int month, year;
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
    printf("Nov  Dec\n");

    for(month = 0; month < months; month++){
        for(year = 0, subtot = 0;year < years; year++)
            subtot += t[year][month];
        printf("%4.1f ",subtot/years);
    }
}
/*函数计算月平均降水，对于二维数组，外部循环的是月份值的变换，内部循环是年份变化（主数组），
 * 和年均降水的循环嵌套略有不同。
 * */