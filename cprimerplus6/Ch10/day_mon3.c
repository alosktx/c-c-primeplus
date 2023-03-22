/*
 * @Author: tangxiao
 * @Date: 2022-10-11 14:50:47
 * @LastEditTime: 2023-01-11 10:45:42
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: Do not edit
 */
/* day_mon3.c -- uses pointer notation */
#include <stdio.h>
#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;
    
    for (index = 0; index < MONTHS; index++)
        printf("Month %2d has %d days.\n", index +1,
               *(days + index));   // same as days[index]
    
    return 0;
}

/*
16  2   3   13
5   11  10   8
9   7   6  12
4   14  15  1
*/