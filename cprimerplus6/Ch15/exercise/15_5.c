/*
 * @Author: tangxiao
 * @Date: 2022-10-17 09:48:34
 * @LastEditTime: 2022-10-17 10:10:27
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: 编写一个函数，把一个unsigned int类型值中的所有位向左旋转指定数量的位，例如，rotate_l(x, 4)把x中所有位向左移动4个位置，而且从最左端移出的位会重新出现在右端。也就是说，把高阶位移出的位放入低阶位，在一个程序中测试该函数。
 */
#include <limits.h>
#include <stdio.h>
//循环移位
unsigned int rotate_l(unsigned int, unsigned int);
// int型整数值转换器为二进制字符串
char *itobs(int, char *);

int main(void) {
    unsigned int val;
    unsigned int rot;
    unsigned int places;
    char bstr1[CHAR_BIT * sizeof(int) + 1];
    char bstr2[CHAR_BIT * sizeof(int) + 1];

    printf("Enter an integer (q to quit): ");
    while (scanf("%ud", &val)) {
        printf("Enter the number of bits to be rotated: \n");
        if (scanf("%ul", &places) != 1)
            break;
        rot = rotate_l(val, places);
        itobs(val, bstr1);
        itobs(rot, bstr2);
        printf("%u rotated is %u.\n", val, rot);
        printf("%s rotated is %s.\n", bstr1, bstr2);
        printf("Next value: ");
    }

    puts("Done");
    return 0;
}

unsigned int rotate_l(unsigned int n, unsigned int b) {
    static const int size = CHAR_BIT * sizeof(int);
    unsigned int overflow;

    //防止出现移动负数位
    b %= size; /* keep b a valid value */

    overflow = n >> (size - b); /* save bits that are shifted out */
    return (n << b) | overflow;
}

char *itobs(int n, char *ps) {
    int i;
    const static int size = CHAR_BIT * sizeof(int);

    for (i = size - 1; i >= 0; i--, n >>= 1)
        ps[i] = (01 & n) + '0';
    ps[size] = '\0';

    return ps;
}