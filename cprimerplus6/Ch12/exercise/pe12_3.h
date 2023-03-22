/*
 * @Author: tangxiao
 * @Date: 2022-10-22 22:19:58
 * @LastEditTime: 2022-10-22 22:20:11
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: Do not edit
 */
/* pe12-3.h 头文件 */
#include <stdio.h>

void set_mode(int* mode, int n);
/* set_mode()函数需要修改mode变量，因此使用指针方式进行数据传输 */

void get_info(int mode, double* range, double* fuel);
/* get_info() 函数读取用户输入的距离和汽油数据，因此使用指针形式传递
 * 距离和汽油变量，返回值为void。*/

void show_info(int mode, double range, double fuel);
/* 修改函数为参数传递，由于程序功能是直接打印计算结果，所以返回值为void*/
