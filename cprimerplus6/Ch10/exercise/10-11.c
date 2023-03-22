#include <stdio.h>
#define COLS 5
#define ROWS 3

void show_element(int rows, int cols, const int t[rows][cols]);
void double_element(int rows, int cols, int t[rows][cols]);
/*
 * 程序内的打印函数和元素加倍函数均使用变长数组作为形式参数形式，使用传统方式定义两个函数
 * 的语句如下：
 * void show_element(int rows, int t[][COLS]);
 * void double_element(int rows, int t[][COLS]);
 * 两者在使用中没有区别，可以根据编译器的情况选用。显示函数不修改数组元素，需要使用 const
 * 关键字修饰，加倍函数则不能使用 const 关键字修饰二维数组参数。
*/
int main(void) {
    int arr[ROWS][COLS]={{1,0,4,6,9},{2,5,6,8,3},{5,3,21,1,6}};
    show_element(ROWS,COLS, arr);
    printf("\n");

    double_element(ROWS,COLS, arr);

    show_element(ROWS,COLS,arr);
    printf("\n");
    return 0;
}
void show_element(int rows, int cols,const int t[rows][cols]){
    for(int i = 0;i < rows; i++)
        for(int j = 0;j < cols; j++)
            printf("%4d ",t[i][j]);
}
void double_element(int rows, int cols, int t[rows][cols]){
    for(int i = 0;i < rows; i++)
        for(int j = 0;j < cols; j++)
            t[i][j] *= 2; //t[i][j] = t[i][j] * 2;
}