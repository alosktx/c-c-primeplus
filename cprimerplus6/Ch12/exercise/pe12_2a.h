/*
 * @Author: tangxiao
 * @Date: 2022-10-22 22:13:11
 * @LastEditTime: 2022-10-22 22:16:05
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: Do not edit
 */
/* pe12_2a.h 头文件 */
#include <stdio.h>

static int mode;
static double range, fuel;
/* 静态内部链接，实现静态存储，文件作用域，内部链接
 * 因此，三个变量使用函数外定义，static修饰 */
void set_mode(int n);
/* 设置显示模式函数需要判断用户的数据输入，因此使用带参数函数。*/
void get_info(void);
void show_info(void);
/* 函数内处理的数据均是文件作用域变量，因此不需要通过函数的参数传递数据。*/
